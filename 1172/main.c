#include <stdio.h>

int main()
{
  int v[10], n;

  // using 2 loops would be an expense and using vector is unnecessary

  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &n);
    if (n == 0 || n < 0)
    {
      v[i] = 1;
    }
    else
    {
      v[i] = n;
    }
    printf("X[%d] = %d\n", i, v[i]);
    n = 0;
  }

  return 0;
}