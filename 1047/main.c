#include <stdio.h>
#include <math.h>

int main() {
  int hourStart, hourEnd, minStart, minEnd, start, end, hour, minute, all;

  scanf("%d %d %d %d", &hourStart, &minStart, &hourEnd, &minEnd);

  hour = hourEnd - hourStart;
  end = minEnd - minStart;

  start = hourStart * 60 + minStart;
  end = hourEnd * 60 + minEnd;

  if(start >= end) {
    end += 24  * 60;
  }

  all = end - start;

  minute = all % 60;
  hour = (all - minute) / 60;
  
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);
  return 0;
}