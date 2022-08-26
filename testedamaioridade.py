atual = 2022; cmaior = 0 ; cmenor = 0

for x in range (1, 8):
    ano = int(input(f"Digite o ano de nascimento da {x}ª pessoa: "))
    if atual - ano < 18: cmenor += 1  
    else: cmaior += 1

print(f"O numero de pessoas maior de idade é de {cmaior}")
print(f"O numero de pessoas menor de idade é de {cmenor}")

