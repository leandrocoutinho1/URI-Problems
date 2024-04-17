def fibonacci(n):
    if (n == 1):
        return "0"
    elif (n == 2):
        return "0 1"
    else:
        lista = [0, 1]
        msg = "0 1 "
        for i in range(2, n):
            lista.append((lista[len(lista)-1]) + (lista[len(lista)-2]))
            msg += str(lista[-1]) + " "
    return msg

n = int(input())

print(fibonacci(n).strip())

