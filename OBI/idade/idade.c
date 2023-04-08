#include <stdio.h>

int main() {
  int motherAge, firstChildAge, secondChildAge;

  scanf("%d", &motherAge);
  scanf("%d", &firstChildAge);
  scanf("%d", &secondChildAge);

  int a = motherAge - firstChildAge - secondChildAge;
  printf("%d\n", a);

  return 0;
}