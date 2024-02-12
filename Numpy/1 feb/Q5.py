# Q5
# program to create array of 20 random num and then sort and print them
import numpy as np

random_num = np.random.rand(20)
print("original random array:", random_num)
np.sort(random_num)
print("Sorted array:", random_num)
