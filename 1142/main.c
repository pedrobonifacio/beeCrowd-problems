#include <stdio.h>
int main()
{
  int n;

  scanf("%d", &n);

  for (int i = 1; i <= n * 4; i++)
  {
    if (i % 4 == 0)
    {
      printf("%s\n", "PUM");
    }
    else
    {
      printf("%d ", i);
    }
  }
  return 0;
}