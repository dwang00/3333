#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int newBoard(char *file) {
  for (int i = 1; i <= 110; i++) {
    if (i <= 10) {
      if (i == 1) {
        printf("  ");
      }
      printf("%d ", i - 1);
      if (i == 10) {
        printf("\n0 ");
      }
    }
    else {
      printf("- ");
      if (i % 10 == 0 && i != 110) {
        printf("\n%d ", (i - 10) / 10);
      }
    }
  }
  printf("\n\n");
  return 0;
}

int place() {
  char r[1];
  char c[1];
  printf("What row would you like to place your 5 unit ship?\n");
  gets(r);
  int row = atoi(r);
  if (row > 9 || row < 0) {
    place();
  }
  else {
    printf("%d", row);
  }
  printf("What column would you like to place your 5 unit ship?\n");
  gets(c);
  int column = atoi(c);
  if (column > 9 || column < 0) {
    place();
  }
  else {
    printf("%d", column);
  }
}

int newTurn() {
  execvp("clear");
}
