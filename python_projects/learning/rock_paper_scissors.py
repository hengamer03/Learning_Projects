import random

computer_choice = random.choice(['rock', 'paper', 'scissors'])
user_choice = input("rock, paper, scissors shoot!\n")

if computer_choice == user_choice:
    print("TIE")
elif user_choice == 'rock' and computer_choice == 'scissors':
    print("YOU WIN, computer choosed " + computer_choice )
elif user_choice == 'paper' and computer_choice == 'rock':
    print("YOU WIN, computer choosed " + computer_choice )
elif user_choice == 'scissors' and computer_choice == 'paper':
    print("YOU WIN, computer choosed " + computer_choice )
else:
    print("YOU LOSE, computer choosed " + computer_choice )