#include <stdio.h> 

int main()
{
    int n;
    printf("Enter a positive number : ");
    scanf("%d", &n);

    int temp = n;
    for(int i = 0; i < n; i++)
    {
        printf("%d ", temp);
        temp-- ;

        for(int j = 0; j < n; j++)
        {
            if(i % 2 == 0)
                printf(j % 2 !=0 ? "  " : "%c%c", 219, 219);
            
            else
                printf(j % 2 ==0 ? "  " : "%c%c", 219, 219);
        }
        printf("\n");
    }
    
    if(n !=0)
        printf("  A ");

    for(char i = 1; i < n; i++)
    {
        printf("%c ",'A' + i);   
    }
    printf("\n");

    return 0;
}