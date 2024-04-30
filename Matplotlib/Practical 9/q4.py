
# sam wants to plot a line chart based on given data to view weekly average
# temp. for 4 weeks.Write python code,use,title for axis and chart.
# week = [1,2,3,4]
# temp = [30,24,28,32]

import matplotlib.pyplot as plt
# Data
week = [1, 2, 3, 4]
temp = [30, 24, 28, 32]

# Plotting the line chart
plt.plot(week, temp, marker='o', linestyle='-')

# Adding labels and title
plt.xlabel('Week')
plt.ylabel('Temperature (°C)')
plt.title('Weekly Average Temperature')

# Display the plot
plt.show()
