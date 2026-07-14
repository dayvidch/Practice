import random

top_of_range = input("type a number: ")

#.isdigit() converts anything into an integer
if top_of_range.isdigit():
    top_of_range = int(top_of_range)

    if top_of_range <= 0:
        print("Tyoe a number greater than zero next time.")
        quit()

else:
    print("Please type a number next time.")
    quit()

#top_of_range is a number that the user provided. It is now considered an integer and can be used as one. It is used in randint() so now the maximun is whatever top_of_range stores.

random_number = random.randint(0, top_of_range)
guesses = 0

while True:
    guesses += 1
    user_guess = input("make a guess: ")

    if user_guess.isdigit():
        user_guess = int(user_guess)
    else:
        print("Please type a number next time.")
        continue
        #continue brings us back to the top of the loop, anything under in the loop will not be used.
    
    if user_guess == random_number:
        print("you got it!")
        break
    elif user_guess > random_number:
        print("your guess it too big.")
    else: 
        print("your guess is too small.")   
        #dont need to include if equal to because we already checked for it in line 33

#if you use commas(,) to concatenate, you dont need to add spaces or convert to str because it does it for you. If you use (+), you have to manually do all of that.
print("You got it in", guesses, "guesses")