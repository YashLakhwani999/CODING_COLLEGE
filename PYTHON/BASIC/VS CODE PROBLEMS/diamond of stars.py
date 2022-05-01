n=int(input())
a=(n+1)//2
b=n-a
for i in range(1,a+1):
    for s in range(a-i):
        print(" ", end="")
    for j in range(2*i-1):
        print("*",end="")
    print()
for i in range(1,b+1):
    for s in range(i):
        print(" ",end="")
    for j in range(2*(b-i)+1):
        print("*",end="")
    print()