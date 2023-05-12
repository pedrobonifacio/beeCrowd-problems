#include <stdio.h>
#include <string.h>

int newVogIsOrdered(char vog, char lastVog)
{
  char vogOrder[6] = "aeiou";

  if (vog == lastVog)
  {
    return 1;
  }

  for (int i = 0; i < 5; i++)
  {
    if (vog == vogOrder[i])
    {
      char left = vogOrder[i == 0 ? 4 : i - 1];
      char right = vogOrder[i == 4 ? 0 : i + 1];
      if (lastVog != left || lastVog != right)
        return 0;
    }
  }
  return 1;
}

int main()
{
  char str[51], lastVog = '-';
  int con = 0, maxCon = 0;
  scanf("%s", str);

  for (int i = 0; i < strlen(str); i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
        str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
      if (lastVog != '-' && newVogIsOrdered(str[i], lastVog) == 0)
      {
        printf("N\n");
        return 0;
      }

      lastVog = str[i];
    }
  }

  printf("S\n");

  return 0;
}