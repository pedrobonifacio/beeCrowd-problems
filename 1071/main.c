#include <stdio.h>

int main()
{
  int x, y, max, min, sum = 0;

  scanf("%d", &x);
  scanf("%d", &y);
  if (x > y)
  {
    max = x;
    min = y;
  }
  else
  {
    max = y;
    min = x;
  }

  min += 1;
  if (min % 2 == 0)
  {
    min++;
  }
  for (int i = min; i < max; i += 2)
  {
    if (i % 2 != 0)
    {
      sum += i;
    }
  }

  printf("%d\n", sum);
  return 0;
}