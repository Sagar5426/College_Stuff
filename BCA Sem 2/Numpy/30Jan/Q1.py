# Q1. Create a numpy program to create an element-wise comparison(greater 
# than, greater than or equal to, less than, less than or equal to,
# equal to) of 2 arrays
import numpy as np
# Create two sample arrays
array1 = np.array([1, 2, 3, 4, 5])
array2 = np.array([4, 2, 5, 1, 6])

# Element-wise greater than comparison
greater_than_result = np.greater(array1, array2)
# Element-wise greater than or equal to comparison
greater_than_equal_result = np.greater_equal(array1, array2)
# Element-wise less than comparison
less_than_result = np.less(array1, array2)
# Element-wise less than or equal to comparison
less_than_equal_result = np.less_equal(array1, array2)
# Element-wise equal to comparison
equal_result = np.equal(array1, array2)

# Print the results
print("Array1:", array1)
print("Array2:", array2)
print("Greater than result:", greater_than_result)
print("Greater than or equal result:", greater_than_equal_result)
print("Less than result:", less_than_result)
print("Less than or equal result:", less_than_equal_result)
print("Equal result:", equal_result)
