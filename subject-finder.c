#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int year;
    char branch;
    int internship = 0;

    if (scanf("%d %c", &year, &branch) < 2) {
        printf("-1");
        return 0;
    }

    switch (year) {
        case 1:
            switch (branch) {
                case 'C':
                case 'E':
                case 'M':
                    printf("Physics\nChemistry\nMaths");
                    break;
                default:
                    printf("-1");
            }
            break;

        case 2:
            switch (branch) {
                case 'C':
                    printf("C Programming\nComputer Organization & Architecture\nWeb Development");
                    break;
                case 'E':
                    printf("Signal Processing\nLogic Design\nNetwork Analysis");
                    break;
                case 'M':
                    printf("Thermodynamics\nSolid Mechanics\nHeat Transfer");
                    break;
                default:
                    printf("-1");
            }
            break;

        case 3:
            switch (branch) {
                case 'C':
                    printf("Object-oriented Programming\nDBMS\nData Structures & Algorithms");
                    break;
                case 'E':
                    printf("Analog Electronics\nEmbedded Systems\nMicrocontrollers");
                    break;
                case 'M':
                    printf("Applied Mechanics\nKinematics\nMechatronics");
                    break;
                default:
                    printf("-1");
            }
            break;

        case 4:
            if (scanf("%d", &internship) != 1) {
                printf("-1");
                return 0;
            }

            switch (internship) {
                case 1:
                    switch (branch) {
                        case 'C':
                        case 'E':
                        case 'M':
                            printf("Enrolled into Internship Program");
                            break;
                        default:
                            printf("-1");
                    }
                    break;

                case 0:
                    switch (branch) {
                        case 'C':
                            printf("Operating Systems\nComputer Networks\nCompiler Design");
                            break;
                        case 'E':
                            printf("VLSI Design\nFiber-optic Communication\nDigital Electronics");
                            break;
                        case 'M':
                            printf("Mechanism of Materials (MOM)\nStrength of Materials (SOM)\nMachine Design");
                            break;
                        default:
                            printf("-1");
                    }
                    break;

                default:
                    printf("-1");
            }
            break;

        default:
            printf("-1");
    }

    return 0;
}