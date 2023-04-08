#include <stdio.h>
#include <math.h>

int main() {
  double pi = 3.14159;
  double raio;
  scanf("%lf", &raio);

  printf("VOLUME = %.3f\n", (4.0/3) * pi * pow(raio, 3));
  return 0;
}