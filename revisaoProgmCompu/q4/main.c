#include <stdio.h>

int main()
{
  short age;

  scanf("%hd", &age);

  if (age < 16)
  {
    printf("nao eleitor\n");
  }
  else if (age >= 18 && age < 65)
  {
    printf("obrigatorio\n");
  }
  else
  {
    printf("facultativo\n");
  }
  return 0;
}
