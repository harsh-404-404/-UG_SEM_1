import numpy as np #rename numpy as np


#turn list into numpy
my_array = np.array([1,3,4,6,4,3,8])
print("this is array",my_array,"in python")

my_array = np.array([2.3,732.09,3.4,3.01,3.0],dtype=np.float64)
print("this is array with floating point datatype",my_array)

print('third item of array',my_array[3])

#slicing
print("slicing from index 1 to 4",my_array[1:5])

#2D array
my_2d_array = np.array([[1,2,3],[4,5,6],[7,8,9]])
print("2D array\n",my_2d_array)
print("2nd row 3rd column",my_2d_array[1,2]) #my_2d_array[row,colum]

#slicing 2d array
print("slicing 2d array\n",my_2d_array[0:2,1:3]) #my_2d_array[row_start:row_stop , col_start:col_stop]

#shape of array
print("shape of 2d array",my_2d_array.shape)
print("number of dimensions of 2d array",my_2d_array.ndim)
print("size of 2d array",my_2d_array.size)
print("data type of 2d array",my_2d_array.dtype)
print("item size of 2d array",my_2d_array.itemsize)
print("total bytes of 2d array",my_2d_array.nbytes)

#reshaping array
#reshape(number of row,number of column)      total elemets in original array in total should be row*column 
#E.x if original array is 6*4 total 9 elements than in reshape array total elements should be 9 .reshape(12,2) .reshape (24,1)
#You can use -1 to let NumPy automatically figure out one of the dimension E.x reshape (1,-1) this mean no matter how many elemetns I wawnt 1 row and column -1 row (-1 mean)
reshaped_array = my_2d_array.reshape(1,9)
print("reshaped array\n",reshaped_array)
#reshaping array -1 means calculate dimension automatically
reshaped_array = my_2d_array.reshape(9,-1)
print("reshaped array\n",reshaped_array)
#iterating array
for i in my_2d_array:
    print("2d array row",i)
for i in my_2d_array.flat:
    print("2d array element",i)

#array operations
array1 = np.array([1,2,3,4])
array2 = np.array([5,6,7,8])
print("array1 + array2",array1 + array2)

print("array1 - array2",array1 - array2)
print("array1 * array2",array1 * array2)
print("array1 / array2",array1 / array2)
print("array1 ** 2",array1 ** 2)
print("array1 % 2",array1 % 2)
print("sin(array1)",np.sin(array1))
print("cos(array1)",np.cos(array1))
print("sqrt(array1)",np.sqrt(array1))
print("log(array1)",np.log(array1))
print("exp(array1)",np.exp(array1))
print("max of array1",np.max(array1))
print("min of array1",np.min(array1))
print("sum of array1",np.sum(array1))
print("mean of array1",np.mean(array1))
print("median of array1",np.median(array1))
print("standard deviation of array1",np.std(array1))
print("variance of array1",np.var(array1))
print("dot product of array1 and array2",np.dot(array1,array2))
print("concatenate array1 and array2",np.concatenate((array1,array2)))
print("stack array1 and array2 vertically\n",np.vstack((array1,array2)))
print("stack array1 and array2 horizontally\n",np.hstack((array1,array2)))
print("sort array2",np.sort(array2))
print("unique elements in array2",np.unique(array2))
print("transpose of 2d array\n",np.transpose(my_2d_array))
print("flatten 2d array\n",my_2d_array.flatten())
print("copy of 2d array\n",my_2d_array.copy())
print("sum of all elements in 2d array",np.sum(my_2d_array))
print("sum of columns in 2d array",np.sum(my_2d_array,axis=0))
print("sum of rows in 2d array",np.sum(my_2d_array,axis=1))




#creating special arrays
zeros_array = np.zeros((3,4),dtype="int")
print("3x4 array of zeros\n",zeros_array)
ones_array = np.ones((2,3))

print("2x3 array of ones\n",ones_array)
full_array = np.full((2,2),7)
print("2x2 array of sevens\n",full_array)
eye_array = np.eye(3)
print("3x3 identity matrix\n",eye_array)
random_array = np.random.random((2,2))
print("2x2 array of random numbers\n",random_array)
arange_array = np.arange(0,10,2)
print("array with values from 0 to 10 with step 2",arange_array)
linspace_array = np.linspace(0,1,5)
print("array with 5 values evenly spaced between 0 and 1",linspace_array)
#saving and loading array
np.save('my_array.npy',my_array)
loaded_array = np.load('my_array.npy')
print("loaded array from file",loaded_array)
np.savetxt('my_2d_array.txt',my_2d_array)
loaded_2d_array = np.loadtxt('my_2d_array.txt')
print("loaded 2d array from file\n",loaded_2d_array)



#matrix operations
matrix1 = np.matrix([[1,2],[3,4]])
matrix2 = np.matrix([[5,6],[7,8]])
print("matrix1 + matrix2\n",matrix1 + matrix2)
print("matrix1 * matrix2\n",matrix1 * matrix2)
print("determinant of matrix1",np.linalg.det(matrix1))
print("inverse of matrix1\n",np.linalg.inv(matrix1))
print("eigenvalues and eigenvectors of matrix1",np.linalg.eig(matrix1))
print("solve linear equations matrix1 * x = [1,2]",np.linalg.solve(matrix1,[1,2]))
#random seed
np.random.seed(42)
random_array1 = np.random.random((2,2))
print("2x2 array of random numbers with seed 42\n",random_array1)
#reshaping array
reshaped_array = my_2d_array.reshape(1,9)
print("reshaped array\n",reshaped_array)
#reshaping array -1 means calculate dimension automatically
reshaped_array = my_2d_array.reshape(9,-1)
print("reshaped array\n",reshaped_array)


