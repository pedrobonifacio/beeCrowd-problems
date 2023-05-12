#include <stdio.h>

int main()
{
  double v[100];

  for (int i = 0; i < 100; i++)
  {
    scanf("%lf", &v[i]);
    if (v[i] <= 10)
    {
      printf("A[%d] = %.1f\n", i, v[i]);
    }
  }

  return 0;
}