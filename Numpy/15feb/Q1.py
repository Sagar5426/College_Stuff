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
