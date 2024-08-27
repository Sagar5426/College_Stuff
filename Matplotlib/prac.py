import matplotlib.pyplot as plt

# Data for the pie chart
numbers = [3, 3, 6, 4]
animals = ["Monkey", "Lion", 'Tiger', "Cat"]

# Create the pie chart
plt.pie(numbers, labels=animals, autopct='%1.1f%%')


# Set the title of the pie chart
plt.title("Distribution of Animals in Zoo")

# Display the pie chart
plt.show()
