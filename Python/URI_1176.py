def fibonacci(n):
    if (n == 0):
        return 0
    elif (n == 1):
        return 1
    else:
        lista = [0, 1]
        for i in range(2, n):
            lista.append((lista[len(lista)-1]) + (lista[len(lista)-2]))
            
        soma = (lista[len(lista)-1]) + (lista[len(lista)-2])
    return soma

n = int(input())
for i in range(n):
    x = int(input())
    result = fibonacci(x)
    print("Fib(%d) = %d" % (x, result))
