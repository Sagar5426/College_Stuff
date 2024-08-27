import numpy as np

arr_random = np.random.rand(3, 2, 4)
print(arr_random)

arr_randInt = np.random.randint(0, 20, size=(3, 2, 4))
print(arr_randInt)

print("Max: ", np.max(arr_randInt), " Min: ", np.min(arr_randInt))

arr_unsort = np.random.randint(0, 15, size=8)
print("Unsorted array: ", arr_unsort)
print("Sorted array: ", np.sort(arr_unsort))

arr_string = np.array(['a'])
print("size: ", arr_string.itemsize)

arr_arange = np.arange(31, 71, 2)
print("Array using arange: ", arr_arange)

arr_linspace = np.linspace(5,10,5)
print(arr_linspace)