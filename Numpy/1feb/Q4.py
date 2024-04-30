import numpy as np

# Create a 3x3x4 array with random integers
random_array = np.random.randint(0, 100, size=(3, 3, 4))

print("3x3x4 array with random numbers:")
print(random_array)

# Find the minimum and maximum values using indexing
minimum_value = np.min(random_array)
maximum_value = np.max(random_array)

print("\nMinimum value:", minimum_value)
print("Maximum value:", maximum_value)
