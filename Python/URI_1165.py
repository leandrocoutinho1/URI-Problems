n = int(input())
for i in range(n):
    x = int(input())
    cont = 0
    for j in range(2, x):
        if(x%j == 0):
            cont += 1
    if(cont == 0):
        print(x, "eh primo")
    else:
        print(x, "nao eh primo")