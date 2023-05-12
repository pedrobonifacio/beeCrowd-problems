#include <stdio.h>

int main()
{
  int t;
  int v[1000];
  v[0] = 0;
  scanf("%d", &t);

  for (int i = 1; i < 1000; i++)
  {
    if (v[i - 1] + 1 < t)
    {
      v[i] = v[i - 1] + 1;
    }
    else
    {
      v[i] = 0;
    }
  }

  for (int i = 0; i < 1000; i++)
  {
    printf("N[%d] = %d\n", i, v[i]);
  }
  return 0;
}