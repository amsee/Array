#include <stdio.h>

int main(void) {
  
  int i, count = 0;
  char letter;

  // Create an array of 10 elements, with only 3 variety.
  char fruits[10] = {'p','k','g','p','k','g','p','k','g','c'};

  printf("Enter a letter: ");
  scanf("%c", &letter);

  // Check number of times letter is in array
  for (i=0;i<10;i++) {
    // Check if user input is in array
  if (letter == fruits[i]) {
   count++;
  }
  }
  printf("There are %d counts of the letter '%c'", count, letter);
  return 0;
}
