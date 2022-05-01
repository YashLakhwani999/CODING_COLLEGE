n=int(input())
i=1
while i<=n:
    space=1
    while space<=i-1:
        print("0",end="")
        space=space+1
    j=1
    while j<2:
        print("*",end="")
        j=j+1
    space=1
    while space<=n-i:
        print("0",end="")
        space=space+1
    j=1
    while j<2:
        print("*",end="")
        j=j+1
    space=1
    while space<=n-i:
        print("0",end="")
        space=space+1
    j=1
    while j<2:
        print("*",end="")
        j=j+1
    space=1
    while space<=i-1:
        print("0",end="")
        space=space+1
    print()
    i=i+1