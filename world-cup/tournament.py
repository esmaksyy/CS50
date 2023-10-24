# Simulate a sports tournament

import csv
import sys
import random
import time

# Number of simluations to run
N = [10, 100, 1000, 10000, 100000, 1000000]

def main():

    # Ensure correct usage
    if len(sys.argv) != 2:
        sys.exit("Usage: python tournament.py FILENAME")

    teams = []
    filename = sys.argv[1]

    # TODO: Read teams into memory from file # Append each team's dictionary to the teams list
    with open(filename) as f:
        reader = csv.DictReader(f)
        for row in reader:
            teams.append({
                "team": row["team"],
                "rating": int(row["rating"])
            })

    for n in N:
        counts = {}
        start_time = time.time() # Start the timer

        # TODO: Simulate N tournaments and keep track of win counts # Determine the winner of the tournament # Increment the team's win count in the counts dictionary
        for i in range(n):
            winner = simulate_tournament(teams)
            if winner in counts:
                counts[winner] += 1
            else:
                counts[winner] = 1

        # Calculate elapsed
        elapsed_time = time.time() - start_time

        # Print each team's chances of winning, according to the simulation
        for team in sorted(counts, key=lambda team: counts[team], reverse=True):
            print(f"{team}: {counts[team] * 100 / n:.1f}% chance of winning")

        # Format elapsed time
        elapsed_time_str = time.strftime("%Mm%Ss", time.gmtime(elapsed_time))
        print(f"Elapsed time for {n} simulations: {elapsed_time_str}")

        # Append the timing information to answers.txt
        with open('answers.txt', 'a') as answers_file:
            answers_file.write(f"{n} simulations: {elapsed_time_str}\n")

        print()

# ... (rest of the code is the same)

if __name__ == "__main__":
    main()