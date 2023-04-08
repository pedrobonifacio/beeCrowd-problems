#include <stdio.h>

int main()
{
  int n1, n2;

  scanf("%d %d", &n1, &n2);

  for (int i = n1; i <= n2; i += 2)
  {
    if (i == n2)
    {
      printf("%d\n", i);
    }
    else
    {
      printf("%d ", i);
    }
  }
  return 0;
}
