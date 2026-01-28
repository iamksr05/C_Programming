#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    int printed = 0;

    if (N % 6 == 0 && N % 5 != 0) {
        printf("A");
        printed = 1;
    }
    else if (N > 20 && (N == 21 || N == 22 || N == 33 || N == 35 || N == 55 || N == 77)) {
        printf("B");
        printed = 1;
    }
    else if ( ( (N < 0 ? -N : N) >= 10 && (N < 0 ? -N : N) <= 99 ) &&
              ( (N % 3 == 0) ^ (N % 7 == 0) ) ) {
        printf("C");
        printed = 1;
    }
    else if (N < 200) {
        int found = 0;
        for (int i = 1; i <= 14; ++i) {
            if (N == i * i) {
                printf("D");
                printed = 1;
                found = 1;
                break;
            }
        }

    }

    if (!printed) {
        printf("E");
    }

    return 0;
}
