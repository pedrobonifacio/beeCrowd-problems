#include <stdio.h>

int main()
{
  int n[3];

  scanf("%d %d %d", &n[0], &n[1], &n[2]);

  int bigger, smaller;

  for (int i = 0; i < 3; i++)
  {
    if (i == 0)
    {
      bigger = n[i];
      smaller = n[i];
    }
    else
    {
      if (n[i] > bigger)
      {
        bigger = n[i];
      }
      if (n[i] < smaller)
      {
        smaller = n[i];
      }
    }
  }

  printf("%d e %d\n", smaller, bigger);
  return 0;
}
