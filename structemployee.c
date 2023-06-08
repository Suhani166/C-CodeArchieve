/*Question: write a program in C to read name, salary and age of n
different employees as the three members of a structure named ‘employee’.
Display the name, salary and corresponding age of the employees sorted
on the basis of name in alphabetical order.*/

#include<stdio.h>
#include<string.h>
typedef struct{
    char name[30];
    int salary;
    int age;
}employee;

int main(){
    int n;
    printf("Enter the number of employees \n");
    scanf("%d",&n);
    employee e[n],temp;
    for(int i=0;i<n;i++){
        printf("Enter the Name, Salary, Age of employee %d: ",(i+1));
        scanf("%s %d %d",e[i].name,&e[i].salary,&e[i].age);
    }

    for(int i=0;i<n-1;i++){ //sorting according to alphabetical order of employee names
        for(int j=i+1;j<n;j++){
            if(strcmp(e[i].name,e[j].name)>0){
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
    printf("/nThe details of the employees are----: \n");
    for(int i=0;i<n;i++){
        printf("\nNAME: %s\nSALARY: %d\nAGE: %d\n",e[i].name,e[i].salary,e[i].age);
    }
    return 0;

}