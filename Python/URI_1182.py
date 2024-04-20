L = int(input())
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
    result += item[L]
if(T == 'S'):
    print("%.1f" % result)
else:
    print("%.1f" % (result/12))