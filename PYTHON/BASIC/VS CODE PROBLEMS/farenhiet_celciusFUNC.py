def printTable(start,end,step):
    for i in range(start,end+1,step):
            celcius_value= (i-32)*5//9
            print(i,celcius_value)
        
    


printTable(100,200,25)
