# TODO

from cs50 import get_float

while True:
    cents = get_float("Change: ")
    if cents > 0:
        break

cents = round(cents*100)

count = 0

# Number of quarters
while cents >= 25:
    cents = cents - 25
    count += 1