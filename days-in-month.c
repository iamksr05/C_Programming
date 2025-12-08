#include <stdio.h>

int main()
{
    int month;
    scanf("%d", &month);
    
    switch(month%2==0 && month!=2) {
        case 0 : printf((month == 2) ? "28 days" : "31 days"); 
        break;
        case 1 : printf((month == 8) ? "31 days" : "30 days");
        break;
        default : printf("Invalid month number.");
        break;
        
    }

    return 0;
}