#include <stdio.h>

long fib(int n)
{
  long fib[n + 2];
  fib[0] = 0;
  fib[1] = 1;
  for (int i = 2; i <= n; i++)
  {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  return fib[n];
}

long fiboEven(int n)
{
  if (n < 1)
  {
    return n;
  }

  if (n == 1)
  {
    return 2;
  }

  return ((4 * fiboEven(n - 1)) +
          fiboEven(n - 2));
}

int main()
{
  int n;
  printf("Enter n= \n");
  scanf("%d", &n);
  printf("%ld\n", fib(n));
  printf("%ld", fiboEven(n));
  return 0;
}