#include <stdio.h>
int main() {
  // Try changing the value of x
  const int x = 33;
  x = 33;
  printf("variable x is unchangeable: %d",x );
  return 0;
}