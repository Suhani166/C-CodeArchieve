#include<stdio.h>
struct complex{
    float real;
    float img;
};
int main(){
    struct complex cnum1, cnum2,sum;
    printf("Enter the real and imaginary part of first complex number : \n");
    scanf("%f %f",&cnum1.real,&cnum1.img);
    printf("Enter the real and imaginary part of second complex number : \n");
    scanf("%f %f",&cnum2.real,&cnum2.img);
    sum.real= cnum1.real+cnum2.real;
    sum.img= cnum1.img+cnum2.img;
    printf("The sum of the 2 complex numbers is : %.2f + %.2f i",sum.real,sum.img);
    return 0;
}