#include <stdio.h>
#include <time.h>

size_t factorial(int n);

int main(void) {
  int iterations = 100000000;
  clock_t start = clock();

  for (int i = 0; i < iterations; i++) {
    factorial(20);
  }

  clock_t end = clock();
  double duration = (double)(end - start) / CLOCKS_PER_SEC * 1000; 

  printf("[C] Execution time: %.4f ms\n", duration);
  
  return 0;
}

size_t factorial(int n) {
  if (n > 0) {
    return n * factorial(n - 1);
  }

  return 1;
}
