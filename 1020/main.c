#include <stdio.h>

int main() {
  int totalDays;

  scanf("%d", &totalDays);

  int years = totalDays / 365;
  totalDays = totalDays % 365;
  int mouth = totalDays / 30;
  int days = totalDays % 30;

  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, mouth, days);
  return 0;
}