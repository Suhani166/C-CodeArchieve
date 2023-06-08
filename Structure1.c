#include <stdio.h>
struct employee
{
    char name[30];
    int roll;
    int marks;
}s[5];

int main()
{
     int i;
     printf("Space to Enter the details of 5 Empoyees :------ \n");
     for(i=0; i<5; i++){
     printf("Enter your Name : ");
     scanf("%s,", &s[i].name);
     printf("Enter your Roll number : ");
     scanf("%d", &s[i].roll);
     printf("Enter your Marks : ");
     scanf("%d", &s[i].marks);
     }
    printf("\n The details of Employees are :\n");
    for(i=0;i<5;i++){
    printf("%s\t %d\t %d ", s[i].name, s[i].roll, s[i].marks);
    printf("\n");
    }
    return 0;

}