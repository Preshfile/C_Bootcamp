#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <getopt.h>

#define CODE_LENGTH 4
#define DEFAULT_ATTEMPTS 10

// Generates a random code
void generate_code(char *code) {
  for (int i = 0; i < CODE_LENGTH; i++) {
    code[i] = rand() % 9 + '0';
  }
}

// Reads a code from the standard input
int read_code(char *code) {
  char c;
  int i = 0;
  while (read(0, &c, 1) > 0 && c != '\n' && i < CODE_LENGTH) {
    code[i++] = c;
  }
  code[i] = '\0';
  return i;
}

// Validates a code
int validate_code(char *code) {
  int len = strlen(code);
  if (len != CODE_LENGTH) {
    return 0;
  }
  for (int i = 0; i < len; i++) {
    if (code[i] < '0' || code[i] > '8') {
      return 0;
    }
  }
  return 1;
}

int main(int argc, char **argv) {
  // Seed the random number generator
  srand(time(NULL));

  // Parse command line arguments
  int attempts = DEFAULT_ATTEMPTS;
  char code[CODE_LENGTH + 1];
  int random_code = 1;
  int c;
  while ((c = getopt(argc, argv, "c:t:")) != -1) {
    switch (c) {
      case 'c':
        strncpy(code, optarg, CODE_LENGTH);
        code[CODE_LENGTH] = '\0';
        random_code = 0;
        break;
      case 't':
        attempts = atoi(optarg);
        break;
    }
  }

  // Generate a random code if none was specified
  if (random_code) {
    generate_code(code);
  }

 // Start the game
  printf("Will you find the secret code?\n");
  printf("Please enter a valid guess\n");

  for (int i = 0; i < attempts; i++) {
    char guess[CODE_LENGTH + 1];
    int well_placed = 0;
    int misplaced = 0;

    // Read the guess from the standard input
    int len = read_code(guess);

    // Validate the guess
    if (len == 0 || !validate_code(guess)) {
      printf("Please enter a valid guess\n");
      continue;
    }

    // Check the guess against the code
    for (int j = 0; j < CODE_LENGTH; j++) {
      if (guess[j] == code[j]) {
        well_placed++;
      } else {
        for (int k = 0; k < CODE_LENGTH; k++) {
          if (guess[j] == code[k]) {
            misplaced++;
            break;
          }
        }
      }
    }

    // Print the results for this round
    printf("---\n");
    printf("Round %d\n", i);
    printf(">%s\n", guess);
    printf("Well placed pieces: %d\n", well_placed);
    printf("Misplaced pieces: %d\n", misplaced);

    // Check if the guess is correct
    if (well_placed == CODE_LENGTH) {
      printf("Congratz! You did it!\n");
      break;
    }
  }
  return 0;
}
