n = int(input())
v = []

for i in range(10):
    v.append(n)
    n *= 2
    
for i in range(10):
    print("N[%d] = %d" % (i, v[i]))