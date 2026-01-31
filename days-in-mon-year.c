#include <stdio.h>

int main() {
    int month, year;
    scanf("%d", &month);
    scanf("%d", &year);

    int invalid = 0;

    if (month < 1 || month > 12) {
        printf("Invalid Month\n");
        invalid = 1;
    }

    if (year < 1) {
        printf("Invalid Year");
        invalid = 1;
    }

    if (invalid)
        return 0;

    int days;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                days = 29;
            else
                days = 28;
            break;
    }

    printf("%d", days);
    return 0;
}