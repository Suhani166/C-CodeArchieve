/*QUESTION:- Create a structure TIME containing hour,minutes and seconds as its member.
Write a program that uses this structure to input start time and stop time in main().
Pass this structure to a function that calculates the sum and
difference of start time and stop time. Display the sum and difference from main().*/

#include<stdio.h>
struct time{
    int hours;
    int minutes;
    int seconds;
};

struct time add(struct time a, struct time b){
    struct time sum;
    sum.hours= a.hours+b.hours;
    sum.minutes= a.minutes+b.minutes;
    sum.seconds= a.seconds+b.seconds;
    if(sum.seconds >= 60){
        sum.minutes++;
        sum.seconds -= 60;
    }
    if(sum.minutes >= 60){
        sum.hours ++;
        sum.minutes -= 60;
    }
    return sum;
}
struct time subtract(struct time a,struct time b)
{
    struct time diff;
    if(a.seconds > b.seconds){
        b.seconds += 60;
        --b.minutes;
    }
    if(a.minutes > b.minutes)
    {
        b.minutes += 60;
        --b.hours;
    }
    diff.hours= b.hours-a.hours;
    diff.minutes= b.minutes-a.minutes;
    diff.seconds= b.seconds-a.seconds;
    return diff;
}

int main(){
    struct time startTime,stopTime,sum,diff;
    printf("Enter the hours, minutes, seconds of start time : \n");
    scanf("%d %d %d",&startTime.hours,&startTime.minutes,&startTime.seconds);
    printf("Enter the hours, minutes, seconds of stop time : \n");
    scanf("%d %d %d",&stopTime.hours,&stopTime.minutes,&stopTime.seconds);
    printf("\n");
    sum= add(startTime,stopTime);
    diff = subtract(startTime,stopTime);
    printf("\nThe sum of start time and stop time is : %d:%d:%d\n",sum.hours,sum.minutes,sum.seconds);
    printf("\nThe difference of start time and stop time is : %d:%d:%d \n",diff.hours,diff.minutes,diff.seconds);
    return 0;
  
}
