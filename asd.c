#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {
  newBoard("p1.txt");
  newBoard("p2.txt");
  place();
  newTurn();
  return 0;
}
