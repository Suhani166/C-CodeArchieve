#include<stdio.h>
/*
Enter number of rows : 5

        * 
      *   * 
    *       * 
  *           * 
*               * 
  *           * 
    *       * 
      *   * 
        * 
*/
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    printf("\n");
    //upper part of diamond
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){ //printing spaces
            printf("  ");
        }
        for(int k=1;k<= (2*i-1);k++){
            if(k==1 || k==(2*i-1))
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    //lower part
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int k=1;k<= (2*i-1);k++){
            if(k==1 || k==(2*i-1))
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}