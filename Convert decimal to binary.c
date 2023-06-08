#include <stdio.h>
#include <math.h>
//converting decimal to binary
long decimalToBinary(int decimalnum)  //14
{
    long binarynum = 0;
    int rem, temp = 1;

    while (decimalnum!=0)
    {
        rem = decimalnum%2;  //0 1 1 1
        decimalnum = decimalnum / 2; //7 3 1 0
        binarynum = binarynum + rem*temp; //0 10 110 1110
        temp = temp * 10; //10 100 1000 10000
    }
    return binarynum; //1110
}

int main()
{
    int decimalnum;
    printf("Enter a Decimal Number: ");
    scanf("%d", &decimalnum);
    printf("Equivalent Binary Number is: %ld", decimalToBinary(decimalnum));
    return 0;
}