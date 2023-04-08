#include <stdio.h>

int main(int argc, char *argv[])
{
int id, hoursWorked;
double hourCost;

scanf("%d", &id);
scanf("%d", &hoursWorked);
scanf("%lf", &hourCost);


printf("NUMBER = %d\n", id);
printf("SALARY = U$ %.2f\n", hourCost * hoursWorked);

return 0;
}