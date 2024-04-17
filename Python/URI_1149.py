lista = list(map(int, input().split()))

a = lista[0]
soma = 0
for i in range (1, len(lista)):
    if(lista[i] > 0):
        n = lista[i]

for i in range(n):
    soma += a + i

print(soma)