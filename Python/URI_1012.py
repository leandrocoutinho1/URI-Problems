pi = 3.14159

lista = input().split(' ')
A = float(lista[0])
B = float(lista[1])
C = float(lista[2])

TRIANGULO = (A * C) / 2.0
CIRCULO = pi * C**2
TRAPEZIO = ((A + B) * C) / 2
QUADRADO = B * B
RETANGULO = A * B

print("TRIANGULO: %0.3F" % TRIANGULO)
print("CIRCULO: %0.3F" % CIRCULO)
print("TRAPEZIO: %0.3F" % TRAPEZIO)
print("QUADRADO: %0.3F" % QUADRADO)
print("RETANGULO: %0.3F" % RETANGULO)
