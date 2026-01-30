#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    int num = 2;

    while (1) {
        int isPrime = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            count++;
            if (count == n) {
                printf("%d", num);
                break;
            }
        }

        num++;
    }

    return 0;
}