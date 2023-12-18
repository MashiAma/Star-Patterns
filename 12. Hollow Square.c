#include <stdio.h>

int main(){

int n;

printf("Enter the Number of Rows :");
scanf("%d",&n);

    for(int i=1;i<=n+1;i++)
    {
        for(int j=1;j<=n;j++)
            {
                if(j==1||i==1||j==n||i==n+1)
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
