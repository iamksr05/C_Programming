#include <stdio.h>

int main() {

    int num, target, count = 0;
        
    scanf("%d", &num);
    int arr[num];
    
    for (int i = 0; i <= num - 1; ++i) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &target);
    
    for (int i = 0; i <= num-1; ++i) {
        if (target == arr[i]) {
            count++;
        }
    }
    
    printf("%d", count);
    
    return 0;
}