#include <stdio.h>

// Long function name to test completion in lldb
int square_an_int(int n) {
  // comment
  return n * n;
}

// Calculate the n-th fibonacci number
int fib(int n) {
  if (n < 2)
    return 1;
  return fib(n - 2) + fib(n - 1);
}

int main(int argc, char *argv[]) {
  int age = 10;
  int height = 72;
  int fib6 = fib(6);
  int square12 = square_an_int(12);

  printf("Hey, I am %s.\n", argv[0]);
  if (argc > 1)
    printf("Hi %s, how are you?\n", argv[1]);
  printf("I am %d years old.\n", age);
  printf("I am %d inches tall.\n", height);
  printf("The sixth fibonacci number is: %d\n", fib6);
  printf("The square of 12 is: %d\n", square12);
  return 0;
}
