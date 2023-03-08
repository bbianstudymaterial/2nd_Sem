#include<stdio.h>
#include<stdlib.h>

int main(){
    int *B[3];
    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));
    printf("Enter your Values: ");

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
         scanf("%d",&B[i][j]);
    }
    printf("\n\n");


    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
         printf("%d ",B[i][j]);
        printf("\n");
    }
    free(*B);
    return 0;
}