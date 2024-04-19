v = []
n = float(input())
cont = 0
for i in range(100):
    v.append(n)
    n /= 2.0

for i in range(100):
    print("N[%d] = %.4f" % (i, v[i]))
