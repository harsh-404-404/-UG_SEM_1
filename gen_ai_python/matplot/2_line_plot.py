import matplotlib.pyplot as plt
import numpy as np

# Data for line 1
x1 = np.array([1, 3, 5])
y1 = np.array([2, 25, 50])

# Data for line 2
cgpa = np.array([6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10])
pkg = np.array([12, 30, 25, 59, 32, 44, 55, 70, 88])

# Plot both lines on the same axes
# Add a 'label' for the legend
plt.plot(x1, y1,".:r", label='First Line')
#ms can be used instade of markersize 
#mec means marker edge color
plt.plot(cgpa, pkg, "*:g", markersize=15, label='CGPA vs Package',linestyle='--',mec = "orange",linewidth = 3) # "*:g"[marker][line][color] here g= green linestyle is alternatiev as well
font1 = {'family':'serif','color':'blue','size':20}
plt.xlabel("X-axis",fontdict=font1)
plt.ylabel("Y-axis")
plt.title("Two Lines on One Plot")
plt.grid(True)

# This command looks for the 'label' on each plot and displays it
plt.legend(title = "xyz", loc="upper right")

plt.show()