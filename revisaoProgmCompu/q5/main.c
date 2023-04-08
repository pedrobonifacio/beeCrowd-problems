#include <stdio.h>

int main()
{
  short day;

  scanf("%hd", &day);

  switch (day)
  {
  case 1:
    printf("DOMINGO\n");
    break;
  case 2:
    printf("SEGUNDA\n");
    break;
  case 3:
    printf("TERÇA\n");
    break;
  case 4:
    printf("QUARTA\n");
    break;
  case 5:
    printf("QUINTA\n");
    break;
  case 6:
    printf("SEXTA\n");
    break;
  case 7:
    printf("SABÁDO\n");
    break;
  default:
    printf("INEXISTENTE\n");
    break;
  }
  return 0;
}
