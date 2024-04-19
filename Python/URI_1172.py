v = []

for i in range(10):
    n = int(input())
    if(n>0):
        v.append(n)
    else:
        v.append(1)

for i in range(10):
    print("X[%d] = %d" % (i, v[i]))