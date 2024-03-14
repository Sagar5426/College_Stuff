import numpy as np

# Creating a 1-dimensional array 'arr' containing integers from 1 to 6
arr = np.array([1, 2, 3, 4, 5, 6])
print(arr)  # Printing the array
print(type(arr))  # Printing the type of the array

# Creating a zero-dimensional array 'zeroDimenArr' with a single element 43
zeroDimenArr = np.array(43)
print("Dimension of zeroDimenArr: ", zeroDimenArr.ndim)  # Printing the dimension of the zero-dimensional array
print("Dimension of arr: ", arr.ndim)  # Printing the dimension of the One-dimensional array

# Printing the data type of the zero-dimensional array 'zeroDimenArr' and array 'arr'
print("dtype of zeroDimenArr: ", zeroDimenArr.dtype)
print("dtype of arr: ", arr.dtype)

# Printing the shape (dimensionality) of the array 'arr'
print("shape of arr: ", arr.shape)  # Output: (6,) - 1-dimensional array with 6 elements

# Creating a zero-dimensional array
scalar_array = np.array(42)
# Printing the shape of the zero-dimensional array
print("Shape of scalar_array:", scalar_array.shape)  # Output: () empty brackets

# 2-dimensional array (matrix)
arr_2d = np.array([[1, 2, 3], [4, 5, 6]])
print("Shape of arr_2d:", arr_2d.shape)  # Output: (2, 3) - 2-dimensional array with 2 rows and 3 columns

# Printing the item size (number of bytes per element) of the array 'arr'
print("itemSize of arr: ", arr.itemsize)

# Creating a 2-dimensional array 'arr2d' with 2 rows and 3 columns
arr2d = np.array([[1, 2, 5], [3, 7, 10]])
print(arr2d.shape)  # Printing the shape of the array (number of rows and columns)
print(arr2d.reshape(3, 2))  # Reshaping the array to have 3 rows and 2 columns and printing it

# Creating a 3-dimensional array 'arr3d'
arr3d = np.array([[[1, 2, 3], [4, 5, 6], [7, 8, 9]]])
print(arr3d)  # Printing the 3-dimensional array
print()
print(arr2d)  # Printing the previously created 2-dimensional array 'arr2d'
print(arr3d.ndim)  # Printing the number of dimensions of the 3-dimensional array 'arr3d'

# Checking if all elements in 'arr' evaluate to True
print(arr.all())

# Checking if any element along axis 0 in 'arr' evaluates to True
print("_____")
print(arr.any(0))
print("_____")

# Creating an array of Boolean values 'arrBool'
arrBool = np.array([True, True, False, True])

# Checking if all elements in 'arrBool' evaluate to True
print(arrBool.all())
print("_____")

# Checking if any element in 'arrBool' evaluates to True
print(arrBool.any())

# Creating an array 'arrNum' containing integers from 0 to 5
arrNum = np.array([0, 1, 2, 3, 4, 5])

# Checking if all elements in 'arrNum' evaluate to True
print(arrNum.all())  # return true if all element is 0

# Checking if any element in 'arrNum' evaluates to True
print(arrNum.any())  # return true if any element is 0

# Printing the size (number of elements) of 'arrNum'
print(arrNum.size)
