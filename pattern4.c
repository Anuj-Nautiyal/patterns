#include <stdio.h> 

int main()
{
    int n;
    printf("Enter a positive number : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == i)
                printf("\\");

            else if(j == (n - i) -1)
                printf("/");

            else 
                printf("*");
        }

        printf("\n");

    }

    return 0;
}