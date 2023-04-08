#include <stdio.h>
int main(int argc, char const *argv[])
{
  int n1, n2;

  while (n1 != 0 && n2 != 0)
  {
    scanf("%d %d", &n1, &n2);

    if (n1 != 0 && n2 != 0)
    {
      printf("%d\n", n1 * n2);
    }
  }

  return 0;
}
