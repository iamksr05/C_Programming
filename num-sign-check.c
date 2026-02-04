#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);
    
    if (N >> 31 == -1) {
        printf("Negative");
    } else {
        printf("Positive");
    }
    return 0;
}