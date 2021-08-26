#quando acabar navegador.quit()
import pdfkit 
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
import time
import os

placa = str(input("Digite aqui a placa do Veículo: "))
placa_2 = placa.upper()
renavam = str(input("Digite aqui o renavam do Veículo: "))  

time.sleep(1.5)

# sites das pesquisas para fazer 
url_prf= "https://nadaconsta.prf.gov.br/nada_consta/index.jsf"
url_dnit = "http://servicos.dnit.gov.br/multas/"

nav = webdriver.Chrome()

#DNIT - ok 
nav.get(url_dnit)

#colar a placa do veículo 
nav.find_element_by_xpath('//*[@id="placa"]').send_keys(f'{placa_2}')

#colar o renavam do veículo
nav.find_element_by_xpath('//*[@id="renavam"]').send_keys(f'{renavam}')

#dar ENTER
nav.find_element_by_xpath('//*[@id="app"]/div[3]/div[1]/div/div/div/div/div/form/div[4]/button').send_keys(Keys.ENTER)

"""

#DPRF

nav.get(url_prf)

#colar a placa do veículo 
nav.find_element_by_xpath('//*[@id="formConsultarExterno:placa"]').send_keys(f'{placa_2}')

#colar o renavam do veículo
nav.find_element_by_xpath('//*[@id="formConsultarExterno:renavam"]').send_keys(f'{renavam}')

#nav.find_element_by_xpath('//*[@id="recaptcha-anchor"]/div[1]').send_keys(Keys.ENTER)
"""
