#include<stdio.h>
//Find ways in which 2 knights dont attack each other in a kxk chessboard
int main()
{
    int n;
    printf("Enter the size of chessboard :\n");
    scanf("%d",&n);
    for(int k=1;k<=n;k++){
        int ways = (((k*k)*(k*k-1))/2)-(4*(k-1)*(k-2));
        printf("%d\n",ways);
    }
    return 0;
}