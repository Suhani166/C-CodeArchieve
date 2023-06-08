#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of matrix\n");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the elements in the matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original Matrix :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    int pd=0,sd=0,flag=0;
    for(int i=0;i<n;i++){
        pd+=arr[i][i]; //calculating sum of principal diagonal
        sd+=arr[i][n-i-1]; //sum of secondary diagonal
        
    }
    if(pd!=sd){
        printf("Not a magic square matrix\n");
        exit(0);
    }
    
    for(int i=0;i<n;i++){
        int rowsum=0,colsum=0;
        for(int j=0;j<n;j++){
            rowsum+=arr[i][j];
            colsum+=arr[j][i];
        }
        if(rowsum!=colsum || colsum!= pd){
            flag=1;
            break;
        }
        else{
           flag=0;
        }
    }
    if(flag==1){
        printf("Not a magic square matrix\n");
    }
    else{
        printf("Magic square matrix!\n");
    }
    return 0;
}

