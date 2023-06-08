#include <stdio.h>
//    *
//   **
//  ***
// ****
int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
    for(int i=1;i<=n;i++){
		for(int j=i;j<n;j++){ //iterates from i to n-1 to trail the spaces
			printf(" ");
		}
		for(int k=1;k<=i;k++){ // iterates from 1 to i to print stars
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

