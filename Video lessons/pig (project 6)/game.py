import random

def roll():
    min_value = 1
    max_value = 6
    roll = random.randint(min_value, max_value)

    return roll

value = roll()
print(value)

while True:    #The while loop is so that if they put an invalid number, they would just be asked the question again until they put a valid number.
    players = input("Enter the number of players (2-4): ")
    if players.isdigit():   #This checks if players is a number, and not a text.
        players = int(players)  #converts the input from line 14 from a string to the integer
        if 2 <= players <= 4:
            break
        else:
            print("Must be between 2-4 players")   
    else:
        print("Invalid, try again")

max_score = 50
player_score = [0 for _ in range(players)]      #makes a list for number of players in the game
#0 is what is being written for player, think it has to be a number and not a string.
#for _ in range(players) = for variable in range of how many players we have entered.
print(player_score)

while max(player_score) < max_score:
    should_roll = input("Would you like to roll (r)? ")
    if should_roll.lower() != "r":
        break
    value = roll()

    #1:49:42




