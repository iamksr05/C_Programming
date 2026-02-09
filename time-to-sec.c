#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int toSeconds(int hours, int minutes, int seconds) {
    int res = hours*3600 + minutes*60 + seconds;
    return res;
    
}
int main() {

    int hours, minutes, seconds;
    scanf("%d %d %d", &hours, &minutes, &seconds);
    printf("Total seconds: %d", toSeconds(hours, minutes, seconds));
    return 0;
}


