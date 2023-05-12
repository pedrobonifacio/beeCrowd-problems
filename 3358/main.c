#include <stdio.h>
#include <string.h>

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    char name[43];
    int con = 0, maxCon = 0;
    scanf("%s", name);

    for (int j = 0; j < strlen(name); j++)
    {
      if (name[j] != 'a' && name[j] != 'e' && name[j] != 'i' && name[j] != 'o' &&
          name[j] != 'u' && name[j] != 'A' && name[j] != 'E' && name[j] != 'I' && name[j] != 'O' && name[j] != 'U')
      {
        con++;
        if (maxCon >= 3)
          break;
      }
      else
      {
        if (con > maxCon)
        {
          maxCon = con;
        }
        if (maxCon >= 3)
          break;
        con = 0;
      }
      if (con > maxCon)
      {
        maxCon = con;
      }
    }

    if (maxCon >= 3)
    {

      printf("%s nao eh facil\n", name);
    }
    else
    {
      printf("%s eh facil\n", name);
    }
  }

  return 0;
}