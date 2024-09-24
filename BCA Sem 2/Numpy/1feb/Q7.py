# Q7 choose winners randomly using random
import numpy as np

names = np.array(["Sagar", "Priyanshu", "Rohit", "Dhruv"])
randomWinner = np.random.choice(names)
print("Winner:", randomWinner)
