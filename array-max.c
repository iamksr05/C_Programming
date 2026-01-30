#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, largest;
    scanf("%d", &N);
    int arr[N];
    
    for (int i = 0; i <= N-1; ++i) {
        scanf("%d", &arr[i]);
    } 
    largest = arr[0];
    for (int j = 0; j <= N-2; ++j) {
        if (largest < arr[j+1]){
            largest = arr[j+1];
        }
    }
    printf("%d", largest);
    return 0;
}
