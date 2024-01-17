lista = input().split(" ")
a = int(lista[0])
b = int(lista[1])
c = int(lista[2])

maiorAB = ((a + b) + abs(a - b)) / 2

if maiorAB > c:
    print(f'{int(maiorAB)} eh o maior')
else:
    print(f"{c} eh o maior")