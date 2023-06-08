#include<stdio.h>
#include<stdlib.h>
int SpiralValue(int r, int c){
	int MAX,MIN;
	if(r>c){
		MAX=r;
		MIN=c;
	}
	else{
		MAX=c; MIN=r;
	}
	if((MAX%2==0) && (MAX==r)){ //even and row
		return ((MAX*MAX)-MIN+1); //Subtractive
	}
	else if((MAX%2==1) && (MAX==r)){ //odd and row
		return (((MAX-1)*(MAX-1))+1+MIN-1); //Additive
	}
	else if((MAX%2==0) && (MAX==c)){ //even and column
        return (((MAX-1)*(MAX-1))+1+MIN-1);
	}
	else if((MAX%2==1) && (MAX==c)){ //odd and column
		return ((MAX*MAX)-MIN+1);
	}
	else{
		return -1;
	}
}
int main()
{
	int n,row,col;
	printf("Enter the size of matrix\n");
	scanf("%d",&n);
	int arr[n][n];
	printf("Enter values in matrix :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Enter the row and column of the element to be printed:\n");
	scanf("%d %d",&row,&col);
	printf("The element is : %d\n", SpiralValue(row,col));
	
	return 0;
}