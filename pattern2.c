#include <stdio.h>
#include <ctype.h>

void Vertical_diamond(int n);
void Horizontal_diamond(int n);
void Solid_diamond(int n);
void Hollow_diamond(int n);

int main()
{
    printf("\n\t\t WHAT DO YOU WANT ?\n\t1.) Half Diamond \t2.) Full Diamond\n");

    int choice_1;
    printf("Enter your choice (1 or 2) : ");
    scanf("%d", &choice_1);

    if (choice_1 != 1 && choice_1 != 2)
    {
        printf("Please enter a valid choice.\n");
    }

    else
    {
        printf((choice_1 == 1) ? "\n\t\tWHICH KIND OF HALF DIAMOND DO YOU WANT ?\n\tA.) Vertical Half Diamond \tB.) Horizontal half diamond\n" : "\n\t WHICH KIND OF FULL DIAMOND DO YOU WANT ?\n\tA.) Solid Diamond \tB.) Hollow Diamond\n");

        int choice_2;
        printf("Enter your choice (A or B) : ");
        getchar();
        scanf("%c", &choice_2);
        choice_2 = toupper(choice_2);

        if (choice_2 != 'A' && choice_2 != 'B')
        {
            printf("Please enter a valid choice.\n");
        }
        else
        {
            int n;
            printf("\nEnter a positive number : ");
            scanf("%d", &n);

            if (choice_1 == 1 && choice_2 == 'A')
                Vertical_diamond(n);

            else if (choice_1 == 1 && choice_2 == 'B')
                Horizontal_diamond(n);

            else if (choice_1 == 2 && choice_2 == 'A')
                Solid_diamond(n);

            else
                Hollow_diamond(n);
        }
    }
    return 0;
}

void Vertical_diamond(int n)
{
    printf("Left sided\t Right sided\n");

    int odd = 1;

    for (int i = 1; i <= n; i++)
    {
        printf("%*c", n - i + 1, '*');

        odd += 2;
        for (int j = 1; j < odd; j++)
        {
            if (j == i)
                printf("\t\t  ");

            else
                printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= n - 1; i++)
    {
        printf("%*c", 1 + i, '*');

        odd -= 2;
        for (int j = 1; j < odd; j++)
        {
            if (j == n - i)
                printf("\t\t  ");

            else
                printf("*");
        }
        printf("\n");
    }
}

void Horizontal_diamond(int n)
{
    printf((n <= 5)? "\nUpward:-   Downward:-\n" : "\nUpward:-\t Downward:-\n");

    int odd = -2;

    for(int i = 1; i <= n; i++)
    {
        printf("%*c", n - i + 1, '*');

        odd += 2;
        for(int j = 0; j <= n * 2 - 1; j++)
        {
            if(j == odd)
            {
                printf("%10c", ' ');
            }

            else 
                printf("*");

        }
        printf("\n");
    }

}

void Solid_diamond(int n)
{
    printf("\nSolid Diamond:- \n");

    int odd = -2;
    for(int i = 0; i < n; i++)
    {
        printf("\t%*c", n - i , '*');

        odd += 2;
        for(int j = 1; j <= odd; j++)
        {
            printf("*");            
        }
        printf("\n");
    }

    for(int i = 1; i <= n - 1; i++)
    {
        printf("\t%*c", 1 + i , '*');

        odd -= 2;
        for(int j = 1; j <= odd; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void Hollow_diamond(int n)
{
    printf("\nHollow Diamond:- \n"); 

    printf("%*c\n", n, '*');

    for( int i = 1; i < n; i++)
    {
        printf("%*c%*c\n", n - i , '*', 2*i, '*');     
    }

    for(int j = n - 2; j >= 1; j--)
    {
        printf("%*c%*c\n", n - j, '*', 2*j , '*');     
    }
    printf("%*c\n", n, '*');
}
