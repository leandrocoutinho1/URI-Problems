n = int(input())
v = []
v = list(map(int, input().strip().split()))

menor = v[0]
pos = 0
for j in range(n):
    if(v[j] <= menor):
        menor = v[j]
        pos = j

print("Menor valor: %d" % (menor))
print("Posicao: %d" % (pos))