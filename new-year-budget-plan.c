#include <stdio.h>

int main() {
    int budget, numGuests, foodCostPerGuest, decorationCost, musicCost, extraExpenses;
    scanf("%d%d%d%d%d%d", &budget, &numGuests, &foodCostPerGuest,
          &decorationCost, &musicCost, &extraExpenses);

    int foodCost = numGuests * foodCostPerGuest;
    int totalCost = foodCost + decorationCost + musicCost + extraExpenses;

    if (numGuests <= 5 || numGuests > 50) {
        printf("Celebration Denied");
        
    } else if (totalCost > budget) {
        printf("Celebration Denied");

    } else if (!(decorationCost < 0.3 * budget || foodCost < 0.5 * budget)) {
        printf("Celebration Denied");

    } else if (numGuests > 25 && musicCost == 0) {
        printf("Celebration Denied");

    } else {
        printf("Celebration Approved");
    }
    return 0;
}