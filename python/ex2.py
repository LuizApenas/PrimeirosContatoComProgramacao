
salario = float(input('Digite aqui o salario:'))
tempo_de_servico = int(
    input('Digite aqui o tempo de serviço(exemplo: dois anos = 2, 2 meses = 0.2): '))

if salario <= 500:
    salario = (salario * 0.25) + salario
    #print(f'O novo salario será R${reajuste1:,.2f}')
elif salario <= 1_000:
    salario = (salario * 0.20) + salario
    #print(f'O novo salario será R${salario:,.2f}')
elif salario <= 1_500:
    salario = (salario * 0.15) + salario
    #print(f'O novo salario será R${reajuste3:,.2f}')
elif salario <= 2_000:
    salario = (salario * 0.10) + salario
    #print(f'O novo salario será R${reajuste4:,.2f}')
else:
    print('Sem direito a reajuste')

if tempo_de_servico < 1:
    print('Não tem bônus')
elif 1 <= tempo_de_servico <= 3:
    salario = salario + 100
    #print('E irá ter um bônus de R$100,00')
elif 4 <= tempo_de_servico <= 6:
    salario = salario + 200
    #print('E irá ter um bônus de R$200,00')
elif 7 <= tempo_de_servico <= 10:
    salario = salario + 300
    #print('E irá ter um bônus de R$300,00')
elif tempo_de_servico >= 10:
    salario = salario + 500
    #print('E irá ter um bônus de R$500,00')

print(f'O novo salario {salario:,.2f}')
