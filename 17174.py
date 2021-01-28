a,b = map(int, input().split(" "))
c = int(a/b)
cr = c
while True:
    if int(cr/b) != 0:
        c += int(cr/b)
        cr = int(cr/b)
    else:
        break;
print(a+c)