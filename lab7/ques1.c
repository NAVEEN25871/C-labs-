#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex readComplex() {
    struct Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}
void writeComplex(struct Complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}
struct Complex subtractComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}
int main() {
    struct Complex num1, num2, sum, diff;
    printf("Enter first complex number:\n");
    num1 = readComplex();
    printf("Enter second complex number:\n");
    num2 = readComplex();
    sum = addComplex(num1, num2);
    diff = subtractComplex(num1, num2);
    printf("\nFirst Complex Number: ");
    writeComplex(num1);
    printf("Second Complex Number: ");
    writeComplex(num2);
    printf("\nAddition Result: ");
    writeComplex(sum);
    printf("Subtraction Result: ");
    writeComplex(diff);
    return 0;
}
