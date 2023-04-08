#include <stdio.h>

int main()
{

  int pairCount = 0, inparCount = 0, negativeCount = 0, positiveCount = 0;

  for (int i = 0; i < 5; i++)
  {
    int value;
    scanf("%d", &value);

    if (value % 2 == 0)
    {
      pairCount++;
    }
    else
    {
      inparCount++;
    }

    if (value > 0)
    {
      positiveCount++;
    }
    else if (value < 0)
    {
      negativeCount++;
    }
  }

  printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", pairCount, inparCount, positiveCount, negativeCount);

  return 0;
}