#include <stdio.h>

int sayHello(char name[]); // function declaration
static void ptest();
static void fun();

// main function
int main() {
  printf("input ur name lol: "); //prints stuff

  char n[10];

  fgets(n, 10, stdin); // gets user input

  sayHello(n);

  // data types

  int x_ = 69;
  float y_ = 6.9;
  double z_ = 6.9;
  char a_ = 'a';
  //string
  char b_[] = "stringlol";
  char * name_ = "ayan";

  printf("int: %i \n", x_);
  printf("float: %f \n", y_);
  printf("double: %f \n", z_);
  printf("char: %c \n", a_);
  printf("string: %s \n", b_);
  printf("readonly string(char *): %s\n", name_);

  /*

    Note: 
    Format specifiers:
      
      %c	a single character
      %s	a string
      %hi	short (signed)
      %hu	short (unsigned)
      %Lf	long double
      %n	prints nothing
      %d	a decimal integer (assumes base 10)
      %i	a decimal integer (detects the base automatically)
      %o	an octal (base 8) integer
      %x	a hexadecimal (base 16) integer
      %p	an address (or pointer)
      %f	a floating point number for floats
      %u	int unsigned decimal
      %e	a floating point number in scientific notation
      %E	a floating point number in scientific notation
      %%	the % symbol

    ref: https://www.freecodecamp.org/news/format-specifiers-in-c/

  */
 
  // get length of string
  printf("length of ayan: %d\n", strlen(name_));

  //constants
  
  const double PI = 3.1416; //alt: #define PI 3.1416
  printf("%f \n", PI);

  // arrays
  
  int nums[7];  // <type> <name>[<length>]
  

  // populate the array
  
  nums[0] = 1;
  nums[1] = 2;
  nums[2] = 3;
  nums[3] = 4;
  nums[4] = 5;
  nums[5] = 6;
  nums[6] = 7;

  // for loop

  for (int i = 0;i < 7;i++) {
    printf("%d", nums[i]);
  }

  printf("\n");

  // multi-dimensional array

  char vowels[][5] = {
    { 'A', 'E', 'I', 'O', 'U' },
    { 'a', 'e', 'i', 'o', 'u' }
  };

  // for loop
  
  for (int i = 0;i < 5;i++) {
    printf("%c", vowels[0][i]);
  }

  printf("\n");

  for (int i = 0;i < 5;i++) {
    printf("%c", vowels[1][i]);
  }

  printf("\n\n");

  // while, do-while loop

  int i_ = 0;

  while (i_ < 10) {
    printf("%d", i_);
    i_++;
  }

  printf("\n");
  i_ = 0;

  do {  
    printf("%d", i_);
    i_++;
  } while (i_ < 10); 

  printf("\n");
  i_ = 0;

  while (1) { // condition always true, infinity loop
    i_++;
    printf("%d", i_);

    if (i_ == 10) {
      printf("\nno more infinity loop");
      break; // not anymore
    }
  }

  printf("\n\n");

  // if-else
  
  if (3 > 2) {
    printf("3 is greater than 2\n");
  } else if (2 > 1) {
    printf("2 is greater than 1\n");
  }
  // note: "===" doesnt exist in C
  
  ptest();

  // structures, aka interfaces in TS/CS
  
  /*
  struct myPC {
    char cpu[];
    char gpu[];
    int price;
  }

    don't use lol
  */

  // use:

  typedef struct {
    char * cpu;
    char * gpu;
    int price;
  } PC;

  PC mypc; // basically a "class"

  mypc.cpu = "Ryzen 5";
  mypc.gpu = "RX 570";
  mypc.price = 500;

  printf("PC:\n");

  printf("CPU: %s\n", mypc.cpu);
  printf("GPU: %s\n", mypc.gpu);
  printf("Price: %d\n", mypc.price);

  return 0;
}

int sayHello(char name[]) {
  printf ("Hello, %s\n", name);
  
  return 0;
}

// pointers
static void ptest() {
  static int t = 69;

  printf("t: %d\n", t);
  printf("memory address of t: %p\n", &t);

  /*
    A memory address is given as a hexadecimal number. Hexadecimal, or hex, is a base-16 number system that uses digits 0 through 9 and letters A through F (16 characters) to represent a group of four binary digits that can have a value from 0 to 15. 
  */
}

static void fun() {
  /*
     By default, functions are global in C. If we declare a function with static, the scope of that function is reduced to the file containing it.
  */
  printf("I'm a private (static) function xD");
}

