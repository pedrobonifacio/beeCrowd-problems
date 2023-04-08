#include <stdio.h>

int main()
{
  short h1, h2, m1, m2;

  scanf("%hd %hd", &h1, &m1);
  scanf("%hd %hd", &h2, &m2);

  int t1 = h1 * 60 + m1;
  int t2 = h2 * 60 + m2;

  int t = t2 + t1;

  short h = t / 60;
  short m = t % 60;
  printf("%02hd:%02hd + %02hd:%02hd = %02hd:%02hd\n", h1, m1, h2, m2, h, m);
  return 0;
}
