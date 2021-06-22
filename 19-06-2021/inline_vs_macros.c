#include <stdio.h>

#define SQUARE(X) X*X

inline int square(int x)
{
  return x*x;
}

int main()
{
  printf(" %d\n",SQUARE(2+3));
  printf(" %d",square(2+3));
  return 0;
}
