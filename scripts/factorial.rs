fn main() {
  let iterations = 100000000;
  let start = std::time::Instant::now();

  for _ in 0..iterations {
    factorial(20);
  }

  let duration = start.elapsed();

  println!("[RS] Execution time: {:.4} ms", duration.as_millis() as f64);
}

fn factorial(n: i128) -> i128 {
  if n > 0 {
    return n * factorial(n - 1);
  } 

  return 1; 
}