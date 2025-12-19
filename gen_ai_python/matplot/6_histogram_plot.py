#this histogram shows a frequency distribution

import matplotlib.pyplot as plt
import numpy as np

x = np.random.randint(40,100,(1,200)) #thtis will return 2-d
x = x.flatten() #turn x in to 1D
print(x)
plt.xlabel("Marks of students")
plt.ylabel("Number of students")
plt.title("Histogram plot of students marks")
plt.hist(x,bins = 20)  #bins = 20 means (number of stips = 20)
plt.show()
