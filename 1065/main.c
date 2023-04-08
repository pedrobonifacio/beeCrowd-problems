#include <stdio.h>

int main()
{

  int pairCount = 0;

  for (int i = 0; i < 5; i++)
  {
    int value;
    scanf("%d", &value);

    if (value % 2 == 0)
    {
      pairCount++;
    }
  }

  printf("%d valores pares\n", pairCount);

  return 0;
}