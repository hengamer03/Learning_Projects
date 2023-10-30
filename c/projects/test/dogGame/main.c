#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to simulate the dog's attempt to catch the stick
void catchStick(int throwDistance) {
    // Generate a random distance that the dog can run (between 1 and 10)
    int dogRunDistance = rand() % 10 + 1;
    printf("Dog runs %d units...\n", dogRunDistance);

    // Check if the dog caught the stick
    if (dogRunDistance >= throwDistance) {
        printf("Hooray! The dog caught the stick!\n");
    } else {
        printf("Oh no! The stick was too far. The dog missed it.\n");
    }
}

int main() {
    int throwDistance;
    char playAgain;

    // Seed the random number generator
    srand(time(NULL));

    do {
        // Ask the user for the throw distance
        printf("Throw the stick! Enter a distance (1-10): ");
        scanf("%d", &throwDistance);

        // Input validation
        if (throwDistance < 1 || throwDistance > 10) {
            printf("Invalid input. Please enter a number between 1 and 10.\n");
        } else {
            // Simulate the dog catching the stick
            catchStick(throwDistance);

            // Ask if the user wants to play again
            printf("Do you want to play again? (y/n): ");
            scanf(" %c", &playAgain);
        }
    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}
