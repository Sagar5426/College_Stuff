
# Write python code to get full O/P using matplotlib

import matplotlib.pyplot as plt
numbers = [3, 3, 6, 4]
animals = ["Monkey", "Lion", 'Tiger', "Cat"]

plt.plot(animals,numbers,marker='o');

plt.title("Zoo animal graph")
plt.xlabel("Animal Name")
plt.ylabel("Number of Animals")
# Set y-axis limits to start from 0
plt.ylim(0, (max(numbers)+2))

plt.show()
