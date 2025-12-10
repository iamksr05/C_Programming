#include <stdio.h>

void final(int num)
{
    printf("1: All that glitters is not gold, Game Over!\n2: All your efforts were for nothing, Game Over!\n3: Congratulations!! You won the treasure.");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("All that glitters is not gold, Game Over!");
    }
    else if (num == 2)
    {
        printf("All your efforts were for nothing, Game Over!");
    }
    else if (num == 3)
    {
        printf("Congratulations!! You won the treasure.");
    }
}

int main()
{

    int first, left, left_two, middle, right, num;
    scanf("%d", &first);

    if (first == 1)
    {
        printf("Player chooses the Left path.\n");
        scanf("%d", &left);
        if (left == 1)
        {
            printf("Poor choice, Game Over!");
        }
        else if (left == 2)
        {
            printf("Player found a bridge.\n");
            scanf("%d", &left_two);
            if (left_two == 1)
            {
                printf("Player crosses the bridge safely.\n");
                scanf("%d", &num);
                if (num == 1)
                {
                    printf("All that glitters is not gold, Game Over!");
                }
                else if (num == 2)
                {
                    printf("All your efforts were for nothing, Game Over!");
                }
                else if (num == 3)
                {
                    printf("Congratulations!! You won the treasure.");
                }
            }
            else if (left_two == 2)
            {
                printf("Poor luck, Game Over!");
            }
        }
    }
    else if (first == 2)
    {
        printf("Player chooses the Middle path\n");
        printf("I am a three-digit number. My second digit is four times bigger than the third digit, my first digit is three less than the second digit, and the sum of my digits is 15. What number am I?\n");
        scanf("%d", &middle);
        if (middle == 582)
        {
            printf("Player solved the puzzle.\n");
            scanf("%d", &num);
            if (num == 1)
            {
                printf("All that glitters is not gold, Game Over!");
            }
            else if (num == 2)
            {
                printf("All your efforts were for nothing, Game Over!");
            }
            else if (num == 3)
            {
                printf("Congratulations!! You won the treasure.");
            }
        }
        else
        {
            printf("Foolish player, Game Over!");
        }
    }
    else if (first == 3)
    {
        printf("Player chooses the Right path\n");
        printf("What number comes next in the sequence: 2, 6, 12, 20, __?\n");
        scanf("%d", &right);
        if (right == 30)
        {
            printf("Player solved the puzzle.\n");
            scanf("%d", &num);
            if (num == 1)
            {
                printf("All that glitters is not gold, Game Over!");
            }
            else if (num == 2)
            {
                printf("All your efforts were for nothing, Game Over!");
            }
            else if (num == 3)
            {
                printf("Congratulations!! You won the treasure.");
            }
        }
        else
        {
            printf("Foolish player, Game Over!");
        }
    }
    else
    {
        printf("Invalid Choice.");
    }

    return 0;
}