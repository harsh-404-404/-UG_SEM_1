import matplotlib.pyplot as plt
import numpy as np

x = np.array([1,2,3,4,5,6,7,8])
y = np.array([200,180,160,150,130,120,110,100])
plt.xlabel("age of car")
plt.ylabel("speed of car")
plt.title("scatter plot")
plt.scatter(x,y)
plt.show()