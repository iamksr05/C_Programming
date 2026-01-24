#include <stdio.h>

void reverseArray(int arr[], int n) {
    for (int i = 0; i <= n-1; ++i) {
        printf("%d ", arr[n-(i+2)+1]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);


    return 0;
}