#include <stdio.h>

int main() {

    int n;
    double amount, money, min_money;
    
    scanf("%lf %d", &amount, &n);
    money = amount;
    min_money = amount;
  
    for(int i = 1; i <= n; i++)
    {
        if (money < 0.4 * amount) {
            printf("Stopped early after %d days: %.2f\n",i - 1 ,money);
            printf("Minimum amount held by Bhaskar: %.2f\n",min_money);
    
          if(money > 0.7 * amount){
        printf("Lucky Bhaskar");
           
    }
          else {
        printf("Better Luck Next Time!");
    }
    return 0;
        }

        if (i % 6 == 0) {
            money = money + money * 0.7;
            
                i += 6;
            
        }
        else if (i % 2 == 0) {
            money = money - money / 8;
             
        }
        else if (i % 3 == 0) {
            money = money - money / 5;
            
        }
        else {
            money = money - money * 0.1;
            
        }
        
        if (money < min_money) {
          min_money = money;
        }

    }
    
    printf("After %d days: %.2f\n", n, money);

    
    printf("Minimum amount held by Bhaskar: %.2f\n", min_money);
    if (money >= 0.70 * amount) {
        printf("Lucky Bhaskar");
    }
    else {
        printf("Better Luck Next Time!");
    }
    return 0;
}