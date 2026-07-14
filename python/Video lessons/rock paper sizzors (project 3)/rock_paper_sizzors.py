import random

player_wins = 0
computer_wins = 0
options = ["rock", "paper", "sissors"]

while True:
    user_input = input("Type Rock / Paper / Sissors or Q to quit: ").lower()

    if user_input == "q":
        break
    
    #the not in checks if the user input was not in the list that we have provided 
    if user_input not in options:
        continue

    random_number = random.randint(0,2)
    # rock = 0, paper = 1, sissors = 2

    computer_pick = options[random_number]
    print("computer picked", computer_pick + ".")

    if user_input == "rock" and computer_pick == "sissors":
        print("you won!")
        player_wins +=1

    elif user_input == "paper" and computer_pick == "rock":
        print("you won!")
        player_wins +=1

    elif user_input == "sissors" and computer_pick == "paper":
        print("you won!")
        player_wins +=1

    else:
        print("you lost")
        computer_wins += 1


print("You won", player_wins, "times.")
print("The computer won", computer_wins, "times.")
print("Goodbye")