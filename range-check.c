#include <stdio.h>

int main() {

    int n, low, high;
    scanf("%d %d %d", &n, &low, &high);
    
    if (n >= low && n <= high) {
        printf("In Range");
    } else  {
        printf("Out of Range");
    }
    return 0;
}
