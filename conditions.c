#include<stdio.h>

int main() {
    for (int i = 2; i <= 11; i++) {
    int isPrime = 1; // assume prime

    for (int pr = 2; pr * pr <= i; pr++) {
        if (i % pr == 0) {
            isPrime = 0;  // not prime
            break;
        }
    }
    if (isPrime) {
        // printf("%d\n", i);
        for (int j = 2; j <= 11; j++) {
            int isPrime2 = 1; // assume prime

            for (int pr1 = 2; pr1 * pr1 <= j; pr1++) {
                if (j % pr1 == 0) {
                    isPrime2 = 0;  // not prime
                    break;
                }
            }
        
        if (isPrime2) {
            if (i != j) {
                printf("%d", i * j);
            }
        }
        }

    }

}