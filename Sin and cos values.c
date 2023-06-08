#include<stdio.h>
#include<math.h>
int main()
{
    double interval;
    for(int i=0;i<10;i++){
        interval=i/10.0;
        printf("sin(%lf) : %lf\n",interval,sin(interval));
    }
    printf("\n");
    for(int i=0;i<10;i++){
        interval=i/10.0;
        printf("cos(%lf) : %lf\n",interval,cos(interval));
    }
    return 0;
}