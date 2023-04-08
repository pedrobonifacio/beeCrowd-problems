#include <stdio.h>

int main()
{
  int smaller = 0, i = 0, n1, n2;

  while (scanf("%d %d", &n1, &n2) == 2)
  {
    if (n1 == n2)
    {
      break;
    }
    int smallerTwo = n1 < n2 ? n1 : n2;
    smaller = i == 0 ? smallerTwo : smallerTwo < smaller ? smallerTwo
                                                         : smaller;
  }

  printf("Menor: %d\n", smaller);
  return 0;
}
