from selenium import webdriver
from translate import Translator

d=webdriver.Chrome()
url="https://www.classcentral.com/"
d.get(url)
text=d.page_source


transla=Translator(to_lang="hi")
translation=transla.translate(text)
print(translation)