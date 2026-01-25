#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    int angle = x % 360;

    if (x == 0) {
        printf("Acute Angle");
    }
    else if (angle == 0) {
        printf("Full Rotation");
    }
    else if (angle < 90) {
        printf("Acute Angle");
    }
    else if (angle == 90) {
        printf("Right Angle");
    }
    else if (angle > 90 && angle < 180) {
        printf("Obtuse Angle");
    }
    else if (angle == 180) {
        printf("Straight Angle");
    }
    else {
        printf("Reflex Angle");
    }

    return 0;
}
