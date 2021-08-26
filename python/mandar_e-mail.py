import pyautogui
import time
import pyperclip
import pandas as pd

# 1 - Dar ALT TA

pyautogui.PAUSE = 3
pyautogui.hotkey('alt', 'tab')

# 2 - Entrar no e-mail

pyautogui.hotkey('ctrl', 't')
email = "https://mail.google.com/mail/u/0/#inbox"
pyperclip.copy(email)
pyautogui.hotkey('ctrl', 'v')
pyautogui.hotkey('enter')

time.sleep(5)

# 3 - Digitar o e-mail

pyautogui.click(138, 211)
time.sleep(2)
pyautogui.click(1244, 271)
time.sleep(4)
pyautogui.click(564, 200)
pyautogui.write("erick2003rocha@gmail.com")
pyautogui.hotkey('tab')
pyautogui.hotkey('tab')
assunto_email = "Mensagem de Aniversário AUTOMATIZADA KKK"
pyperclip.copy(assunto_email)
pyautogui.hotkey('ctrl', 'v')
pyautogui.hotkey('tab')
pyautogui.hotkey('ctrl', 'a')
texto_email = """Bom Dia,

KKK Feliz aniversário  pelo python xD 

Abs
Luiz Felipe
"""
pyperclip.copy(texto_email)
pyautogui.hotkey('ctrl', 'v')
pyautogui.hotkey('ctrl', 'enter')  