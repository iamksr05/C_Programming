#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d", &N);
    
    int dig1 = N / 1000;
    int dig2 = (N / 100) % 10;
    int dig3 = (N / 10) % 10;
    int dig4 = N % 10;
    
    int largest = dig1;
    
    if (dig2 > largest) {
        largest = dig2;
    }
    if (dig3 > largest) {
        largest = dig3;
    }
    if (dig4 > largest) {
        largest = dig4;
    }
    
    int smallest = dig1;
    if (dig2 < smallest) {
        smallest = dig2;
    }
    if (dig3 < smallest) {
        smallest = dig3;
    }
    if (dig4 < smallest) {
        smallest = dig4;
    }
    
    int scnddig = dig1;
    if (scnddig)
    
    
    return 0;
}
