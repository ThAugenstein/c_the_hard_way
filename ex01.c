#include <stdio.h>

// Calculate the n-th fibonacci number
int fib(int n) {
  if (n < 2)
    return 1;
  return fib(n - 2) + fib(n - 1);
}

/* This is a comment */
int main(int argc, char *argv[]) {
  int distance = 100;

  // This is also a comment
  printf("You are %d miles away.\n", distance);
  printf("The sixth fibonacci number is %d.\n", fib(6));
  return 0;
}
