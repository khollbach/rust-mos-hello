#include <stdint.h>
#include <stdio.h>

extern uint16_t factorial(uint16_t n);
extern uint16_t factorial2(uint16_t n);
extern uint16_t factorial3(uint16_t n);

int main() {
  uint16_t n = 6;
  uint16_t result = factorial(n);
  uint16_t result2 = factorial2(n);
  uint16_t result3 = factorial3(n);
  printf("hello from rust, %u! is %u (%u) ((%u))", n, result, result2, result3);
  return 0;
}
