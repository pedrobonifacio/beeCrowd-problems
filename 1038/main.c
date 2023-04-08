#include <stdio.h>
#include <stdlib.h>

int main()
{
  double products[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
  int option, quantity;

  scanf("%d %d", &option, &quantity);

  printf("Total: R$ %.2lf\n", products[option - 1] * quantity);

  return 0;
}
