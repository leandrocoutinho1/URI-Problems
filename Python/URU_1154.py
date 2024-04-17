lista = []
soma = cont = 0.0

while True:
    x = int(input())
    if(x >= 0):
        soma += x
        cont += 1.0
    else:
        break

print("{:.2f}".format(soma/cont))
