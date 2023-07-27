i = 0
while i <= 2:
    for j in range(1, 4):
        if (i==0) or (i==1.0) or (i==2.0):
            i = int(i)
            j = int(j)
            print(f"I={i} J={i+j}")
        else:
            print(f"I={round(i, 2)} J={round(i+j, 2)}")
    i += 0.2