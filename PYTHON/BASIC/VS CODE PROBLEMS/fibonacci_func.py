def checkmember(n):
    l=[0]
    n1,n2= 0,1
    count=0
    if n==1:
        l.append(n2)
    while count <= n:
        nth = n1 + n2
        n1 = n2
        n2 = nth
        count += 1
        l.append(nth)
        if n in l:
            return True

        pass

n=int(input())
if(checkmember(n)):
    print("true")
else:
    print("false")