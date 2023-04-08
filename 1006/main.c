// #include <stdio.h>

// int main()
// {
//   double a, b;
//   scanf("%lf", &a);
//   scanf("%lf", &b);

//   printf("MEDIA = %.5f\n", (a * 3.5 + b * 7.5) / (3.5 + 7.5));
//   return 0;
// }

#include <stdio.h>

int main()
{
  double a, b, c;
  int pa = 2, pb = 3, pc = 5;

  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  float media = (a * pa + b * pb + c * pc) / (pa + pb + pc);

  printf("MEDIA = %.1f\n", media);
  return 0;
}