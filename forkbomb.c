#include <unistd.h>
#include <stdlib.h>

int int main(int argc, char const *argv[]) {
  size_t i = 4294967295;
  while (1) {
    fork();
    char* arr = malloc(i*sizeof(char));
    arr[i] = i;
  }
  return 0;
}
