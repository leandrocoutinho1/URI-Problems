X, Y = map(int, input().strip().split())

cont = 0

msg = ""

for i in range(1, Y + 1):
    msg += str(i) + " " 
    cont += 1
    if(cont == X or i == Y):
        print(msg.strip())
        cont = 0
        msg = ""
