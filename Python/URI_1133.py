x = int(input())
y = int(input())

if(y < x):
    temp = x
    x = y
    y = temp

soma = 0
for i in range(x + 1, y):
    if(i%5 == 3 or i%5 == 2):
        print(i)
