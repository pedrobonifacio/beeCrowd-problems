function randomUntil(max) {
  return Math.floor(Math.random() * max);
}
for (let i = 0; i < 3; i++) {
  const points = randomUntil(10);
  console.log(points);
  for (let j = 0; j < points; j++) {
    let n = randomUntil(10);
    let k = randomUntil(10);
    console.log(n + " " + k);
  }
}
