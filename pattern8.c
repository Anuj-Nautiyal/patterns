#include <stdio.h>

int main(){

    printf("Enter an odd number: ");
    int n;
    scanf("%d", &n);

    int condition = 0;
    int space = n/2 + 1;
    for(int i=1; i <= n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i>1 && i<n && j>=space && j<=n-space+1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }

        }
        printf("\n");
        if(i>1 && i<= n/2+1) space -= 1;
        else if(i>n/2+1 && i<n) space += 1;
        if(space == 1) space +=2;
    }
printf("");
scanf("%","");
}