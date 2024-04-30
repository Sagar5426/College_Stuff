import pandas as pd

empty_df = pd.DataFrame()
print(empty_df)

list_data = [['apple', 'orange', 'tomato', 'potato', 'banana'], ["Onion"]]
list_df = pd.DataFrame(list_data)
print(list_df)

dict_data = {"Fruit": ["Apple", "Orange", "Watermelon"], "Vegetable": ["Potato", "Brinjal", "Capsicum"]}
dict_df = pd.DataFrame(dict_data)
print(dict_df)

dict_list_data = {'a': [1, 3, 5, 7], 'b': [2, 4, 6, 8], 'c': [9, 10, 11, 12], 'd': [13, 14, 15, 16]}
dict_list_df = pd.DataFrame(dict_list_data)
print(dict_list_df)

# print second row
print(dict_list_df.iloc[1])

# delete last row
dict_list_df.drop(3, inplace=True)
print(dict_list_df)

print("Column a: \n", dict_list_df['a'])

# Add a new column 'e' to dict_list_df
dict_list_df['e'] = [17, 18, 19]  # only three element bcz deleted one using drop
print("\nDataFrame after adding column 'e':")
print(dict_list_df)

# ____________________IMPORTANT ________________________
dt = {'a': [1, 3, 5, 7], 'b': [2, 4, 6, 8], 'c': [9, 10, 11, 12], 'd': [13, 14, 15, 16]}
dt_df = pd.DataFrame(dt)
print(dt_df)

# DELETE COL
dt_df.pop('a')
print(dt_df)

# DELETE ROW
dt_df.drop(0, inplace=True)
print(dt_df)

# ADD COL
dt_df['e'] = [10, 20, 30]
print(dt_df)

# ADD ROW using loc

dt_df.loc[5] = [40, 50, 60, 70]
print(dt_df)

# .loc[] is used for label-based indexing,
# while .iloc[] is used for integer position-based indexing.

# access element
print("Using loc: ", dt_df.loc[5, "b"])
print("Using iloc: ", dt_df.iloc[0, 1])
