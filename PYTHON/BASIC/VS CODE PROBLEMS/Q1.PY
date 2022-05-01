F=[]
n=int(input())
n1,n2= 0,1
count=0
if n==1:
    print(n2)
while count <= n:
       F.append(n1)
       nth = n1 + n2
       n1 = n2
       n2 = nth
       count += 1
b=len(F)
print(F[b-1])