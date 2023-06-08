/*Question: Write a program in C to read records of n different students
in structure having member name, roll and marks, and display the
student detail obtaining highest marks.*/
#include<stdio.h>

struct student{
    char name[30];
    int roll;
    int marks;
};

int main(){
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    struct student s[n],temp;
    for(int i=0;i<n;i++){
        printf("\nEnter the name, roll number, marks of student %d : ",(i+1));
        scanf("%s %d %d",s[i].name,&s[i].roll,&s[i].marks);
    }
    int max=s[0].marks;
    temp=s[0];
    for(int i=0;i<n;i++){
        if(s[i].marks>max){
            max=s[i].marks;
            temp=s[i];
        }
    }
    printf("\n\nThe details of the student having highest marks are----: \n");
    printf("NAME: %s\nROLL NUMBER: %d\nMARKS: %d\n",temp.name,temp.roll,temp.marks);

    return 0;
}