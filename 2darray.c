#include<stdio.h>
int main(){

    int row;
    printf("Enter your row size:");
    scanf("%d",&row);

     int column;
    printf("Enter your column size:");
    scanf("%d",&column);

    int arr[row][column];

    printf("Enter your Elements:\n");

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("Elemenst are [%d] [%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            // printf("Elemenst are [%d] [%d]:",i,j);
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}