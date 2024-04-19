while True:
    n = int(input())
    if(n == 0):
        break
    else:
        cont = 0
        soma = 0
        while(cont < 5):
            if(n%2 == 0):
                soma += n
                cont += 1
            n += 1
        print(soma)
