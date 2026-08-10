Number Guessing Game (C)
A simple command-line game where you try to guess a secret number between 1 and 100 within 5 attempts.

Features
Smart Hints: Tells you if you are too high, too low, or "just a little" off (within 5 numbers).

Bulletproof Input: Won't crash if you accidentally type letters or numbers outside the 1-100 range.

Replay Loop: easily play multiple rounds without restarting the app.

Quick Start
You will need a C compiler (like GCC or MinGW) installed.

1. Clone and compile:

Bash
git clone https://github.com/yourusername/your-repo-name.git
cd your-repo-name
gcc main.c -o game
2. Run the game:

Linux / Mac:

Bash
./game
Windows:

DOS
game.exe
How to Play
Just run the game, type your guess, and hit Enter. Pay attention to the hints and keep an eye on your remaining attempts! Modify #define MAX_ATTEMPTS 5 in the code if you want to make it easier or harder.
