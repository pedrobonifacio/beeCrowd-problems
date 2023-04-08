#include <stdio.h>
#include <math.h>

int main()
{
  short l, a, c, r;

  scanf("%hd %hd %hd %hd", &l, &a, &c, &r);

  int diagonalBox = sqrt((l * l) + (a * a) + (c * c));

  if (diagonalBox <= (2 * r))
    printf("S\n");
  else
  {
    printf("N\n");
  }

  return 0;
}