#include <math.h>
#include <stdio.h>

int main()
{
  double points;
  char grades[5] = {'E', 'D', 'C', 'B', 'A'};
  scanf("%lf", &points);

  float n = points / 25;
  int indexOfRes;

  if ((double)(n - (int)n) <= 0.44)
  {
    indexOfRes = ceil(n);
  }
  else
  {
    indexOfRes = floor(n);
  }

  printf("%c\n", grades[indexOfRes]);

  return 0;
}