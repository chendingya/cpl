#include <stdio.h>
int main(void)
{
  int n;
  scanf("%d", &n);
  printf("%d%d%d", n % 10, (n / 10) % 10, (n / 100) % 10);
  return 0;
}
