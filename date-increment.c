#include <stdio.h>

int main() {


    int year;
    if (year % 100 == 0) {
                if (year % 400 == 0) {
                        printf("Yes, %d is a leap year.", year);
                }
                else {
                    printf("No, %d is not a leap year.", year);
                }
            }
            else if (year % 4 == 0) {
                printf("Yes, %d is a leap year.", year);
            }
            else {
                printf("No, %d is not a leap year.", year);
            }

}