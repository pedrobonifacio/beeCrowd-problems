#include <stdio.h>
#include <string.h>

int main()
{
  short n;
  int zero = 0, one = 0;

  scanf("%hd", &n);

  char bin[n];

  for (short i = 0; i < n; i++)
  {
    scanf("%s", &bin);

    for (short j = 0; j < n; j++)
    {
      if (bin[j] == '0')
      {
        zero++;
      }
      else
      {
        one++;
      }
    }
  }
  return 0;
}
