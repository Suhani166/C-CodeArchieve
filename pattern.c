#include<stdio.h>
int main()
{
    printf("Enter 0 to print triangular pattern and 1 to print reverse triangular\n");
    int n,a;
    scanf("%d",&a);
    
    if(a==0){
        printf("Enter the number of rows to print the pattern\n");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        }
    }
    else if(a==1){
        printf("Enter the number of rows to print the pattern\n");
        scanf("%d",&n);
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                printf("*");
            }
            printf("\n");
        }
    }
    else
    printf("Wrong Input!Try Again");
    
    return 0;
}