#include <stdio.h>

int main()
{
  double n, totalP = 0;
  int pos = 0, i = 0;

  while (i < 6)
  {
    scanf("%lf", &n);
    if (n > 0)
    {
      totalP += n;
      pos++;
    }
    i++;
  }
  printf("%d valores positivos\n", pos);
  printf("%.1lf\n", totalP / pos);

  return 0;
}