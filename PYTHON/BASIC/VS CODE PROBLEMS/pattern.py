n=int(input())
s=1
for i in range(1,n+1):
    for j in range(s,s+n):
        print(j,end=" ")
    print()
    if(i==(n+1)//2):
        if ((n%2)!=0):
            s=n*(n-2)+1
        else:
            s=n*(n-1)+1
    elif (i>((n+1)//2)):
        s=s-2*n
    else:
        s=s+2*n

