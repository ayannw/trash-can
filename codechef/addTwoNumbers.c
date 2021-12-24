// FLOW001


#include <stdio.h>

int main() {

  int T;

  scanf("%d", &T);

  while(T--) {
    long int a, b;
 
    scanf("%ld %ld", &a, &b);
    printf("%ld\n", a+b);

  }

  return 0;
}
