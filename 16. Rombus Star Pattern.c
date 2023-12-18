#include <stdio.h>
int main() {
   int n;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
   for (int i=n; i>= 1; i--)
    {
      for (int space = 1;space<=i-1; space++)
      {
        printf(" ");
      }
      for(int j=1;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

   return 0;
}

