l = int(input())
u = int(input())
s = 0
for i in range(l, u+1):
    for j in repr(i):
        s += int(j)
print(s)