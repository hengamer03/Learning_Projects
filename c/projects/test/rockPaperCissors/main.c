#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>


int main() 
{

    char choice;
 
    srand(time(NULL));

    int choiceC = rand() % 3;

    printf("\n\nWelcome To ROCK, PAPER, CISSORS written in C! \n\n");
    printf("\nPlease write in either\n(R)ock\n(P)aper\n(S)cissors; \n\n");

    scanf(" %c", &choice);

    choice = toupper(choice);
    int userChoice;

    if (choice == 'R') {
        userChoice = 1;  // 'R' represents rock.
    } else if (choice == 'P') {
        userChoice = 2;  // 'P' represents paper.
    } else if (choice == 'S') {
        userChoice = 0;  // 'S' represents scissors.
    } else {
        printf("Invalid choice. Please choose 'R', 'P', or 'S'.\n");
        return 1;  // Exit with an error code.
    }

    if (choiceC == 0 && userChoice == 0 || choiceC == 1 && userChoice == 1 || choiceC == 2 && userChoice == 2) {
        printf("It's a tie. Computer chose: %c\n", (choiceC == 0 ? 'S' : (choiceC == 1 ? 'R' : 'P')));
    } else if (choiceC == 0 && userChoice == 2 || choiceC == 1 && userChoice == 0 || choiceC == 2 && userChoice == 1) {
        printf("You lose. Computer chose: %c\n", (choiceC == 0 ? 'S' : (choiceC == 1 ? 'R' : 'P')));
    } else {
        printf("You win. Computer chose: %c\n", (choiceC == 0 ? 'S' : (choiceC == 1 ? 'R' : 'P')));
    }

    return 0;
}