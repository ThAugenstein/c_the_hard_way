#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  if (argc < 2) {
    printf("Error: You need one argument.\n");
    return EXIT_FAILURE;
  }

  for (int j = 1; j < argc; j++) {

    int i = 0;

    for (i = 0; argv[j][i] != '\0'; i++) {

      char letter = argv[j][i];

      // Make all letters lowercase
      if (letter >= 'A' && letter <= 'Z') {
        letter -= 'A' - 'a';
      }

      switch (letter) {
      case 'a':
        printf("%d: 'A'\n", i);
        break;
      case 'e':
        printf("%d: 'E'\n", i);
        break;
      case 'i':
        printf("%d: 'I'\n", i);
        break;
      case 'o':
        printf("%d: 'O'\n", i);
        break;
      case 'u':
        printf("%d: 'U'\n", i);
        break;
      default:
        printf("%d: %c is not a vowel.\n", i, letter);
        break;
      }
    }
  }

  return EXIT_SUCCESS;
}
