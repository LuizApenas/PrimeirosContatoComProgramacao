print('Digite aqui a data para saber se é valida! \n')

day = int(input('Digite aqui o dia: '))
month = int(input('Digite aqui o mês: '))
year = int(input('Digite aqui o ano: '))

if month == 2:
    if month == 2 and day == 29 and year % 4 == 0 and year % 100 != 0 or year % 400 == 0:  # Ano Bissexto
        print("Data Valida")
    elif month == 2 and day == 29 and year % 4 != 0 and year % 100 != 0 or year % 400 != 0:  # Ano não Bissexto
        print(f"Data Invalida,o ano {year} não é bissexto")
    elif day > 28:
        print("Data Valida")
elif month == 1 or 3 or 5 or 7 or 8 or 10 or 12 and day <= 31:
    print("Data Valida")
elif month == 4 or 6 or 9 or 11 and day <= 30:
    print("Data Valida")
