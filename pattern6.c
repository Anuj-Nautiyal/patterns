#include <stdio.h> 

int main()
{
    int n;
    printf("\nEnter a positive number : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("%*c", n / 2 + 1 , '*');

        for(int j = 1; j < n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    int head_stars = ( n % 2 == 0 ) ? 2 * n : 2 * n - 1 ;

    for(int i = 1; i <= n; i++)
    {
        printf("%*c", i , '*');

        for(int j = 0; j < head_stars - 1; j++)
        {
            printf("*");
        }
        printf("\n");
        head_stars -= 2;
    }

    return 0;
}