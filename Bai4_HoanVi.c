#include <stdio.h>
int main()
{
  int a = 3;
  int b = 6;
  printf("Truoc khi hoan vi: a =%d, b =%d\n", a, b);

  a = a + b;
  b = a - b;
  a = a - b;
  printf("Sau khi hoan vi: a =%d, b =%d", a, b);

  return 0;
}
