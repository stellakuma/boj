a = set()
while True:
    n = input()
    if n != 0:
        a.add(n)
    else :
        break;
m = 0
for i in list(a):
    for j in range(1, i):
        