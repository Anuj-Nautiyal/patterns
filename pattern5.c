#include <stdio.h> 

int main()
{
    int n;
    printf("\nEnter the length of the square : ");
    scanf("%d", &n);

    int stars = (n % 2 == 0)? 2 * n : 2 * n - 1;
    int limit = (n % 2 == 0)? n / 2 + 1 : n / 2 + 2;
    int gap = (n % 2 == 0)? n + 1 : n + 2;

    for(int i = 0; i < limit; i++)
    {
        printf("%*c", gap , '*' );
        for(int j = 0; j < stars - 1; j++)
        {
            printf(" *");
        }
        gap -= 2;
        stars += 2;
        printf("\n");
    }

    for(int i = 0; i < n - 2; i++)
    {
        for(int j = 1; j < stars - 1; j++)
        {
            if(j > n + 1 && j < 2 * n)
                printf("  ");
            else    
                printf("* ");
        }
        printf("\n");
    }

    for(int i = 1; i <= limit; i++)
    {
        printf("%*c", gap + 2, '*');
        for(int j = 1; j < stars - 2; j++)
        {
            printf(" *");
        }
        gap += 2;
        stars -= 2;
        printf("\n");
    }


    return 0;
}