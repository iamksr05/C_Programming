#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 2) {
        printf("-1");
        return 0;
    }

    long long arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &arr[i]);
    }

    long long num1 = LLONG_MAX;
    long long num2 = LLONG_MAX;

    for (int i = 0; i < N; i++) {
        if (arr[i] < num1) {
            num2 = num1;
            num1 = arr[i];
        }
        else if (arr[i] > num1 && arr[i] < num2) {
            num2 = arr[i];
        }
    }

    if (num2 == LLONG_MAX) {
        printf("-1");
    } else {
        printf("%lld", num2);
    }

    return 0;
}