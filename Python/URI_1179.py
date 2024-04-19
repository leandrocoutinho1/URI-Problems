par = []
imp = []
for i in range(15):
    n = int(input())
    if(n%2 == 0):
        if(len(par)<5):
            par.append(n)
        else:
            for j in range(len(par)):
                print("par[%d] = %d" % (j, par[j]))
            par = [n]
    else:
        if(len(imp)<5):
            imp.append(n)
        else:
            for j in range(len(imp)):
                print("impar[%d] = %d" % (j, imp[j]))
            imp = [n]
if(imp):
    for k in range(len(imp)):
        print("impar[%d] = %d" % (k, imp[k]))
if(par):
    for z in range(len(par)):
        print("par[%d] = %d" % (z, par[z]))