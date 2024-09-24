# Create a bar chart with suitable title for both axis label and
# plot. Add legends also
# shirt = ["Yellow", "Blue", "Red"]
# quantity = [32, 60, 24]
# Also maintain the color of bar same as that of corresponding shirt

import matplotlib.pyplot as plt

shirt = ["Yellow", "Blue", "Red"]
quantity = [32, 60, 24]
# Plot the bars with labels

bars = plt.bar(shirt, quantity, color=shirt)
# Add labels to the bars
for i, bar in enumerate(bars):
    bar.set_label(shirt[i])

plt.xlabel("Color of Shirt")
plt.ylabel("Number of shirts")
# Add legend
plt.legend()
plt.show()
