#include <stdio.h>

// Function to rotate the array
void rotateArray(int arr[], int n, int k) {        

    if (k > n) {
        k = k % n;
    }
    int newArr[k];
    for (int i = 0; i <= k-1; ++i) {
        newArr[i] = arr[i];
    }

    for (int j = 0; j <= (n - k)-1; ++j) {
        arr[j] = arr[j + k];
    }


    for (int l = 0; l <= k-1; ++l) {
        arr[(n-k) + l] = newArr[l];
    }

}



int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    // Call the function to rotate the array
    rotateArray(arr, n, k);
    
    // Print the rotated array
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}