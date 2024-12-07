#include <stdio.h>

int main()
{
    int n; 
    printf("Enter a positive number : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\t");

        for (int j = 0; j < 2 * n - 1; j++)
        {  
            if (n-i <= j && j <= n + i - 2)
            {
                printf("   ");
            }
            else
            {
                printf("%c  ", j < n ? 'A' + j : 'A' + n + n - j - 2);
            }
        }
        printf("\n");
    }
     return 0;
}
