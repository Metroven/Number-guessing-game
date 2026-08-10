Number Guessing Game in C
A simple, interactive command-line number guessing game written in C. The program challenges the user to guess a randomly generated secret number between 1 and 100 within a limited number of attempts, providing intelligent proximity hints along the way.

Features
Randomized Gameplay: Generates a new secret number every time you play using the C rand() and srand() functions.

Proximity Hints: Gives feedback if your guess is "Too high" or "Too low," and provides closer hints like "Just a little high/low" if you are within 5 numbers of the secret.

Attempt Tracking: Limits the game to 5 attempts (configurable via the MAX_ATTEMPTS macro) and displays remaining tries.

Input Validation:

Prevents crashes by clearing the input buffer if a user types letters instead of numbers.

Warns the user if their guess falls outside the valid 1-100 range without wasting an attempt.

Replayability: Includes a continuous loop allowing the user to play multiple rounds without restarting the program.

Prerequisites
To compile and run this game, you need a C compiler installed on your system.

Windows: MinGW or Visual Studio

macOS: Clang (via Xcode Command Line Tools)

Linux: GCC

How to Compile and Run
Clone the repository:

Bash
git clone https://github.com/yourusername/your-repo-name.git
cd your-repo-name
Compile the code:
Using GCC, you can compile the main.c file into an executable format.

Bash
gcc main.c -o number_game
Run the game:

On Linux / macOS:

Bash
./number_game
On Windows:

DOS
number_game.exe
How to Play
The game will prompt you to guess a number between 1 and 100.

Type your guess and press Enter.

Read the hint provided by the game:

Too high! / Too low!

Just a little high! / Just a little low! (You are within 5 digits of the answer).

You have a total of 5 attempts to find the exact number.

After the game ends, type y to play again or n to exit.

Code Structure
main.c: Contains the core game loop, input validation logic, and the random number generation. The maximum attempts can be easily adjusted by modifying the #define MAX_ATTEMPTS 5 line at the top of the file.
