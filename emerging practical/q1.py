import matplotlib.pyplot as plt

color_of_ball = ["Red", "Green", "Orange", "Black"]
quantity = [10, 6, 12, 3]

bars = plt.bar(color_of_ball, quantity, color=color_of_ball)

for i, bar in enumerate(bars):
    bar.set_label(color_of_ball[i])

plt.xlabel("Color of Ball")
plt.ylabel("Quantity")

plt.legend()
plt.show()
