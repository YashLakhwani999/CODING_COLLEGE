l=[]
n=int(input())
if n//10==0:
    i=1
elif n//100==0:
    i=2
elif n//1000==0:
    i=3
elif n//10000==0:
    i=4
elif n//100000==0:
    i=5
else:
    pass
temp=n
while n>0:
    dig=n%10
    r=(dig)**(i)
    l.append(r)
    n=n//10
if temp==(sum(l)):
    print("true")
else:
    print("false")