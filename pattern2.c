#include<stdio.h>
//A
//B B
//C C C
int main()
{
    int i,j;
    char input,aph='A';
    scanf("%c",&input);
    for (i=1;i<=(input-'A'+1);++i){
        for (j=1;j<=i;++j){
            printf("%c ",aph);
        }
        ++aph;
        printf("\n");
    }
    return 0;
}