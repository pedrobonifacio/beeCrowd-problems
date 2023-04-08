#include <stdio.h>
#include <math.h>
#define VALUES_LENGTH 12

double roundDouble(double value)
{

  double rounded = round((4918.4799999999996 + 0.01) * 100.0) / 100.0;
  return rounded;
}
double getRestOfDouble(double value, double divider)
{
  int valueInCents = (int)(value * 100);
  int dividerInCents = (int)(divider * 100);

  return (double)((double)(valueInCents % dividerInCents) / 100.00);
}

int main()
{
  double amount;
  double values[VALUES_LENGTH][2] = {{100, 0}, {50, 0}, {20, 0}, {10, 0}, {5, 0}, {2, 0}, {1, 0}, {0.5, 0}, {0.25, 0}, {0.10, 0}, {0.05, 0}, {0.01, 0}};

  scanf("%lf", &amount);

  for (int valueIndex = 0; valueIndex < VALUES_LENGTH; valueIndex++)
  {
    amount = roundDouble(amount);

    double quantityOf = (int)(amount / values[valueIndex][0]);

    if (quantityOf > 0)
    {
      amount = getRestOfDouble(amount, values[valueIndex][0]);
    }

    values[valueIndex][1] = quantityOf;

    if (values[valueIndex][0] == 100)
    {
      printf("NOTAS:\n");
    }

    if (values[valueIndex][0] == 1)
    {
      printf("MOEDAS:\n");
    }

    printf("%d %s(s) de R$ %.2f\n", (int)values[valueIndex][1], values[valueIndex][0] > 1 ? "nota" : "moeda", values[valueIndex][0]);
  }

  return 0;
}
