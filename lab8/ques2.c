#include <stdio.h>

int main() {
    int a = 5;
    char b =a;
    float c = 3.14f;

    int *p_a = &a;
    char *p_b = &b;
    float *p_c = &c;

    printf("--- Initial Addresses ---\n");
    printf("int  Address: %p | char Address: %p | Float Address: %p\n", (void*)p_a, (void*)p_b, (void*)p_c);
    
    p_a++;
    p_b++;
    p_c++;

    printf("\n--- Addresses After Increment (ptr++) ---\n");
    printf("int Address: %p (changed by +1) \n", (void*)p_a);
    printf("char Address: %p (changed by +2) \n", (void*)p_b);
    printf("Float Address: %p (changed by +3) \n", (void*)p_c);

    p_a--;
    p_b--;
    p_c--;

    printf("\n--- Addresses After Decrement (ptr--) ---\n");
    printf("int Address: %p (changed by -1) \n", (void*)p_a);
    printf("char Address: %p (changed by -4) \n", (void*)p_b);
    printf("Float Address: %p (changed by -4) \n", (void*)p_c);

    return 0;
}