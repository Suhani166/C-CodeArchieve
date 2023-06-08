//Binary Search
//Array should be sorted!
#include<stdio.h>
int main()
{
    int first,last,mid,key,flag=0;
    key=99;
    int arr[]={45,77,89,90,94,99,100}; //Array decleration
    first = 0;
    last = 6;   //index of last element= n-1 where n is number of elements 
    //Searching till first<=last
    while(first<=last){
        mid= (first+last)/2;
        if(arr[mid]==key){
            flag=1;
            printf("%d found at location %d\n",key,mid);
        }
        if(arr[mid]<key){
            first=mid+1;
        }
        else{
            last=mid-1;
        }
    }
    if(flag==0)
    printf("Not found! %d isn't present in the list.\n", key);

    return 0;
}