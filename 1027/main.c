#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  short n;

  while (scanf("%hd", &n) == 1)
  {
    short x[1000], y[1000], maxPoints = 0;
    for (int i = 0; i < n; i++)
    {
      scanf("%hd %hd", &x[i], &y[i]);
    }

    int i = 0, j = 0, oldI = 0;
    while (i < n)
    {
      short points = 1, direction = 0;

      while (j < n)
      {
        short diffX = x[j] - x[i], diffY = y[j] - y[i];

        if (j != oldI && (diffX == 1 || diffX == 2) && abs(diffY) == 2 && diffY != direction)
        {
          points++;
          direction = diffY;
          oldI = i;
          i = j;
          j = 0;
        }
        else
        {
          j++;
        }
      }
      i++;

      if (points > maxPoints)
      {
        maxPoints = points;
      }
    }

    printf("%hd\n", maxPoints);
  }
  return 0;
}