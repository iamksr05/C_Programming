#include <stdio.h>

int main()
{

    int n, a, b, c, d, A, B, C, D;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Circle");
        return 0;
    }
    else if (n == 3)
    {
        scanf("%d %d %d %d %d %d", &a, &b, &c, &A, &B, &C);
        if (a <= 0 || b <= 0 || c <= 0 || A <= 0 || B <= 0 || C <= 0 || a + b <= c || a + c <= b || b + c <= a || A + B + C != 180)
        {
            printf("Invalid Figure");
            return 0;
        }
        else if (a == b && a == c && A == 60 && B == 60 && C == 60)
        {
            printf("Equilateral Triangle");
        }
        else if ((a == b && a != c && A == B && A != C) || (a == c && a != b && A == C && A != B) || (b == c && b != a && B == C && B != A))
        {
            printf("Isosceles Triangle");
        }
        else if (a != b && b != c && a != c && A != B && B != C && A != C)
        {
            printf("Scalene Triangle");
        }
        else
        {
            printf("Invalid Figure");
        }
    }
    else if (n == 4)
    {
        scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &A, &B, &C, &D);
        if (a <= 0 || b <= 0 || c <= 0 || d <= 0 || A <= 0 || B <= 0 || C <= 0 || D <= 0 || A + B + C + D != 360)
        {
            printf("Invalid Figure");
            return 0;
        }
        else if ((a == b && b == c && c == d) && (A == 90 && B == 90 && C == 90 && D == 90))
        {
            printf("Square");
        }
        else if ((a == c && b == d) && (A == 90 && B == 90 && C == 90 && D == 90))
        {
            printf("Rectangle");
        }
        else if ((a == b && b == c && c == d) && (A == C && B == D) && (A != 90 && B != 90) && C != 90 && D != 90)
        {
            printf("Rhombus");
        }
        else if ((a == c && b == d) && (A == C && B == D) && (A != 90 && B != 90))
        {
            printf("Parallelogram");
        }
        else
        {
            printf("Invalid Figure");
        }
    }
    else
    {
        printf("Invalid Figure");
    }
    return 0;
}