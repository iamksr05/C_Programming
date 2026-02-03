#include <stdio.h>

int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int number = a;
    
    if (b > number) {
        number = b;
    }
    if (c > number) {
        number = c;
    }
    
    printf("The largest number is : %d", number);
    return 0;
}