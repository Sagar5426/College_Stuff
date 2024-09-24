# Q6
# program to create array of 15 random num and then shuffle and print them
import numpy as np

random_num = np.random.randint(0, 100, size=15)
print("original random array:", random_num)
np.random.shuffle(random_num)
print("shuffled array:", random_num)

