#include <stdio.h>

int main() {

    int a = 10;
    int b = 24;

    int addition = a + b;
    int substraction = a - b;
    int multiplication = a * b;
    float division = a/(float)b;

    int modulos = a % b;
    a++;
    b--;

    printf("addition is %d\n", addition);
    printf("substraction is %d\n", substraction);
    printf("multiplication is %d\n", multiplication);
    printf("division is %f\n", division);
    printf("modulos is %d\n", modulos);
    printf("positive incrementation is %d\n", a++);
    printf("negative incrementation is %d\n", b--);

    return 0;

}