#include <stdio.h>

int main() {
  int dist;
  double combu;

  scanf("%d", &dist);
  scanf("%lf", &combu);

  printf("%.3f km/l\n", dist/combu);
  return 0;
}