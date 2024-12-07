#include <stdio.h>

void pattern1(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int k = 0; k < (n - i); k++)
        {
            printf(" ");
        }

        for(int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }    
}


void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("%d", j);
        }

        for (int k = 1; k <= i - 1; k++)
        {
            printf("%d", k);
        }

        printf("\n");
    }
}

int main()
{

    printf(" Which pattern do you want?\n\t1.)    1\t\t2.) 12345\n\t      21\t\t    23451\n\t     321\t\t    34512\n\t    4321\t\t    45123\n\t   54321\t\t    51234\n\n ");

    int choice;
    printf("Enter your choice (1 or 2) : ");
    scanf("%d", &choice);

    int n;
    printf("\nEnter a positive number : ");
    scanf("%d", &n);

    if(choice == 1)
        pattern1(n) ;

    else if(choice == 2)
        pattern2(n) ;

    else  
        printf("Invalid choice!!");
    
    return 0;
}