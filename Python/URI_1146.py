cond = True

msg = ""
while (cond):
    n = int(input())
    if(n == 0):
        cond = False
    else:
        for i in range (1, n + 1):
            msg += str(i) + " "
        print(msg.strip())
        msg = ""
    