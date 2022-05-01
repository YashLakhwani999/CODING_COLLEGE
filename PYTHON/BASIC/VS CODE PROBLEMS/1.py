n=int(input())
a=(n+1)/2
b=a-1
i=1
while i<=a:
    spaces = 1
    while spaces <= a-i:
        print(" ", end="")
        spaces = spaces+1  
    j=1
    while j<=2*i-1:
        print("*", end="")
        j=j+1
    print()
    i=i+1
v = b    
while v>=1:
    space = 1
    while space<=(b-v+1):
        print(" ",end="")
        space = space + 1
    star = 1    
    while star<=(2*v-1):
        print("*",end="")
        star = star + 1
    print()
    v = v - 1
