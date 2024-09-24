# create a numpy program to do an element wise comparison including
# greater than and greater than equal to of 2 given arrays

import numpy as np

arr1 = np.array([1, 2, 3, 4, 11])
arr2 = np.array([1, 7, 8, 9, 10])

greater = np.greater(arr1, arr2)
greater_than_equal_to = np.greater_equal(arr1, arr2)

print("Greater: ", greater)
print("Greater than equal to: ", greater_than_equal_to)


