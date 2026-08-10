#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ATTEMPTS 5

int main() {
    int secret, guess;
    int attempts;      
    char playAgain; 

    srand(time(NULL)); 

    do {
        attempts = 0;      
        // Generate a random number between 1 and 100
        secret = rand() % 100 + 1; 

        printf("\n--- New Game ---\n");
        printf("Guess a number between 1 and 100. You have %d attempts!\n", MAX_ATTEMPTS);

        do {
            printf("Enter your guess: ");

            // Check if input is a valid integer
            if (scanf("%d", &guess) != 1) {
                printf("Your input is a letter not a number\n");
                
                // Clear invalid input from the buffer
                while (getchar() != '\n');
                continue;
            }

            // Check if input is within the 1-100 range
            if (guess < 1 || guess > 100) {
                printf("Your number is above or below the limit\n");
                continue;
            }

            attempts++;

            // Game logic with proximity hints
            if (guess > secret) {
                // Expanded proximity threshold to 5 for the larger 1-100 scale
                if (guess - secret <= 5) { 
                    printf("Just a little high!\n");
                } else {
                    printf("Too high!\n");
                }
            } 
            else if (guess < secret) {
                if (secret - guess <= 5) {
                    printf("Just a little low!\n");
                } else {
                    printf("Too low!\n");
                }
            } 
            else {
                printf("Correct! You guessed the number in %d attempt(s).\n", attempts);
            }

            // Show remaining attempts if the guess was incorrect
            if (guess != secret && attempts < MAX_ATTEMPTS) {
                printf("Attempts remaining: %d\n", MAX_ATTEMPTS - attempts);
            }

        } while (guess != secret && attempts < MAX_ATTEMPTS);

        // If the player ran out of attempts without guessing correctly
        if (guess != secret) {
            printf("\nGame Over! You used all %d attempts. The secret number was %d.\n", MAX_ATTEMPTS, secret);
        }

        printf("Do you want to play again? (y/n): ");
        while (getchar() != '\n'); 
        scanf("%c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing!\n");

    return 0;
}