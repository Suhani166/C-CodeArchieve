#include<stdio.h>
#include<stdlib.h>
int main()
{
    int rowNum,colNum,i,j;
    int **table;
    printf("Enter number of rows: ");
    scanf("%d",&rowNum);
    table= (int**)calloc(rowNum+1,sizeof(int*));
    
    for(i=0;i<rowNum;i++){
        printf("\nEnter number of columns in row %d: ",i+1);
        scanf("%d",&colNum);
        table[i]=(int*)calloc(colNum+1,sizeof(int));
        printf("\nEnter the row elements\n");
        for(j=1;j<=colNum;j++){
            scanf("%d",&table[i][j]);
        }
        table[i][0]=colNum;
        printf("Size of row number [%d]= %d\n",i+1,table[i][0]);
    }
       // table[i]=NULL;
        for(i=0;i<rowNum;i++){
            printf("Displaying %d row elements \n",i+1);
            for(j=1;j<=*table[i];j++){
                printf("%d\t",table[i][j]);
            }
            printf("\n");
        }
    
    return 0;
}