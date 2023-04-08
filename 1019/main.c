#include <stdio.h>

int main() {
  int totalSeconds;

  scanf("%d", &totalSeconds);

  int seconds = totalSeconds % 60;
  totalSeconds -= seconds;
  int minutes = (totalSeconds / 60) % 60;

  int hours = totalSeconds / 3600;

  printf("%d:%d:%d\n", hours, minutes, seconds);
  return 0;
}