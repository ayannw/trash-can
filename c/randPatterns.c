#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int seed, size;
static int printBoard();
static int drawRow(int n);

int main() {

  seed = time(NULL);

  printBoard(7);

  return 0;
}

static int printBoard(int s) {

  size = s;    // height and width (in char) of output
  for(int i = 1;i < (size + 1);i++) {
    drawRow(i);
  }

  printf("seed: %d\n", seed);
  return 0;
}

static int drawRow(int n) {
  srand(seed);
  for(int i = n;i < (n + size);i++) {
    int r = rand() % (n + 1 - 0) + 0;
    if(r % 3 != 0)
      printf("\033[0;36m██\033[0m");
    else
      printf("  ");
  }

  printf("\n");
  return 0;
}
