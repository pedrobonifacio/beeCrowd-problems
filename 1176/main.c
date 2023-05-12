#include <stdio.h>

int main()
{
  int qnt;
  scanf("%d", &qnt);
  int index;
  long int fibo[60];

  fibo[0] = 0;
  fibo[1] = 1;
  for (int i = 2; i < 60; i++)
  {

    fibo[i] = fibo[i - 1] + fibo[i - 2];
  }
  for (int i = 0; i < qnt; i++)
  {
    scanf("%d", &index);
    printf("Fib(%d) = %ld\n", index, fibo[index]);
  }
  return 0;
}