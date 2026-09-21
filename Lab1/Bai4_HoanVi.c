#include <stdio.h>
int main () {
    int a = 6;
    int b = 3;
    printf("Truoc khi hoan vi: a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Sau khi hoan vi: a = %d, b = %d\n", a, b);
    return 0;
}