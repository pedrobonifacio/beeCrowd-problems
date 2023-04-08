#include <stdio.h>

int main()
{
  double value;
  int intervals[4][2] = {{0, 25}, {25, 50}, {50, 75}, {75, 100}};

  scanf("%lf", &value);

  char parenthesis[2] = {'(', ']'};

  float n = value / 25;
  int indexOfRes;

  if (n < 0 || n > 4)
  {
    printf("Fora de intervalo\n");
    return 0;
  }

  indexOfRes = floor(n);
  double a = (double)(n - (int)n);
  if (indexOfRes > 0 && a == 0.0)
  {
    indexOfRes--;
  }

  if (indexOfRes == 0 || value == intervals[indexOfRes][0])
  {
    parenthesis[0] = '[';
  }

  printf("Intervalo %c%d,%d%c\n", parenthesis[0], intervals[indexOfRes][0], intervals[indexOfRes][1], parenthesis[1]);

  return 0;
}