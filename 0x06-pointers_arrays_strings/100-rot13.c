#include "main.h"

/**
* rot13 - rotate characters 13 places
* @s: string
* Return: string rotated
*/

char *rot13(char *str) {
  int i;
  char lower[] = "abcdefghijklmnopqrstuvwxyz";
  char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  for (i = 0; str[i]; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = lower[(str[i] - 'a' + 13) % 26];
    } else if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = upper[(str[i] - 'A' + 13) % 26];
    }
  }

  return str;
}
