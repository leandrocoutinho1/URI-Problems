cont = 12
c = 0
T = input()
result = 0
matriz = []
for i in range(12):
    line = []
    for j in range(12):
        x = float(input())
        line.append(x)
    matriz.append(line)
indice = 0
for item in matriz:
    if(indice==0):
        indice += 1
    else:
        for k in range(cont, 12):
            result += item[k]
            c += 1
    cont -= 1
if(T == 'S'):
    print("%.1f" % result)
else:
    print("%.1f" % (result/c))
    