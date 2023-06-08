#include<stdio.h>

//Multiplication of 2 numbers
int mul(int a,int b){
    if(b==1){
        return a;
    }
    else{
        return(a*(b-1)+a);
    }
}
//Factorial of a number
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
//Fibonacci number
int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
//Binary search through recursion
int binSearch(int key,int a[],int low,int high){
    int mid;
    if(low>high){
        return -1;
    }
    mid=(low+high)/2;
    if(key==a[mid]){
        return mid;
    }
    else if(key<a[mid]){
        high=mid-1;
        return binSearch(key,a,low,high);
    }
    else{
        low=mid+1;
        return binSearch(key,a,low,high);
    }
}
//Length of String using Recursion
int Strlen(char str[], int index){
    if(str[index]=='\0'){
        return 0;
    }
    else{
        return (1+Strlen(str,index+1));
    }
}
//Length of String using static variable Recursion
int StrlenSt(char *str){
    static int length=0;
    if(*str!='\0'){
        length++;
        StrlenSt(++str);
    }
    return length;
}
int isPali(char *input,int left,int right){
    if(left>=right){
        return 1;
    }
    if(input[left]==input[right]){
        return isPali(input,left+1,right-1);
    }
    return 0;
}
char copy(char str1[],char str2[],int index){
    str2[index]=str1[index];
    if(str1[index]=='\0'){
        return str2;
    }
   return copy(str1,str2,index+1);
}
int main()
{
    int a=10,b=9;
    printf("Product of %d and %d: %d\n",a,b,mul(a,b));
    int c=5;
    printf("Factorial of %d is: %d\n",c,fact(c));
    printf("Fibonacci: %d\n",fibo(c));
    int arr[5]={34,45,67,78,90};
    int key=78;
    printf("Element found at %d position\n",binSearch(key,arr,0,4));
    printf("Length of the word WEDNESDAY is: %d\n",Strlen("WEDNESDAY",0));
    printf("Length of the word WEDNESDAY using static is: %d\n",StrlenSt("WEDNESDAY"));
    printf("Madam is a Palindrome: %d\n",isPali("madam",0,4));
    char str1[4],str2[4];
    str1[4]="Today";
    printf("Str2: %s\n",copy(str1,str2,0));
    return 0;
}