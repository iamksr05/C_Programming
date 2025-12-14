#include <stdio.h>


int main() {

    int zero, one, two, three, four, five, six, seven, eight, nine;
    scanf("%d %d %d %d %d %d %d %d %d %d", &zero, &one, &two, &three, &four, &five, &six, &seven, &eight, &nine);
    
    int pos1, rotate1;
    int pos2, rotate2;
    int pos3, rotate3;
    scanf("%d %d", &pos1, &rotate1);
    scanf("%d %d", &pos2, &rotate2);
    scanf("%d %d", &pos3, &rotate3);
    
    if (pos1 == 0) zero = ((zero + rotate1) % 10);
    else if (pos1 == 1) one = ((one + rotate1) % 10);
    else if (pos1 == 2) two = ((two + rotate1) % 10);
    else if (pos1 == 3) three = ((three + rotate1) % 10);
    else if (pos1 == 4) four = ((four + rotate1) % 10);
    else if (pos1 == 5) five = ((five + rotate1) % 10);
    else if (pos1 == 6) six = ((six + rotate1) % 10);
    else if (pos1 == 7) seven = ((seven + rotate1) % 10);
    else if (pos1 == 8) eight = ((eight + rotate1) % 10);
    else if (pos1 == 9) {nine = ((nine + rotate1) % 10);}
    else{}


    if (pos2 == 0) zero = ((zero + rotate2) % 10);
    else if (pos2 == 1) one = ((one + rotate2) % 10);
    else if (pos2 == 2) two = ((two + rotate2) % 10);
    else if (pos2 == 3) three = ((three + rotate2) % 10);
    else if (pos2 == 4) four = ((four + rotate2) % 10);
    else if (pos2 == 5) five = ((five + rotate2) % 10);
    else if (pos2 == 6) six = ((six + rotate2) % 10);
    else if (pos2 == 7) seven = ((seven + rotate2) % 10);
    else if (pos2 == 8) eight = ((eight + rotate2) % 10);
    else if (pos2 == 9) {nine = ((nine + rotate2) % 10);}
    else{}


    if (pos3 == 0) zero = ((zero + rotate3) % 10);
    else if (pos3 == 1) one = ((one + rotate3) % 10);
    else if (pos3 == 2) two = ((two + rotate3) % 10);
    else if (pos3 == 3) three = ((three + rotate3) % 10);
    else if (pos3 == 4) four = ((four + rotate3) % 10);
    else if (pos3 == 5) five = ((five + rotate3) % 10);
    else if (pos3 == 6) six = ((six + rotate3) % 10);
    else if (pos3 == 7) seven = ((seven + rotate3) % 10);
    else if (pos3 == 8) eight = ((eight + rotate3) % 10);
    else if (pos3 == 9) {nine = ((nine + rotate3) % 10);}
    else{}
    printf("%d %d %d %d %d %d %d %d %d %d", zero, one, two, three, four, five, six, seven, eight, nine);
    
    return 0;
}