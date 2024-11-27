#include <stdio.h>

int main() {
    int age;
    float salary;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your salary: ");
    scanf("%f", &salary);

    if (age >= 18) {
        if (salary >= 50000) {
            printf("You are eligible for a car loan.\n");
        } else {
            printf("You are eligible for a motorcycle loan.\n");
        }
    } else {
        printf("You are not eligible for any loan.\n");
    }

    return 0;
}
