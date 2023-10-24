import random

print("Welcome To DiceRollGuess")

diceroll = random.randint(1,6)
lives = 3

while lives != 0:
    print("you have", lives ,"lives")
    user_choice = int(input("please select a number between 1 and 6 \n"))
    lives -= 1
    if diceroll == user_choice:
        print("You Guessed Corrrectly, You Win")
        break
else:
    print("Sorry, you lose. The right number was", diceroll)




