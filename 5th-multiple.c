#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int buildNumber(int a, int b, int c, int d) {
    int res = a*1000 + b*100 + c*10 + d;
    return res * 5;
}

int main() {

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("The number is: %d", buildNumber(a, b, c, d));
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
