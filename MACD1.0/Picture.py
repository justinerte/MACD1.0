import numpy as np
import matplotlib.pyplot as plt
import csv

csvfile=file('./table.csv','rd')
reader = csv.reader(csvfile)
Date = []
Adjclose = []
isSell = []
isBuy = []
EMA12 = []
EMA26 = []
MACD = []
Signal = []
i = 0
NUMBER =[]
for line in reader:
	if(i < 36):
		i = i+1
	elif(i < 500):
		i= i+1
		NUMBER.append(i)
		Date.append(line[0]) 
		Adjclose.append(line[1])
		EMA12.append(line[2])
		EMA26.append(line[3])
		MACD.append(line[4])
		Signal.append(line[5])
		if(line[6]!='0'):
			isBuy.append(line[1])
		else:
			isBuy.append(-100)
		if(line[7]!='0'):
			isSell.append(line[1])
		else:
			isSell.append(-100)
csvfile.close()

x = NUMBER
y = Adjclose
# a = isSell
b = isBuy
z = isSell

plt.figure(figsize=(8,4))
plt.plot(x,y,label="$price$",color="red",linewidth=1)
plt.plot(x,z,'ro',label="$isSell$")
plt.plot(x,b,'go',label="$isBuy$")
plt.xlabel("Time(d)")
plt.ylabel("price")
plt.title("Example")
plt.ylim(0,500)
plt.legend()
plt.show()