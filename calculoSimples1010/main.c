#include <stdio.h>


int main()
{
  int index1, index2, qnt1, qnt2;
  double price1, price2;
  int res1, res2;
  do
  {
        res1 = scanf("%d %d %lf", &index1, &qnt1, &price1);

    }   while ( res1 != 0);
    do
  {
        res2 =  scanf("%d %d %lf", &index2, &qnt2, &price2);
       

    }   while ( res2 != 0);
 
  printf("VALOR A PAGAR: R$ %.2f\n", (qnt1 * price1) + (qnt2 * price2));

  return 0;
}