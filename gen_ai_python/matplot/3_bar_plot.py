import matplotlib.pyplot as plt
import numpy as np

#bar plot work on numerical s well as categorical data

fruit = np.array(["apple","banana","Orange","watermelon"])
fruit_number = np.array([100, 80, 50, 120])
color = ["red","yellow","orange","green"]
plt.barh(fruit,fruit_number,color = color)  #bar for normal graph #barh for horizontal
plt.show()