#include <stdio.h>

int main()
{
  float a, b, c, d, e, f;

  scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

  float x = (((a + b) / (c - d)) * e) / ((f / (a * b)) + e);

  printf("%.3f\n", x);

  return 0;
}
