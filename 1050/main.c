#include <stdio.h>
#include <stdlib.h>

// struct ddd {
//   int ddd;
//   char city[20];
// };

// int main()
// {
//   Ddd products[9] = {4.00, 4.50, 5.00, 2.00, 1.50};
//   int option, quantity;

//   scanf("%d %d", &option, &quantity);

//   printf("Total: R$ %.2lf\n", products[option - 1] * quantity);

//   return 0;
// }

int main()
{
  int ddd;

  scanf("%d", &ddd);

  switch (ddd)
  {
  case 11:
    printf("Sao Paulo\n");
    break;
  case 19:
    printf("Campinas\n");
    break;
  case 21:
    printf("Rio de Janeiro\n");
    break;
  case 27:
    printf("Vitoria\n");
    break;
  case 31:
    printf("Belo Horizonte\n");
    break;
  case 32:
    printf("Juiz de Fora\n");
    break;
  case 61:
    printf("Brasilia\n");
    break;
  case 71:
    printf("Salvador\n");
    break;
  default:
    printf("DDD nao cadastrado\n");
    break;
  }

  return 0;
}