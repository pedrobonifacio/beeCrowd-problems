#include <stdio.h>

int main()
{
  float numbers[12][12];
  short line;
  scanf("%hd", &line);
  char operation = getchar();
  for (short i = 0; i < 12; i++)
  {
    for (short j = 0; j < 12; j++)
    {
      scanf("%f", &numbers[i][j]);
    }
    printf("1\n");
  }
  float result = 0;
  for (short i = 0; i < 12; i++)
  {
    result += numbers[line][i];
  }
  if (operation == 'M')
  {
    result /= 12;
  }
  printf("%.1f\n", result);
  return 0;
}