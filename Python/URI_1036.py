lista = input().split(" ") 

A = float(lista[0]) 

B = float(lista[1]) 

C = float(lista[2]) 

delta = (B**2 - 4*A*C)

if delta < 0 or A == 0:
    print("Impossivel calcular")
else:
    R1 = ((-B) + (delta**(1/2))) / (2*A)
    R2 = ((-B) - (delta**(1/2))) / (2*A)
    print("R1 = %0.5f" % R1)
    print("R2 = %0.5f" % R2)