#include <stdio.h>

int main()
{
  int n, i = 0, n1 = 0;

  scanf("%d", &n);

  while (i < n * 2)
  {
    int n2, n3;
    if (i == 0 || i % 2 == 0)
    {
      n1++;
    }

    n2 = n1 * n1;
    n3 = n1 * n2;

    if (i != 0 && i % 2 != 0)
    {
      n2++;
      n3++;
    }

    printf("%d %d %d\n", n1, n2, n3);
    i++;
  }

  return 0;
}
