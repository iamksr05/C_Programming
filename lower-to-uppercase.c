#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char charLower;
    scanf("%c", &charLower);
    int charUpper = charLower - 32;
    printf("The uppercase of %c is %c", charLower, charUpper);
    return 0;
}
