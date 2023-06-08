#include <stdio.h>   
#include<math.h>
//including math header file to use the sine function
int main(void) {
    double x,sinvalue;
    printf("Enter the value whose sin value is to be calculated\n");
    scanf("%lf",&x); //getting the input from user
    //calculatng sin value using the function 
    sinvalue= sin(x);
    printf("The sine value of %lf is: %lf\n",x, sinvalue);
    return 0;
 }  