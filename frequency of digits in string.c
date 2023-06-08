#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max 1000
//counting frequency of 0-9 digits in string
//input - a11472o5t6
//output- 0 2 1 0 1 1 1 1 0 0 //0 occurs 0 times 1 occurs 2 times and so on..
int main() {
    char num[max];
    fgets(num,max,stdin);
    int l= strlen(num);
    int i=0,count=0;
    char r ='0';
    for(int j=0;j<10;j++){
        count=0;
        for(int i=0;i<l;i++){
            if(num[i]==r){
                count++;
            }
        }
        printf("%d ",count);
        r++;
    } 
    return 0;
}
