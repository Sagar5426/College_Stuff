# Q5
# program to create array of 20 random num and then sort and print them
import numpy as np

random_num = np.random.randint(0, 100, size=20)
print("original random array:", random_num)
sort_num = np.sort(random_num)
print("Sorted array:", sort_num)
