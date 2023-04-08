#include <math.h>
#include <stdio.h>

int main() {
  double capacity, students;

  scanf("%lf", &capacity);
  scanf("%lf", &students);

  printf("%d", (int)ceil(students / (capacity - 1)));

  return 0;
}