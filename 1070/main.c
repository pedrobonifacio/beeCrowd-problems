#include <stdio.h>

int main()
{

  int n, i = 0;
  scanf("%d", &n);

  if (n % 2 == 0)
  {
    n += 1;
  }

  while (i < 6)
  {
    printf("%d\n", n);
    n += 2;

    i++;
  }

  return 0;
}