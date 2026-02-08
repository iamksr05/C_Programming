#include <stdio.h>

int main() {

    int n, i;
    scanf("%d %d", &n, &i);
    
    int N = n & (1 << i);
    
    if (N == 0){
        printf("%d", 0);
    } else {
        printf("%d", 1);
    }
    return 0;
}