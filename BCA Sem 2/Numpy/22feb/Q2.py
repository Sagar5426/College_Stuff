# WAP to find the largest element in the array using argmax() functions

import numpy as np

arr1 = np.array([1, 2, 45, 32, 54, 6, 21])
max_index = np.argmax(arr1)  # It returns index
print("Max Element using argmax:", arr1[max_index])

# returns element not index
print("Max Element:", np.max(arr1))
print("Min Element:", np.min(arr1))

# minimum takes two arrays as input tells which one is shorter

arr2 = np.array([3, 5, 2])
arr3 = np.array([1, 6, 4])

min_arr = np.minimum(arr2, arr3)
print("Array with minimum value:", min_arr)  # Output: [1 5 2]
