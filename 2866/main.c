#include <stdio.h>
#include <string.h>
int main()
{
  short int n;
  scanf("%hd", &n);
  char str[51];
  for (short int i = 0; i < n; i++)
  {
    scanf("%s", str);
    for (short int j = strlen(str); j >= 0; j--)
    {
      if (str[j] >= 97 && str[j] <= 122)
      {
        printf("%c", str[j]);
      }
    }
    printf("\n");
  }
  return 0;
}