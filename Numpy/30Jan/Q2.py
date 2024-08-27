# Q2. Create a numpy program to create an array with values 1, 25, 2500,
# 250000 and determine the size of the memory occupied by the array.
# also try replacing with float,char and string values

import numpy as np

# Create a NumPy array with the specified values
intArr = np.array([1, 25, 2500, 250000])

# Determine the size of the memory occupied by the array
intMemory_size = intArr.nbytes

# Print the array and its memory size
print("Int Array:", intArr)
print("Memory size:", intMemory_size, "bytes")

floatArr = np.array([1.0, 25.0, 2500.0, 250000.0])  # very big or small numbers prints in unlikely way
floatMemorySize = floatArr.nbytes

print("Float Array: ", floatArr)
print("Memory size:", floatMemorySize, "bytes")

# charArr = np.array(['A','B','C','D'])  # both take same space
charArr = np.array(['a', 'b', 'c', 'd'])
charMemorySize = charArr.nbytes
print("Char Array: ", charArr)
print("Memory Size: ", charMemorySize, "bytes")

stringArr = np.array(["Sagar", "Priyanshu", "Abhishek", "Rohit"])
stringMemorySize = stringArr.nbytes
print("String Array: ", stringArr)
print("Memory Size: ", stringMemorySize, "bytes")
