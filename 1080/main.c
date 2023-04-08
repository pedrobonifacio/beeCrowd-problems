#include <stdio.h>

int main()
{

  int bigger = 0, pos, i = 0, n;
  while (i < 100)
  {
    scanf("%d", &n);
    if (bigger < n)
    {
      bigger = n;
      pos = i;
    }

    i++;
  }

  printf("%d\n%d\n", bigger, pos + 1);
  return 0;
} 