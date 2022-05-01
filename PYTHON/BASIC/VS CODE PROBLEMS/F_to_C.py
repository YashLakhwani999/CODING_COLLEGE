A=int(input("IF you want to convert farenhiet to celcius 'PRESS 1'.IF you want to convert Celcius to Farenhiet 'PRESS 2'::"))
if A==1:
    F=int(input("Enter temperature in Ferenhiet :"))
    C=(F-32)*5//9
    print("The Temperature in Celcius is -->",C)
elif (A==2):
    C=int(input("Enter temperature in Celcius :"))
    F=(C*(9//5))+32
    print("The Temperature in Farenhiet is -->",F)
else:
    print("Invalid Selection!!!")