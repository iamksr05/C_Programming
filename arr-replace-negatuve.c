#include <stdio.h>

int main() {

    int num;
        
    scanf("%d", &num);
    int arr[num];
    
    for (int i = 0; i <= num - 1; ++i) {
        scanf("%d", &arr[i]);
    }
    
    
    for (int i = 0; i <= num-1; ++i) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
        printf("%d ", arr[i]);
    }
        
    return 0;
}