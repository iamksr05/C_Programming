#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A;
    long B;
    char C;
    float D;
    double E;
    scanf("%d %ld %c %f %lf", &A, &B, &C, &D, &E);
    
    printf("%d\n", A);
    printf("%ld\n", B);
    printf("%c\n", C);
    printf("%.3f\n", D);
    printf("%.9lf", E);
    
    

    return 0;
}
