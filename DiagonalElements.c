#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the size of array\n");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    printf("Enter the values in array\n");
    for(int i=0;i<m;i++){  
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    if(m!=n){ //matric should be a square one to print diagonal elements
        printf("It is not a square matrix\n");
    }
    else{
    //Printing the diagonal elements
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==j || (i+j)==(n-1)){ 
                    printf("%d\t",arr[i][j]);
                }
                else{
                    printf("\t");
                }
            }
            printf("\n");
        }
    }
    return 0;
}