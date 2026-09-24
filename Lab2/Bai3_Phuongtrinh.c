#include <stdio.h>
int main() {
    float a, b;
    printf("a: "); scanf("%f", &a);
    printf("b: "); scanf("%f", &b);
    float x = -b / a;
    printf("Nghiem cua phuong trinh la: %.2f\n", x);
    return 0;
}
    
    