#include <stdio.h>

int main() {
    int a = 10;
    float b = 20.5;
    char c = 'A';
    double d = 123.456;
    
    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;
    double *p4 = &d;

    printf("Values of variables:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);
    printf("d = %.3lf\n\n", d);

    printf("Addresses stored in pointers:\n");
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p3 = %p\n", p3);
    printf("p4 = %p\n\n", p4);

    printf("Values accessed using pointers:\n");
    printf("*p1 = %d\n", *p1);
    printf("*p2 = %.2f\n", *p2);
    printf("*p3 = %c\n", *p3);
    printf("*p4 = %.3lf\n", *p4);

    return 0;
}
