import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import requests
import json


dataframe=pd.read_csv('datasets/zomato.csv', encoding='ISO-8859-1')
df=dataframe.copy()
#summarised all the other cities in Rest of India while those in New Delhi, Ghaziabad, Noida, Gurgaon, Faridabad to Delhi-NCR.
lst=['New Delhi', 'Ghaziabad', 'Noida', 'Gurgaon', 'Faridabad']
for i in lst:
    df.loc[df['City']==i, 'City']='Delhi-NCR'
#filtering and keeping all the indian cities in the data frame
#filtered all the indian cities/states
df=df.loc[df.Currency=='Indian Rupees(Rs.)']



#now in the filtered dataframe i have copied all the elements of column 'City', in the filtered dataframe to a numpy array np_City
cities=[]
for i in df['City']:
    cities.append(i)
np_city=np.array(cities)
#initialised two variables corresponding to the restaurants in delhi ncr and rest states
count_delhi=0
other=0
for i in np_city:
    if i=='Delhi-NCR':
        count_delhi+=1
    else:
        other+=1
#plotted a graph between number of restaurants present in delhi ncr and the rest of india.
plt.bar(['Delhi-NCR', 'Other Cities'], [count_delhi, other], color='orange')
plt.xlabel('states')
plt.ylabel('number of restaurants')
plt.show()
print('Delhi-NCR= ', count_delhi)
print('Others= ', other)