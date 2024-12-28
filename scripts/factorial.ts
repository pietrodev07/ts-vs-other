const factorial = (n: number): number => {
  if (n > 0) {
    return n * factorial(n - 1);
  }

  return 1;
};

const iterations = 100000000;
const start = performance.now();

for (let i = 0; i < iterations; i++) {
  factorial(20);
}

const duration = performance.now() - start;

console.log(`[TS] Execution time: ${duration.toFixed(4)} ms`);
