# q1 create an empty dataframe

import pandas as pd

df = pd.DataFrame()
print(df)

# q2 create a dataframe using list
data = ['apple', 'orange', 'tomato', 'potato', 'banana']
df = pd.DataFrame(data)
print(df)

# q3 create a dataframe using dictionary
data = {'Fruit': ['Apple', 'Orange', 'watermelon'], 'quantity': ['2kg', '3kg', '4kg']}
df = pd.DataFrame(data)
print(df)

# q4 create a dataframe using list of dictionary
data = {'a': [1, 3, 5, 7], 'b': [2, 4, 6, 8], 'c': [9, 10, 11, 12], 'd': [13, 14, 15, 16]}
df = pd.DataFrame(data)
print(df)

# q5 add a new col to q4 dataframe
# Adding a new column named 'e'
df['e'] = [20, 21, 22, 23]
print(df)

# q6 delete the above added column in q5
# Using pop
df.pop('e')
print(df)

# q7 print the first row of q4 using loc
print(df.loc[0])

# q8 print the first row of q3 using iloc
print(df.iloc[0])


