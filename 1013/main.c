#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n[3];

  while (scanf("%d %d %d", &n[0], &n[1], &n[2]) == 3)
  {
    int big = 0;

    for (int i = 0; i < 3; i++)
    {
      big = (big + n[i] + abs(big - n[i])) / 2;
    }

    printf("%d eh o maior\n", big);
  }
  return 0;
}
