n = int(input())
for i in range(n):
    X, Y = map(int, input().strip().split())
    cont = 0
    soma = 0
    while(cont < Y):
        if(X%2 != 0):
            soma += X
            cont += 1
        X += 1
    print(soma)
