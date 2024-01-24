i = int(input())

a = i // 365
i = i %365

m = i // 30
i = i %30

d = i 

print(f'{a} ano(s)')
print(f'{m} mes(es)')
print(f'{d} dia(s)')