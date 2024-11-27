#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 80) {
        printf("Grade: A\n");
    } else if (marks >= 60 && marks < 80) {
        printf("Grade: B\n");
    } else if (marks >= 40 && marks < 60) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
