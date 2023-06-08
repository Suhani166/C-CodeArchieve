#include<stdio.h>
int main(){
    int choice;
    float val, answer;
    printf("press 1 to convert kms to miles\n");
    printf("press 2 to convert inches to feet\n");
    printf("press 3 to convert cms to inches\n");
    printf("press 4 to convert pound to kgs\n");
    printf("press 5 to convert inches to meters\n\n");
    printf("Enter your choice\n");
    scanf("%d", &choice);
    
    if(choice == 1){
        printf("Enter the value to be converted\n");
        scanf("%f", &val);
        answer= val * 0.621371;
        printf("%f kms is equal to %f miles", val,answer);
    }
    else if(choice == 2){
        printf("Enter the value to be converted\n");
        scanf("%f", &val);
        answer= val * 0.08333;
        printf("%f inches is equal to %f feet", val,answer);
    }
    else if(choice == 3){
        printf("Enter the value to be converted\n");
        scanf("%f", &val);
        answer= val * 0.393701;
        printf("%f cms is equal to %f inches", val,answer);
    }
    else if(choice == 4){
        printf("Enter the value to be converted\n");
        scanf("%f", &val);
        answer= val * 0.453592;
        printf("%f pounds is equal to %f kgs", val,answer);
    }
    else if(choice == 5){
        printf("Enter the value to be converted\n");
        scanf("%f", &val);
        answer= val * 0.0254;
        printf("%f inches is equal to %f kms", val,answer);
    }
    else
    printf("Wrong Input!Try again.\n");
    return 0;
}