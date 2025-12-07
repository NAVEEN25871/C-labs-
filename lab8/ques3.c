#include <stdio.h>

int main() {
    int a = 5;
    float b = 3.5;
    char c = 'A';

    void modifyValues(int *x, float *y, char *z) {
    *x = *x + 10;      
    *y = *y * 2;       
    *z = *z + 1;       
}

    printf("Before function call:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n\n", c);

    modifyValues(&a, &b, &c);

    printf("After function call:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    return 0;
}
