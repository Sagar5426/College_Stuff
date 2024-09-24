# Q3. Write a Numpy program to create 3 different arrays of 10 zeroes,
# 10 ones & 10 eights.

import numpy as np

# Create arrays of 10 zeroes, 10 ones, and 10 eights
array_zeros = np.zeros(10)
array_ones = np.ones(10)
array_eights = np.full(10, 8)

# Print the arrays
print("Array of 10 zeroes:", array_zeros)
print("Array of 10 ones:", array_ones)
print("Array of 10 eights:", array_eights)
