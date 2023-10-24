import requests

# Call the API and input what city you live in
api_key = "bd85f478903fe894bc379f0cb433764c"
city = input("Type in the city you live in\n")
url = "http://api.openweathermap.org/data/2.5/weather?q="+city+"&appid="+api_key+"&units=metric"

# Prosessing the JSON Data
request = requests.get(url)
json = request.json()

# Getting The forecast and temperature outside
forecast = json.get("weather")[0].get("description")
temp = json.get("main").get("temp")

# Finally Printing out the weather for the city
print("The temperature in", city ,"is", temp ,"celcius, the forecast says its", forecast ,"outside")