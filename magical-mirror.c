#include <stdio.h>

int con1(int number) {
    int c_one = number % 2 == 0;
    int c_two = number > 10;
    return c_one && c_two;
}

int con2(int number) {
    int co_one = number > 15;
    int co_two = number % 3 == 0;
    return co_one && co_two;
}

int con3(int number) {
    if (number % 7 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    int number;
    scanf("%d", &number);
    
    if (number > 0) {
        if (con1(number) && con2(number) && con3(number)) {
            printf("The verdict for the number %d is: SUPERNATURAL", number);
        }
        else if (con1(number) && con3(number)) {
            printf("The verdict for the number %d is: MIRACULOUS", number);
        }
        else if (con2(number) && con3(number)) {
            printf("The verdict for the number %d is: MIRACULOUS", number);
        }
        else if (con1(number) && con2(number)) {
            printf("The verdict for the number %d is: MIRACULOUS", number);
        }
        else if (con1(number)) {
            printf("The verdict for the number %d is: MAGICAL", number);
        }
        else if (con2(number)) {
            printf("The verdict for the number %d is: MAGICAL", number);
        }
        else if (con3(number)) {
            printf("The verdict for the number %d is: MAGICAL", number);
        }
        else if (!con1(number)  && !con2(number) && !con3(number)) {
            printf("The verdict for the number %d is: NORMAL", number);
        }
        else  {
            printf("The verdict for the number %d is: INVALID", number);
        }
    } else {
        printf("The verdict for the number %d is: INVALID", number);
    }
    
    return 0;
}
