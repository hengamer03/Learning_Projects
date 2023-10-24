import requests

# make a requests call to the API
response = requests.get('http://api.open-notify.org/astros.json')
json = response.json()

# print out how many people there are in space, and then proceed to print their names
print("there are currently", json['number'] , "people in space, their names are:")
for person in json['people']:
    print(person['name'])