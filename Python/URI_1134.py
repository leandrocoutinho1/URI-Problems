dic = {}
dic["a"] = 0
dic["g"] = 0
dic["d"] = 0

cond = True

while(cond):
    x = int(input())
    if(x == 1):
        dic["a"] += 1
    elif(x == 2):
        dic["g"] += 1
    elif(x == 3):
        dic["d"] += 1
    elif(x == 4):
        cond = False

print("MUITO OBRIGADO")
print("Alcool:", dic["a"])
print("Gasolina:", dic["g"]) 
print("Diesel:", dic["d"]) 
