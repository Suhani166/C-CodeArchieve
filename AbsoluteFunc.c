#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
double interval,value;
int i;
for(i = 0; i <30; i++)
{
 interval = i/10.0;
 value= fabs(sin(interval));
 printf("sin( %lf ) = %lf \t", interval,value);
}
printf("\n+++++++\n");
return 0;
}