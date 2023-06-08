#include <stdio.h>
/*INPUT            OUTPUT
6                    0
3                    14
60                   24
100                  253
1024                 5861
23456                2183837   
87353738*/
//Count number of trailing zeroes in factorial of a number
//approach: factors of 5 in a number will decide the number of trailing zeroes

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int zeroes=0;
	    int c=5;
	    while((n/c)>0){
	        zeroes=zeroes+(n/c);
	        c=c*5;
	    }
	    printf("%d\n",zeroes);
	}
	return 0;
}

