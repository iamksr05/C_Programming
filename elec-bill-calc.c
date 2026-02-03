#include <stdio.h>

int main() {

    int n;
    float amount = 0.0;
    scanf("%d", &n);
    
    if (n >= 0) {
        if (n <= 100) {
            amount = n * 5.0;
        } else if (n <= 300) {
            amount = 500 + ((n - 100) * 7.0);
        } else {
            amount = 500 + 1400 + ((n - 300) * 10.0);
        } if (amount >= 0 && amount <= 1200) {
        printf("The electricity bill is: %.2f.", amount * 0.9);
    } else if (amount > 1200){
        printf("The electricity bill is: %.2f.", amount * 1.0);
    }
    } else {
        printf("Invalid Input!");
    }
    
    
    return 0;
}