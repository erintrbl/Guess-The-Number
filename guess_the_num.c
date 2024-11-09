#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(0); // Seed the random number generator with 0 to produce the same sequence of numbers

    int hiddenNumber = rand() % 100 + 1; // Generate a random number between 1 and 100

    int guess, count = 0;

    printf("Guess the hidden number (between 1 and 100) or enter -1 to give up:\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == hiddenNumber) {
            printf("You got it!\n");
            break; // Exit the loop if the guess is correct
        } else if (guess == -1) {
            printf("I am sorry you gave up. Better luck next time. The hidden number was %d.\n", hiddenNumber);
            break; // Exit the loop if the user gives up
        } else if (guess > hiddenNumber) {
            printf("Too big\n");
        } else {
            printf("Too small\n");
        }

        count++; // Increment the guess count
    }

    printf("Total number of guesses: %d\n", count);

    return 0;
}
