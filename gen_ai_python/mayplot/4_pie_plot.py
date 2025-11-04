import matplotlib.pyplot as plt
import numpy as np


x = np.array([25, 35 , 20, 20])
my_labels = np.array(["apple", "banana","orange","watermelon"])
my_explode  = np.array([0.2,0,0,0])
plt.pie(x,labels = my_labels,explode= my_explode)
plt.legend(title = "Fruit",loc="upper right")
plt.show()