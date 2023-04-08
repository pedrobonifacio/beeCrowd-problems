#include <stdio.h>
#include <math.h>

int main() {
  double pi = 3.14159;
  double raio;
  scanf("%lf", &raio);

  printf("A=%.4f\n", pi * pow(raio, 2));
  return 0;
}