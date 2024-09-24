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

# q5 write a program using pandas to select second row of the dataframe of q4 question
data = [{'a': 1, 'b': 2}, {'a': 3, 'b': 4}]
df = pd.DataFrame(data)
print(df.iloc[1])

# q6 write a program using pandas to add a row to the dataframe in q4 question
data = [{'a': 1, 'b': 2}, {'a': 3, 'b': 4}]
df = pd.DataFrame(data)
df = pd.DataFrame({'a': [5], 'b': [6]})
print(df)

# q7 write a program using pandas to delete a row from the dataframe in q4 question
data = [{'a': 1, 'b': 2}, {'a': 3, 'b': 4}]
df = pd.DataFrame(data)
df.drop(0)
print(df)

# q8 write a program using pandas to select  a column from the dataframe in q4 question
data = {'a': [1, 3, 5, 7], 'b': [2, 4, 6, 8], 'c': [9, 10, 11, 12], 'd': [13, 14, 15, 16]}
df = pd.DataFrame(data)
print(df['a'])
# q9 write a program using pandas to add a column to the dataframe in q4 question
data = {'a': [1, 3, 5, 7], 'b': [2, 4, 6, 8], 'c': [9, 10, 11, 12], 'd': [13, 14, 15, 16]}
df = pd.DataFrame(data)
df['e'] = [17, 18, 19, 20]
print(df)

# q10 write a program using pandas to delete a column from the dataframe in q4 question
data = {'a': [1, 3, 5, 7], 'b': [2, 4, 6, 8], 'c': [9, 10, 11, 12], 'd': [13, 14, 15, 16]}
df = pd.DataFrame(data)
df.drop('a', axis=1)
print(df)
