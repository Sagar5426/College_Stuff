# WAP using pandas to create the mean and standard deviation of the data
# given in the series

import pandas as pd

# Sample data for demonstration
data = {'A': [10, 20, 30, 40, 50]}

# Creating Pandas Series from the sample data
series = pd.Series(data['A'])

# Calculating mean and standard deviation
mean_value = series.mean()
std_deviation = series.std()

print("Mean:", mean_value)
print("Standard Deviation:", std_deviation)
