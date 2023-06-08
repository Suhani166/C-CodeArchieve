#include <stdio.h>
//Printing perfect numbers in a range
/*A perfect number is a positive integer that is equal to the sum of its positive divisors,
excluding the number itself. For instance, 6 has divisors 1, 2 and 3 (excluding itself), 
and 1 + 2 + 3 = 6, so 6 is a perfect number.*/

int isPerfect(int num); //function declaration
void printPerfect(int start, int end);
int main()
{
    int start, end;
    printf("Enter lower limit to print perfect numbers: ");
    scanf("%d", &start);
    printf("Enter upper limit to print perfect numbers: ");
    scanf("%d", &end);
    
    printf("All perfect numbers between %d to %d are: \n", start, end);
    printPerfect(start, end);
    
    return 0;
}
int isPerfect(int num)
{
    int sum = 0;
    for(int i=1; i<num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }
    if(sum == num)
    return 1;
    else
    return 0;
}

void printPerfect(int start, int end)
{
    while(start <= end)
    {
        if(isPerfect(start))
        {
            printf("%d ", start);
        }
        
        start++;
    }   
}