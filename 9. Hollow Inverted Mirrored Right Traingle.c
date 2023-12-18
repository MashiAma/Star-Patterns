#include <stdio.h>

int main(){

int n;

printf("Enter the Number of Rows :");
scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            {
                if(j==n||i==1||j==i)
                    {
                        printf("* ");
                    }
                else
                    {
                        printf("  ");
                    }
            }
            printf("\n");
    }


return 0;}

