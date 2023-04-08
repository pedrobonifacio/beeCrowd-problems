#include <stdio.h>


int main()
{
  char name[50];
  double salary, sales;

  scanf("%s", &name);
  scanf("%lf", &salary);
  scanf("%lf", &sales);


  printf("TOTAL = R$ %.2f\n", salary + (sales * 0.15));

  return 0;
}