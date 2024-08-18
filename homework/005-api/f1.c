#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  int x = 100;

  int fc = fork();
  if (fc < 0) {
    // fork failed
    fprintf(stderr, "fork failed\n");
    exit(1);
  }

  if (fc == 0) {
    printf("Child process x: %d\n", x);
  } else {
    // parent
    printf("Parent process x: %d\n", x);
  }
}
