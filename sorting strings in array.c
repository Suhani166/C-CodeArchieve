//sorting strings in array
//WRONG
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][10],temp[10];
    int n;
    printf("Enter the number of names/strings to be filled in the array : ");
    scanf("%d",&n);
    printf("\nEnter the names in array\n");
    for(int i=0;i<10;i++){
        for(int j=0;j<n;j++){
        scanf("%s",&str[i][j]);
        }
    }
    //sorting
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(str[i],str[j])>0){ 
                //comparing the 2 strings
                //if the values is +ve it means str[j] will come first
                strcpy(temp,str[i]); 
                strcpy(str[i],str[j]);
                strcpy(str[j],str[i]);
            }
        }
    }
    //printing
    printf("The Sorted array is :\n");
    for(int i=0;i<strlen(str[i]);i++){
        for(int j=0;j<n;j++){
        printf("%s\n",str[i]);
        }
    }

    return 0;
}