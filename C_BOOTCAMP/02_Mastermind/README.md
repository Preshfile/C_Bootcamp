# Welcome to My Mastermind
Welcome to Mastermind Project
This is an implementation of the famous puzzle game called mastermind
in which one player, the "codemaker," creates a secret code consisting of a series of colored pegs, and another 
player, the "codebreaker," tries to guess the code by placing colored pegs in a series of holes on a game board.

## Task
Write a program called mastermind; it will be an implementation of the famous game.

The game must composed of 9 pieces of different colors.
A secret code is then composed of 4 distinct pieces.

The player should have 10 attempts to find the secret code.
After each input, the game indicates to the player the number of well placed pieces and the number of misplaced pieces.

Pieces will be '0' '1' '2' '3' '4' '5' '6' '7' '8'.

If the player finds the code, he wins, and the game stops.
A misplaced piece is a piece that is present in the secret code butthat is not in a good position.

You must read the player's input from the standard input.

Your program will also receive the following parameters:
-c [CODE]: specifies the secret code. If no code is specified, a random code will be generated.
-t [ATTEMPTS]: specifies the number of attempts; by default, the playerhas 10 attempts.

## Description
Here is a step by step solution on how the task was solved
First, I declard constants for the number of colors and the number of pegs. These will determine the length of the secret code and the number of options for each peg.

Secondly I declared variables for the secret code and the current guess. Initialize the secret code with a randomly generated sequence of colors.

Thirdly, I displayed a message to the user explaining the rules of the game and prompting them to enter their first guess.

Read in the user's guess as a string of characters.

Compare the guess to the secret code, peg by peg, and determine how many pegs are the correct color and in the correct position (a "black peg") and how many pegs are the correct color but in the wrong position (a "white peg").

Display the number of black and white pegs to the user.

If the user has not yet guessed the correct code, go back to step 3 and prompt them to enter their next guess.

If the user has guessed the correct code, display a message congratulating them and end the game.


## Installation
to install the mastermind programe,

Make sure you have a C compiler installed on your machine. If you don't have one, you can install the GCC compiler on Windows, Linux, or macOS.

Download the source code for the game. This will typically be provided as a ZIP file or tarball that you can download from the game's website or GitHub repository.

Extract the source code from the archive file. This will create a new directory with all of the game's source files and other resources.

Open a terminal window and navigate to the directory where you extracted the game's source code.

Compile the game by running the following command: gcc -o mastermind main.c. This will compile the source code and create an executable file called "mastermind" in the current directory.

Run the game by typing ./mastermind in the terminal. The game should now start.
## Usage
Mastermind is a two-player code-breaking game in which one player, the "codemaker," creates a secret code made up of a series of colored pegs, and the other player, the "codebreaker," tries to guess the code. The codemaker provides feedback to the codebreaker after each guess by placing black and white pegs in a row. A black peg indicates that one of the codebreaker's guesses is both the correct color and in the correct position, while a white peg indicates that the codebreaker has guessed the correct color but in the wrong position.

The game continues until the codebreaker is able to guess the correct code or until a certain number of attempts have been made. The codebreaker wins if they are able to guess the correct code within the allotted number of attempts, while the codemaker wins if the codebreaker is unable to guess the correct code.

In some versions of the game, the codebreaker may also have the option to use special "hint" pegs, which provide additional information about the secret code. For example, a hint peg might indicate that a particular color is present in the code but not in the correct position.

There are many variations of the Mastermind game, and the specific rules and gameplay may vary depending on the version you are playing.

### The Core Team
The  project was carried out by Precious Oranye -
a software Engineering student at Qwasar Silicon Valley.
This project is one of the tasks to be completed to complete C - Bootcamp

<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
