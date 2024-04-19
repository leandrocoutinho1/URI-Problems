v = []

for i in range(20):
    n = int(input())
    v.append(n)
f = 19
for i in range(10):
    temp = v[i]
    v[i] = v[f]
    v[f] = temp
    f -= 1

for i in range(20):
    print("N[%d] = %d" % (i, v[i]))
