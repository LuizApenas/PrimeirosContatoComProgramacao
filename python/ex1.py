
venda_mensal = int(input("Digite aqui o valor da sua venda mensal: "))

# comi1 = comissão 1 ; comi2 = comissão 2 ...

if venda_mensal >= 100_000:
    comi1 = venda_mensal * 0.16
    total_comi1 = 700 + comi1
    print(f'Sua comissão é de R${total_comi1:,.2f}')
elif 100_000 <= venda_mensal >= 80_000:
    comi2 = venda_mensal * 0.14
    total_comi2 = 650 + comi2
    print(f'Sua comissão é de R${total_comi2:,.2f}')
elif 80_000 <= venda_mensal >= 60_000:
    comi3 = venda_mensal * 0.14
    total_comi3 = 600 + comi3
    print(f'Sua comissão é de R${total_comi3:,.2f}')
elif 60_000 <= venda_mensal >= 40_000:
    comi4 = venda_mensal * 0.14
    total_comi4 = 550 + comi4
    print(f'Sua comissão é de R${total_comi4:,.2f}')
elif 40_000 <= venda_mensal >= 20_000:
    comi5 = venda_mensal * 0.14
    total_comi5 = 500 + comi5
    print(f'Sua comissão é de R${total_comi5:,.2f}')
elif 20_000 < venda_mensal:
    comi6 = venda_mensal * 0.14
    total_comi6 = 400 + comi6
    print(f'Sua comissão é de R${total_comi6:,.2f}')
