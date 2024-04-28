# Write the statement in python to plot line chart "Name" vs
# "Quantity" with full information.
# name = ["keyboard", "Amit", "Wires"]
# quantity = [10, 7, 20]

import matplotlib.pyplot as plt
# Data
name = ["keyboard", "Amit", "Wires"]
quantity = [10, 7, 20]

# Plotting
plt.plot(name, quantity, marker='o', linestyle='-')

# Adding labels and title
plt.xlabel('Name')
plt.ylabel('Quantity')
plt.title('Quantity of Items')

# Display the plot
plt.show()

