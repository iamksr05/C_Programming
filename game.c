#include <stdio.h>

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
            printf("Poor choice, Game Over!\n");
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
                    printf("All that glitters is not gold, Game Over!\n");
                else if (num == 2)
                    printf("All your efforts were for nothing, Game Over!\n");
                else if (num == 3)
                    printf("Congratulations!! You won the treasure.\n");
            }
            else if (left_two == 2)
            {
                printf("Poor luck, Game Over!\n");
            }
        }
    }
    else if (first == 2)
    {
        printf("Player chooses the Middle path.\n");
        scanf("%d", &middle);

        if (middle == 582)
        {
            printf("Player solved the puzzle.\n");
            scanf("%d", &num);

            if (num == 1)
                printf("All that glitters is not gold, Game Over!\n");
            else if (num == 2)
                printf("All your efforts were for nothing, Game Over!\n");
            else if (num == 3)
                printf("Congratulations!! You won the treasure.\n");
        }
        else
        {
            printf("Foolish player, Game Over!\n");
        }
    }
    else if (first == 3)
    {
        printf("Player chooses the Right path.\n");
        scanf("%d", &right);

        if (right == 30)
        {
            printf("Player solved the puzzle.\n");
            scanf("%d", &num);

            if (num == 1)
                printf("All that glitters is not gold, Game Over!\n");
            else if (num == 2)
                printf("All your efforts were for nothing, Game Over!\n");
            else if (num == 3)
                printf("Congratulations!! You won the treasure.\n");
        }
        else
        {
            printf("Foolish player, Game Over!\n");
        }
    }

    return 0;
}