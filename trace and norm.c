//trace and norm
//trace is sum of principal diagonal elements of a square matrix
//norm is sqrt of sum of squares of all elements
#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    printf("Enter the size of array\n");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    int trace=0,sum=0;
    printf("Enter elements in the matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            sum+=(arr[i][j]*arr[i][j]);
        }
    }
    if(m!=n){
        printf("Trace cannot be calculated as it is not a square matrix.\n");
    }
    else{
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    trace+=arr[i][j];
                }
            }
        }
    }
    printf("Norm : %lf\n",sqrt(sum));
    printf("Trace : %d\n",trace);

    return 0;
}