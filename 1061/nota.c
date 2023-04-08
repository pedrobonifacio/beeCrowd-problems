#include <math.h>
#include <stdio.h>

int minuteToSeconds(int minute)
{
  return minute * 60;
}

int hourToSeconds(int hour)
{
  return hour * 3600;
}

int dayToSeconds(int day)
{
  return day * 86400;
}

int main()
{
  int day1, day2, h1, h2, m1, m2, s1, s2;

  scanf("%*s %d", &day1);
  scanf("%d : %d : %d", &h1, &m1, &s1);
  scanf("%*s %d", &day2);
  scanf("%d : %d : %d", &h2, &m2, &s2);

  int t1 = dayToSeconds(day1) + hourToSeconds(h1) + minuteToSeconds(m1) + s1;
  int t2 = dayToSeconds(day2) + hourToSeconds(h2) + minuteToSeconds(m2) + s2;

  int t = t2 - t1;

  int day = t / 86400;
  t = t % 86400;
  int hour = t / 3600;
  t = t % 3600;
  int minute = t / 60;
  t = t % 60;
  int second = t;

  printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", day, hour, minute, second);

  return 0;
}