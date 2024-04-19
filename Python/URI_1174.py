v = []

for i in range(100):
    n = input()
    try:
        n = int(n)
    except Exception as e:
        n = float(n)
    v.append(n)

for i in range(100):
    if(v[i] <= 10):
        print("A[%d] = %.1f" % (i, v[i]))
