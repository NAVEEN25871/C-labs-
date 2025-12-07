#include <stdio.h>

struct Employee {
    char name[50];
    float basicPay;
    float grossSalary;
};

int main() {
    struct Employee emp[100];
    int i;
    float DA;

    printf("Enter details of 100employees:\n");

    for(i = 0; i < 100; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", emp[i].name);

        printf("Enter basic pay: ");
        scanf("%f", &emp[i].basicPay);

        DA = emp[i].basicPay * 0.52;

        emp[i].grossSalary = emp[i].basicPay + DA;
    }

    printf("\n--- Employee Gross Salary List ---\n");
    for(i = 0; i < 100; i++) {
        printf("Name: %s\t Gross Salary: %.2f\n", emp[i].name, emp[i].grossSalary);
    }

    return 0;
}
