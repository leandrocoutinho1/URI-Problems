lista1 = input().split(" ") 
lista2 = input().split(" ")

x1 = float(lista1[0]) 
y1 = float(lista1[1])
x2 = float(lista2[0]) 
y2 = float(lista2[1])


distancia = (((x2 - x1)**2) + ((y2 - y1) ** 2)) ** (1/2)

print('%0.4f' % distancia)