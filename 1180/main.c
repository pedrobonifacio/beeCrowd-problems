#include <stdio.h>

int main()
{
  int n, min, index;
  scanf("%d", &n);
  int v[n];
  scanf("%d", &v[0]);
  min = v[0];
  index = 0;
  for (int i = 1; i < n; i++)
  {
    scanf("%d", &v[i]);
    if (min > v[i])
    {
      min = v[i];
      index = i;
    }
  }

  printf("Menor valor: %d\n", min);
  printf("Posicao: %d\n", index);
  return 0;
}