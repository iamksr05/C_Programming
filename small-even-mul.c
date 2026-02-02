#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    
    if (n % 2 == 0) {
        printf("%d", n);
    } else {
        printf("%d", n * 2);
    }
    return 0;
}
