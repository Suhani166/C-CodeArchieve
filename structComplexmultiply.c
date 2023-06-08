#include<stdio.h>
//Multiplication of 2 complex numbers using user defined function.
//To multiply two complex numbers a + ib and c + id, we perform (ac - bd) + i (ad+bc)

struct complex{
    float real;
    float img;
};

struct complex multiply(struct complex a, struct complex b){
    struct complex product;
    product.real= (a.real*b.real)-(a.img*b.img);
    product.img = (a.real*b.img)+(b.real*a.img);
    return product;
}
int main(){
    struct complex cnum1,cnum2,prod;
    printf("Enter the real and imaginary part of first complex number : \n");
    scanf("%f %f",&cnum1.real,&cnum1.img);
    printf("Enter the real and imaginary part of second complex number : \n");
    scanf("%f %f",&cnum2.real,&cnum2.img);

    prod= multiply(cnum1,cnum2);
    printf("The product of the 2 complex numbers is : %.2f + %.2f i",prod.real,prod.img);
    return 0;
}