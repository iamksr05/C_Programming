#include <stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);
    
    int sub = a + (~b + 1);
    if ((sub >> 31) & 1) {
        printf("%d", a);
    } else {
        printf("%d", b);
    }
    return 0;
}
