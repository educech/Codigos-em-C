soma = 0
for x in range (1, 4):
    n = int(input(f"Digite o {x} valor: "))
    if n % 2 == 0:
        soma += n
print(f"A soma dos valores pares é {soma}")