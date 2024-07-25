#include <stdio.h>

int main() {
    int a = 10;
    int b = 24;

    a += b;
    printf("After addition, a is %d\n", a);
    
    a -= b;
    printf("After subtraction, a is %d\n", a);
    
    a *= b;
    printf("After multiplication, a is %d\n", a);
    
    float division_result = (float)a / b;
    printf("After division, a is %.2f\n", division_result);

    return 0;
}
