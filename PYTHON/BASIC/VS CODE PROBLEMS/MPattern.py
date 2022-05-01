n=int(input())
a=(n+1)/2
b=a-1
i=1
while i<=a:
    space=1
    while space <= (i):
        print(" ",end="")
        space=space+1
    j=1
    while j<=i:
        print("*",end="")
        j=j+1
    print()
    i=i+1
v = b
while v>=1:
    space = 1
    while space<=(v):
        print(" ",end="")
        space = space + 1
    star = 1    
    while star<=v:
        print("*",end="")
        star = star + 1
    print()
    v = v - 1
