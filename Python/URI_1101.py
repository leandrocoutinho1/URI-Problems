def receber_dados():
    resp = input("Digite dois números: ")
    return resp

def realizar_soma():
    soma = 0
    texto = ""
    if M < N:
        for i in range(M, N + 1):
            texto = texto + (str(i)) + " "
            soma += i
    else:
        for i in range(N, M + 1):
            texto = texto + (str(i)) + " "
            soma += i

    return (f"{texto}Sum={soma}")

while True:
    M, N = (receber_dados()).split(" ")
    M = int(M)
    N = int(N)
    
    if (M > 0) and (N > 0):
        print(realizar_soma())
    else:
        break