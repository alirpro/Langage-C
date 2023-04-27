#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main(void) {
  char msg[MAX] = "Bonjour";
  strcat(msg, " tout le monde");

  size_t n = strlen(msg);
  printf("Message de longueur %zu : %s\n", n, msg);

  return EXIT_SUCCESS;
}
