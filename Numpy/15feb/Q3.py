# Write a numpy program to compare sum of all elements ,sum of each row to sum of each column in a given matrix
import numpy as np

your_matrix_here = np.array([[1, 2, 3],
                             [4, 5, 6],
                             [7, 8, 9]])

total_sum = np.sum(your_matrix_here)
row_sums = np.sum(your_matrix_here, axis=1)
column_sums = np.sum(your_matrix_here, axis=0)

print("Matrix:")
print(your_matrix_here)
print("\nSum of all elements:", total_sum)

for row_sum in row_sums:
    print("Sum of elements in a row:", row_sum)

for column_sum in column_sums:
    print("Sum of elements in a column:", column_sum)
