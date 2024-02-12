#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i = 0;

  while (i < argc) {
    printf("arg %d: %s\n", i, argv[i]);
    i++;
  }

  char *states[] = {"California", "Oregon", "Washington", "Texas", "Florida"};
  int length = sizeof(states) / sizeof(states[0]);
  // printf("len: %d\n", length);

  i = 0;
  while (i < length) {
    printf("state %d: %s\n", i, states[i]);
    i++;
  }
  printf("\n");

  // Write the first 50 fibonacci numbers

  i = 1;
  unsigned long first = 0L;
  unsigned long second = 1L;
  printf("%d. %lu\n", i, second);

  while (i++ < 93) {
    unsigned long new = first + second;
    printf("%d. %lu\n", i, new);
    first = second;
    second = new;
  }

  return EXIT_SUCCESS;
}
