n=int(input())
i=1
while i<=n:
    space=1
    while space <= n-i:
        print(" ",end="")
        space=space+1
    p=i
    j=1
    while j<=i:
        print(p, end="")
        j=j+1
        p=p+1
    p=2*i-2
    while p>=i:
        print(p,end="")
        p=p-1
    print()
    i=i+1