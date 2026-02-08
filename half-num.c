#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


float half(int num) {
    float res = num / 2.0;
    return res;
}

int main() {

    int num;
    scanf("%d", &num);
    printf("Half of %d is %.2f", num, half(num));

    return 0;
}
