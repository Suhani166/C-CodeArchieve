#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n,i,j;
    printf("Enter the size of arrays: \n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter values in the array : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Original Array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Rotate Matrix by 90 degrees Clockwise\n");
    for(i=0;i<m;i++)
    {
        for(j=(n-1);j>=0;j--)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}