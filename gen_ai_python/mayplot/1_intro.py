import matplotlib.pyplot as plt
import numpy as np


#line plot
xpoint = np.array([1,3])
ypoint = np.array([2,4])
first_grah = plt.plot(xpoint,ypoint)



cgpa = np.array([6,6.5,7,7.5,8,8.5,9,9.5,10])
pkg = np.array([12,30,25,59,32,44,55,70,88])
plt.plot(cgpa,pkg,"*:g",markersize=15)  #ms marker size #mec=marker edge color

plt.grid()
plt.show()