print("--------------------------------------------------------------------------------------------------------------------------------------------")
name = input("Enter name: ")

storyStart = input("Type START to begin: ").lower()

if storyStart == "start":
    print("--------------------------------------------------------------------------------------------------------------------------------------------")
    print("Welcome", name, "to the world of Pokemon!")
    print("You missed your alarm and you hurried to Professor Oak's lab. He informs you that you were too late, and all the pokemon have ben taken.")
    print("All besides one pokemon. Will you take it?")

    q1 = input("The choice is yours, type either ACCEPT or DECLINE: ").lower()
    if q1 == "accept":
        print("--------------------------------------------------------------------------------------------------------------------------------------------")
        print("You accepted the pokemon. You have received PIKACHU.")
        rename_pikachu = input("Would you like to rename PIKACHU? Type YES to rename or NO if you do not want to. ").lower()
        if rename_pikachu == "yes":
            new_name = input("What would you like to rename PIKACHU? ")
            print(new_name, "is now your pokemon.")
            print("--------------------------------------------------------------------------------------------------------------------------------------------")
        elif rename_pikachu == "no":
            print("Pikachu is now your pokemon.")
            print("--------------------------------------------------------------------------------------------------------------------------------------------")
            new_name = "PIKACHU"
        else:
            print("You did not type yes or no. Pikachu will not be renamed.")
            print("--------------------------------------------------------------------------------------------------------------------------------------------")
            new_name = "PIKACHU"

        pokemon_name = new_name
        trainer_score = 0
        print("Time to start your adventure!")

        print("You have started your adventure and have come accross a river. Would you like to swim across or walk around?")
        q2 = input("Type SWIM or WALK: ").lower()
        if q2 == "swim":
            print("The current was too strong and you decide to rely on", pokemon_name + ".")
            print("Too bad", pokemon_name, "isn't a water type and you both drown.")
            print("You Lose")
            print("Your trainer score was:",trainer_score)
            print("--------------------------------------------------------------------------------------------------------------------------------------------")
        elif q2 == "walk":
            trainer_score += 10
            print("Good choice, the river was to strong for you and your pokemon.")
            print("Even though you have made the right choice, you are very unlucky and have encountered an angry PALKIA (legendary).")
            print("Would you like to fight or run?")
            q3 = input("Type BATTLE or RUN: ").lower()
            if q3 == "battle":
                print("You sent out", pokemon_name, + ".")
                print("Too bad you and your pokemon are not good enough to beat a legendary pokemon.")
                print("You Lose")
                print("Your trainer score was:",trainer_score)
                print("--------------------------------------------------------------------------------------------------------------------------------------------")
            elif q3 == "run":
                print("Too bad PALKIA is the pokemon that created space and have caught up to you instantly. It is a legendary pokemon afterall.")
                print("PALKIA rips you appart. You Lose")
                print("Your trainer score was:",trainer_score)
                print("--------------------------------------------------------------------------------------------------------------------------------------------")
            else:
                print("You typed an invalid answer.")
                print("You paniced and just stand there.")
                print("PALKIA rips you apart. Should of atleast tried to battle with", pokemon_name, "afterall thats why you have a pokemon")
                print("You Lose")
                print("Your trainer score was:",trainer_score)
                print("--------------------------------------------------------------------------------------------------------------------------------------------")
        else:
            print("You did not give a valid option.")
            print("You paniced and threw" , pokemon_name, "in the river")
            print("You now dont have a pokemon and you have bad luck because a gyaradose appeared.")
            print("It swallowed you. You lose.")
            print("Your trainer score was:",trainer_score)
            print("--------------------------------------------------------------------------------------------------------------------------------------------")
        

    elif q1 == "decline":
        print("--------------------------------------------------------------------------------------------------------------------------------------------")
        print("You declined the pokemon.")
        print("You decide that you did not need a pokemon and started your adevture anyways. You end up running into a gang of pidgeys and get pecked to death.")
        print("You lose.")
    else:
        print("--------------------------------------------------------------------------------------------------------------------------------------------")
        print("You did not type a valid answer so you lose.")
        quit()

else:
    print("You did not start the game")
    quit()