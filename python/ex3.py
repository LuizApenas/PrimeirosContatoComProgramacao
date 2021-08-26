
hora_entrada = int(input('Digite aqui a hora de entrada: '))
minutos_entrada = int(input('Digite aqui os minutos de entrada: '))
hora_saida = int(input('Digite aqui a hora de saida: '))
minutos_saida = int(input('Digite aqui os minutos de saida: '))
minutos_total_entrada = (hora_entrada * 60) + minutos_entrada
minutos_total_saida = (hora_saida * 60) + minutos_saida

total = minutos_total_saida - minutos_total_entrada

if total <= 60:
    print('Total a pagar R$1,00')
elif 60 < total <= 120:
    print('Total a pagar R$2,OO')
elif 120 < total <= 180:
    print('Total a pagar R$3,40')
elif 180 < total <= 240:
    print('Total a pagar R$4,80')
elif total > 240:
    calc = (total/60) * 2
    print(f'Total a pagar R${calc:,.2f}')
