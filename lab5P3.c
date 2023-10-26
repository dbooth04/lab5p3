/* Lab 5 P3: starter code to complete*/
#include <stdio.h>
#include <string.h>

int main() {
  char input[256];
  int letterCount[26] = {
      0};  // Array to store the count of each letter initialized to zeros
  int counter1;
  int counter2 = 0;
  char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
                       'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                       'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

  printf("Enter text strings (press Enter on an empty line to exit):\n");

  while (1) {
    fgets(input, sizeof(input),
          stdin);  // get the input from the user via keyboard

    // Check for an empty line to exit the loop
    if (strlen(input) == 1 && input[0] == '\n') {
      break;
    }

    for (counter1 = 0; counter1 < strlen(input); counter1++) {
      for (counter2 = 0; counter2 < 26; counter2++) {
        if (input[counter1] == alphabet[counter2] ||
            input[counter1] == (alphabet[counter2] + 32))
          letterCount[counter2]++;
      }
    }
  }

  for (counter1 = 0; counter1 < 26; counter1++) {
    if (letterCount[counter1] > 0)
      printf(
          "Number of lower or upper case %c letters used in the inputted text: "
          "%d\n",
          alphabet[counter1], letterCount[counter1]);
  }

  printf("All other letters were used 0 times.\n");
  return 0;
}