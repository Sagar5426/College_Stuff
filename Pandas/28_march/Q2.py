# WAP using pandas to compare the elements of 2 panda series

import pandas as pd

# Sample data for demonstration
data1 = {'A': 10, 'B': 20, 'C': 30}
data2 = {'A': 5, 'B': 15, 'C': 30}  # Change the value of 'C' for demonstration

# Creating Pandas Series from the sample data
series1 = pd.Series(data1)
series2 = pd.Series(data2)

# Comparison
comparison_result = series1 == series2
print("Comparison Result:")
print(comparison_result)
