#include <stdio.h>

int main() {
    int h, m;
    scanf("%d %d", &h, &m);

    int convertedHour;
    char period[3];

    if (h == 0) {
        convertedHour = 12;
        sprintf(period, "AM");
    }
    else if (h == 12) {
        convertedHour = 12;
        sprintf(period, "PM");
    }
    else if (h > 12) {
        convertedHour = h - 12;
        sprintf(period, "PM");
    }
    else {
        convertedHour = h;
        sprintf(period, "AM");
    }

    printf("%d:%02d %s", convertedHour, m, period);

    return 0;
}
