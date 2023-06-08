#include <stdio.h>
int countdigit(int n){
    static int count=0;
    if(n!=0){
        count++;
        countdigit(n/10);
    }
    return count;
}
int main(void){
    int n=1234;
    printf("%d",countdigit(n));
    return 0;
}
