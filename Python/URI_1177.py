v = []
n = int(input())
cont = 0
for i in range(1000):
    if(cont == n):
        cont = 0
    v.append(cont)
    cont += 1

for i in range(1000):
    print("N[%d] = %d" % (i, v[i]))
