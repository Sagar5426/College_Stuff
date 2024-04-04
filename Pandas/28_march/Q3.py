
# WAP to sort a given series

import pandas as pd

# Sample data for demonstration
data = {'B': 10, 'A': 5, 'C': 30}

# Creating Pandas Series from the sample data
series = pd.Series(data)

# Sorting the series
sorted_series = series.sort_values()

print("Sorted Series:")
print(sorted_series)
