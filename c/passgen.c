#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

char *generate(int n);
char pickRandom(char *str);

int main() {

  srand(time(NULL));

  printf("%s\n", generate(8));

  return 0;
}

char *generate(int n) {

  char ALPHABETS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

  char numbers[] = "0123456789";
  char symbols[] = "@#$~_&-+(){}[]^/*:;!?.%";

  int randomizer = rand() % 4;
  char *password = malloc(sizeof(char) * n);

  for(int i = 0;i < n;i++) {
    switch(randomizer) {
      case 0:
        password[i] = pickRandom(ALPHABETS);
        randomizer = rand() % 4;
        break;
      
      case 1:
        password[i] = pickRandom(alphabets);
        randomizer = rand() % 4;
        break;

      case 2:
        password[i] = pickRandom(numbers);
        randomizer = rand() % 4;
        break;

      case 3:
        password[i] = pickRandom(symbols);
        randomizer = rand() % 4;
        break;
    }
  }
  
  return password;
}

char pickRandom(char *str) {
  return str[rand() % strlen(str)];
}
