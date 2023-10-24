import requests

name = input("please type in your name \n")

url = "https://api.agify.io?name="+name

url_request = requests.get(url)
age = url_request.json()

age_number = age.get("age")

print("you will become", age_number , "years old!")