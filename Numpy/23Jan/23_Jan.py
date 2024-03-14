import numpy as np

# Q1.Create an array of 5 elements using numpy. Copy this array into another array using copy command
# a) Change the 3rd element of the original array only.Print both the arrays
# b) Change the 4th element of the copied array only.Print both the arrays only.Print both the arrays. 
# Write your observations.

print("1st Question")

arr = np.array([1, 2, 3, 4, 5])
copyArr = arr.copy()

arr[2] = 10
print("Original Array: ", arr)
print("Copied Array: ", copyArr)

copyArr[3] = 9
print("Original Array: ", arr)
print("Copied Array: ", copyArr)

# Q2.Create an array of seven names. Copy this Array using view Command
# a) Change the 5th name to 'Sam' in original array only.
# Print the output of both the arrays
# b) Change the 6th name to 'Amit' in copied array only.
# Print the output of both the arrays.Write your observations

print("___________________________")
print("2nd Question")

names = np.array(["Anuj", "Vishal", "Rohit", "Ishika", "Aman", "Keshav", "Ajay"])
copyNames = names.view()

print("Original Array: ", names)
print("Copied Array: ", copyNames)

names[4] = "Sam"
print("Original Array: ", names)
print("Copied Array: ", copyNames)

copyNames[5] = "Amit"
print("Original Array: ", names)
print("Copied Array: ", copyNames)

# Q3
# To write the difference between b/w syntax and semantic error in programming?
# Give example from your current practical?
