#include<stdio.h>
/* 1 
  1 2 
 1 2 3 
1 2 3 4 */
int main()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}