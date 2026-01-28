#include <stdio.h>

int main() {

    int N, largest, smallest;
    scanf("%d", &N);
    
    int arr[N];
    
    for (int i = 0; i <= N-1; ++i) {
        scanf("%d", &arr[i]);
    }
    
    largest = arr[0];
    smallest = arr[0];
    
    for (int i = 0; i <= N-2; ++i) {
        if (largest < arr[i+1]) {
            largest = arr[i+1];
        }
        
        if (smallest > arr[i+1]) {
            smallest = arr[i+1];
        }
    }
    
    printf("%d %d", largest, smallest);
    
    
    
    return 0;
}