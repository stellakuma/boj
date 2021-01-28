m,n = map(int, input().split(" "))
a = list()

for i in range(0, m):
    a.insert(i, list(map(int, input().split(" "))))
    t = [ k for k in range(n) ]
    for j in range(0, n):
        t[a[i].index(max(a[i]))] = j
        a[i][a[i].index(max(a[i]))] = min(a[i])-1
    a[i] = t

rs = 0
while True:
    if len(a) == 1 :
        print(rs)
        break;
    else :
        s = 0
        for j in range(1, len(a)):
            if (a[j] in globals()) == False :
                break;
            if a[0] == a[j]:
                rs += 1
                del a[j]
            if j == len(a)-1 :
                del a[0]
                if s > 1 :
                    for i in range(s-1, 0, -1) :
                        rs += i