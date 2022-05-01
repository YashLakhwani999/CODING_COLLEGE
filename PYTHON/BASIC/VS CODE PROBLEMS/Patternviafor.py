n=4
for i in range(1,n+1,1):
    for j in range(n-i):
        print(" ",end="")
    for k in range(i,2*i,1):
        print(k,end="")
    for q in range(2*i-2,i-1,-1):
        print(q,end="")
    print()