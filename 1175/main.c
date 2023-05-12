#include <stdio.h>
#define SIZE 20
int main()
{
  int v[SIZE];

  for (int i = 0; i < SIZE; i++)
  {
    scanf("%d", &v[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    int temp = v[i];
    int indexSwap = SIZE - (i + 1);
    v[i] = v[indexSwap];
    v[indexSwap] = temp;
  }

  for (int i = 0; i < SIZE; i++)
  {
    printf("N[%d] = %d\n", i, v[i]);
  }
  return 0;
}