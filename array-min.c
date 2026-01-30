#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, smallest;
    scanf("%d", &N);
    int arr[N];
    
    for (int i = 0; i <= N-1; ++i) {
        scanf("%d", &arr[i]);
    } 
    smallest = arr[0];
    for (int j = 0; j <= N-2; ++j) {
        if (smallest > arr[j+1]){
            smallest = arr[j+1];
        }
    }
    printf("%d", smallest);
    return 0;
}
