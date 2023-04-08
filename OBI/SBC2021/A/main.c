#include <stdlib.h>
#include <stdio.h>

int calcArea(long long minArea, long x1, long y1, long x2, long y2, long x3, long y3, long x4, long y4)
{
  long long abcd, abc, acd, abd, bcd;

  abcd = llabs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x1 * y4);

  if (0.5 * abcd < minArea)
  {
    return 0;
  }

  abc = llabs(x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3);
  acd = llabs(x1 * y3 + x3 * y4 + x4 * y1 - x3 * y1 - x4 * y3 - x1 * y4);

  if (abcd == abc + acd)
  {
    return 1;
  }
  else
  {
    abd = llabs(x1 * y2 + x2 * y4 + x4 * y1 - x2 * y1 - x4 * y2 - x1 * y4);
    bcd = llabs(x2 * y3 + x3 * y4 + x4 * y2 - x3 * y2 - x4 * y3 - x2 * y4);
    if (abcd == abd + bcd)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
}

long count(long long minArea, int towers, long x[], long y[])
{
  int i = 0, j, k, l;
  long total = 0;

  while (i < towers - 3)
  {
    // j = a = i + 1;
    j = i + 1;
    while (j < towers - 2)
    {
      // k = b = j + 1;
      k = j + 1;
      while (k < towers - 1)
      {
        // l = c = k + 1;
        l = k + 1;
        while (l < towers)
        {
          total += calcArea(minArea, x[i], y[i], x[j], y[j], x[k], y[k], x[l], y[l]);
          total += calcArea(minArea, x[i], y[i], x[j], y[j], x[l], y[l], x[k], y[k]);
          total += calcArea(minArea, x[i], y[i], x[k], y[k], x[j], y[j], x[l], y[l]);
          l++;
        }
        k++;
      }
      j++;
    }
    i++;
  }

  return total;
}

int main()
{
  long long minArea;
  long x[400], y[400];
  int towers;

  scanf("%lld %d", &minArea, &towers);

  for (int coordinateLine = 0; coordinateLine < towers; coordinateLine++)
  {
    scanf("%ld %ld", &x[coordinateLine], &y[coordinateLine]);
  }

  printf("%ld\n", count(minArea, towers, x, y));
  return 0;
}