# write a numpy program to create 5*5 zero matrix with elements on the
# main diagonal as 3,6,2,1,4
import numpy as np

diagonal_elements = [3, 6, 2, 1, 4]
zero_matrix = np.diag(diagonal_elements)
print("5x5 Zero Matrix with Diagonal Elements:")
print(zero_matrix)
