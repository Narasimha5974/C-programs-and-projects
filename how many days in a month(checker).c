
#include <stdio.h>

int main() {
    int m, y;
    printf("Enter month (1-12) and year: ");
    scanf("%d %d", &m, &y);

    int d = (m == 2) ? (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) ? 29 : 28
                 : (m == 4 || m == 6 || m == 9 || m == 11) ? 30 : 31;

    printf("%d days", d);

    return 0;
}
