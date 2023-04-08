#include <stdio.h>

double percentage(int total, int part)
{
  return (part * 100.0) / total;
}

int main()
{

  int i = 0, qnt, n, coelho = 0, rato = 0, sapo = 0;
  char type;

  scanf("%d", &qnt);

  while (i < qnt)
  {
    scanf("%d %c", &n, &type);
    switch (type)
    {
    case 'C':
      coelho += n;
      break;
    case 'R':
      rato += n;
      break;
    case 'S':
      sapo += n;
      break;
    }

    i++;
  }

  int total = coelho + rato + sapo;
  printf("Total: %d cobaias\n", total);
  printf("Total de coelhos: %d\n", coelho);
  printf("Total de ratos: %d\n", rato);
  printf("Total de sapos: %d\n", sapo);
  printf("Percentual de coelhos: %.2f %%\n", percentage(total, coelho));
  printf("Percentual de ratos: %.2f %%\n", percentage(total, rato));
  printf("Percentual de sapos: %.2f %%\n", percentage(total, sapo));

  return 0;
}