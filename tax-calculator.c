#include <stdio.h>

int main() {

    float income;
    float tax = 0.0;
    scanf("%f", &income);
    
    if (income < 0){
        printf("INVALID");
        return 0;
        
    } else if (income <= 250000) {
        tax = 0;
        
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
        
    } else if (income <= 1000000) {
        tax = 12500 + ((income - 500000) * 0.2);
        
    } else if (income > 1000000) {
        tax = 12500 + 100000 + ((income - 1000000) * 0.3);
        
    } else {
        printf("INVALID");
    }
    
    printf("%.2f", tax);
    return 0;
}