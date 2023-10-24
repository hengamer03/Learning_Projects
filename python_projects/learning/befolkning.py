import requests

url = "http://data.ssb.no/api/v0/dataset/1074.json?lang=no"

total = input("vil du ha hele norges befolking? ja eller nei \n")

url_request = requests.get(url)
json = url_request.json()

if total == "ja":
    befolkning = sum(json.get("dataset").get("value"))
    print("Norges befolking er", befolkning)
else:
    alder = input("hvilken alder vill du vite hvor mange det er av, mellom 0 til 105 år \n")
    år = json.get("dataset").get("value")[int(alder)]
    print("det er",år , alder ,"åringer i Norge")