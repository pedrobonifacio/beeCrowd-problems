#include <stdio.h>

int main()
{
  double n;
  int pos = 0, i = 0;

  while (i < 6)
  {
    scanf("%lf", &n);
    if (n > 0)
    {
      pos++;
    }
    i++;
  }
  printf("%d valores positivos\n", pos);

  return 0;
}