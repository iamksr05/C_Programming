#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, sum = 0;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; ++i) {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            sum += i;
        }
    }
    
    printf("%d", sum);
    return 0;
}
