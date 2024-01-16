i = 0
cont = 1
while i <= 2:
    if (cont==1):
        print(f"I=0 J=1")
        print(f"I=0 J=2")
        print(f"I=0 J=3")
    elif (cont==6):
        print(f"I=1 J=2")
        print(f"I=1 J=3")
        print(f"I=1 J=4")
    elif (i>1.9 and i<2.1):
        print(f"I=2 J=3")
        print(f"I=2 J=4")
        print(f"I=2 J=5")
    else:
        for j in range(1, 4):
            print(f"I={round(i, 2)} J={round(i+j, 2)}")
    i += 0.2
    cont += 1
