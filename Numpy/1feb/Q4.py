# Q4. Create a 3x3x4 array with random numbers
import numpy as np
random_array = np.random.rand(3, 3, 4)
print("3x3x4 array with random numbers:")
print(random_array)
# Find the minimum and maximum values using indexing
minimum_value = np.min(random_array)
maximum_value = np.max(random_array)
print("\nMinimum value:", minimum_value)
print("Maximum value:", maximum_value)