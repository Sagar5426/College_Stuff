# write a numpy program to find no of rows and columns in a matrix

import numpy as np

def find_rows_columns(matrix):
    matrix_array = np.array(matrix)

    rows, columns = matrix_array.shape

    return rows, columns


your_matrix_here = [[45, 12, 69],
                    [44, 23, 43],
                    [89, 25, 41],
                    [76, 90, 71]]

rows, columns = find_rows_columns(your_matrix_here)

print("Number of rows:", rows)
print("Number of columns:", columns)

# write a numpy program to create 5*5 zero matrix with elements on the main diagonal as 3,6,2,1,4
diagonal_elements = [3, 6, 2, 1, 4]
zero_matrix = np.diag(diagonal_elements)
print("5x5 Zero Matrix with Diagonal Elements:")
print(zero_matrix)

# Write a numpy program to compare sum of all elements ,sum of each row to sum of each column in a given matrix

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