#include <stdio.h> 

int main()
{
    int n;
    printf("\nEnter a positive number : ");
    scanf("%d", &n);

    int width = (n % 2 == 0) ?  n - 1 : n ;

    for(int i = 0; i < n; i++)
    {
        printf("%*c", n / 2 + 1 , '*');

        for(int j = 1; j < width; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(int i = 0; i < n; i++)
    {
        printf("%*c", i + 1, '*');

        for(int j = 1; j < (2*n) - 1 - (2*i); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}