from random import choice

jogador = 0
maquina = 0


def jogador():
    print('''PEDRA, PAPEL OU TESOURA!!  ''')
    esc = str(input("Escolha uma das opções acima: ")).lower
    
    if esc == "pedra" : return esc  
    elif esc == 'papel': return esc
    elif esc == 'tesoura': return esc
    else:
        print("Opção inválida!!")
        jogador()


    while True:
        escolha = jogador()

        escolha = input("Jogar novamente?: ")
        if escolha in ["sim", "SIM", "Sim", "s", "S"]:
            jogador()
        elif escolha in ["NAO", "não", "Não", "nao", "NÃO", "N", "n"]:
            break
        else:
           break


def maquina():
   
    escmaq = choice(['pedra' , 'papel', 'tesoura']).lower
    return escmaq
    

jogador()
   
   




