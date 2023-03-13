#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
  int limits[] = {20, 100};
  char filename[limits[0]]; // Declaration doesn't start at 0. starts at 1
  char words[limits[1]];
  printf("Filename?: ");
  fgets(filename, limits[0], stdin);
  int size = strlen(filename);
  filename[size-1] = '\0';
  printf("Write Somthing: ");
  fgets(words, limits[1], stdin);

  FILE *archie;
  archie = fopen(filename, "w"); // Create file
  fprintf(archie, "%s", words);
  fclose(archie); // Close File

  return 0;
}

