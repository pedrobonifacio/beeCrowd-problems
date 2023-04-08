#include <stdio.h>

int main()
{
  int numbers, n, older, bigger = 0, qntd = 0;

  scanf("%d", &numbers);

  for (int i = 0; i < numbers; i++)
  {
    scanf("%d", &n);

    if (i == 0)
    {
      older = n;
    }

    if (n == older)
    {
      qntd++;
    }
    else
    {
      if (qntd > bigger)
      {
        bigger = qntd;
      }
      qntd = 1;
    }

    older = n;
  }

  printf("%d\n", bigger);

  return 0;
}
