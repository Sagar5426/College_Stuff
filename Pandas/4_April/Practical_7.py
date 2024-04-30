# q1 create an empty dataframe

import pandas as pd

empty_df = pd.DataFrame()
print(empty_df)

# q2 create a dataframe using list
list_data = ['apple', 'orange', 'tomato', 'potato', 'banana']
list_df = pd.DataFrame(list_data)
print(list_df)

# q3 create a dataframe using dictionary
dict_data = {'Fruit': ['Apple', 'Orange', 'watermelon'], 'quantity': ['2kg', '3kg', '4kg']}
dict_df = pd.DataFrame(dict_data)
print(dict_df)

# q4 create a dataframe using list of dictionary
dict_of_list_data = {'a': [1, 3, 5, 7], 'b': [2, 4, 6, 8], 'c': [9, 10, 11, 12], 'd': [13, 14, 15, 16]}
dict_of_list_df = pd.DataFrame(dict_of_list_data)
print(dict_of_list_df)

# q5 add a new col to q4 dataframe
# Adding a new column named 'e'
dict_of_list_df['e'] = [20, 21, 22, 23]
print(dict_of_list_df)

# q6 delete the above added column in q5
# Using pop
dict_of_list_df.pop('e')
print(dict_of_list_df)

# .loc[] is used for label-based indexing,
# while .iloc[] is used for integer position-based indexing.

# q7 print the first row of q4 using loc
print("row loc")
print(dict_of_list_df.loc[0])

# q8 print the first row of q3 using iloc
print("row iloc")
print(dict_df.iloc[0])


