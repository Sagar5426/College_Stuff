
import matplotlib.pyplot as plt

# Data
categories = ["Cricket", "Football", "BasketBall"]
values = [8, 6, 4]

# Plotting the bar chart
plt.bar(categories, values)

# Adding labels and title
plt.xlabel('Sports Name')
plt.ylabel('Number of Medals')
plt.title('Bar Chart')

# Display the plot
plt.show()
