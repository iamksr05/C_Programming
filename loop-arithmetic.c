#include <stdio.h>

int main() {

    int n, a, d;
    scanf("%d", &n);
    scanf("%d %d", &a, &d);
    
    for (int i = 0; i <= n-1; i++) {
        printf("%d ", a + (d * i));
    }
    return 0;
}