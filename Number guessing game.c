#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int secret, guess, attempts = 0;
	srand(time(NULL));
	secret = rand() %100 + 1;
	
	
	printf("-----------------Number guessing game-----------------------\n");
	printf("Guess a number between 1 and 100\n");
	
	do{
		printf("Enter your guess: ");
		
		if(scanf("%d",&guess) != 1){
			printf("you entered a letter please enter a number\n");
			while(getchar() != '\n');
			continue;
			}
		
		if(guess<1 || guess>100){
			printf("your number is not within the limit\n");
			continue;
		}
		
		attempts++;	
		
		//logic for the game
		if(guess > secret){
			printf("too high\n");
		}
		else if(guess<secret){
			printf("too low\n");
		}
		else
		    printf("you guessed correctly in %d attempts",attempts);   
		     
	}while (guess != secret);
	
	return 0;
}