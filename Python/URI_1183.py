cont = 1
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
for item in matriz:
    for k in range(cont, 12):
        result += item[k]
        c += 1
    cont += 1
if(T == 'S'):
    print("%.1f" % result)
else:
    print("%.1f" % (result/c))