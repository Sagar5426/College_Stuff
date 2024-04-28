
# WAP using pandas to add, subtract, multiply and divide 2 panda series

import pandas as pd

# Sample data for demonstration
data1 = {'A': 10, 'B': 20, 'C': 30}
data2 = {'A': 5, 'B': 15, 'C': 25}

# Creating Pandas Series from the sample data
series1 = pd.Series(data1)
series2 = pd.Series(data2)

# Addition
addition_result = series1 + series2
print("Addition Result:")
print(addition_result)

# Subtraction
subtraction_result = series1 - series2
print("\nSubtraction Result:")
print(subtraction_result)

# Multiplication
multiplication_result = series1 * series2
print("\nMultiplication Result:")
print(multiplication_result)

# Division
division_result = series1 / series2
print("\nDivision Result:")
print(division_result)
