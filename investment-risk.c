#include <stdio.h>

int main() {

    int age, inc, rt;
    scanf("%d", &age);
    scanf("%d", &inc);
    scanf("%d", &rt);
    
    if ((age < 30) || 
        ((age >= 30 && age <= 50) && inc > 75000 && rt == 3) || 
        (age > 50 && rt == 3 && inc > 75000)) 
    {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    } 
    else if ( (((age >= 30) && (age <= 50)) && ((inc <= 75000) && (rt == 2))) || 
              (((age > 30) && (age <= 50)) && ((inc > 75000) && (rt == 2 || rt == 1))) ) 
    {
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    } 
    else if ((age > 50) || ((inc <= 30000) && (rt == 1 || rt == 2))) 
    {
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }

    return 0;
}


// Low Risk Portfolio:
//     Investor is above 50 years old, unless he has high income (>75,000) and high risk tolerance(3)
//     Investor has low income (<= 30,000) and prefers low or medium risk (tolerance 1 or 2).
// Medium Risk Portfolio:
//     Investor is between 30 and 50 years old (inclusive), with low or medium income (<= 75,000), and prefers medium risk (tolerance 2).
//     Investor is between 30 and 50 years old (inclusive), with high income (> 75,000), and prefers low or medium risk (tolerance 1 or 2).
// High Risk Portfolio:
//     Investor is under 30 years old, regardless of income or risk tolerance.
//     Investor is between 30 and 50 years old (inclusive), with high income (> 75,000), and prefers high risk (tolerance 3).
//      Investor is above 50 years old, prefers high risk (tolerance 3), and has high income (> 75,000).