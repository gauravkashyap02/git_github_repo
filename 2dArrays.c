#include<stdio.h>
int main(){

    // int row;
    // printf("Enter your row size:");
    // scanf("%d",&row);

    // int column;
    // printf("Enter your column size:");
    // scanf("%d",&column);

    int arr[2][3]={
                  {1,2,3},
                  {4,5,6}
    };


    printf("Enter your elements:\n");

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<column;j++){
    //         // printf("Index of [%d][%d]:",i,j);
    //         scanf("%d",&arr[i][j]);
    //     }
    // }

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            // printf("Index of [%d][%d]",i,j);
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}