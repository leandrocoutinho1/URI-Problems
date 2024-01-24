tempo = int(input())


h = tempo // 3600
tempo = tempo%3600

m = tempo // 60
tempo = tempo%60

s = tempo

print(f"{h}:{m}:{s}") 