import requests
import json

query = input("What type of news are you interested in? ")
url = f"https://newsapi.org/v2/everything?q={query}&from=2023-09-26&sortBy=publishedAt&apiKey=1f0c25029067473997951cfa083595de"
r = requests.get(url)
news = json.loads(r.text)
# print(news, type(news))
for article in news["articles"]:
  print(article["title"])
  print(article["description"])
  print("--------------------------------------")
  
