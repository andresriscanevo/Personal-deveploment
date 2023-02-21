import requests
from bs4 import BeautifulSoup
from translate import Translator
url="https://www.classcentral.com/"
response=requests.get(url)
soup=BeautifulSoup(response.text,"html.parser")
text=soup.get_text()
transla=Translator(to_lang="hi")
translation=transla.translate(text)
print(translation)

