#include<stdio.h>
#include<stdlib.h>

int main() {
    int **C;

    C=(int **)malloc(3*sizeof(int)); //Aray of Pointer Created in heap
    C[0]=(int *)malloc(4*sizeof(int));
    C[1]=(int *)malloc(4*sizeof(int));
    C[2]=(int *)malloc(4*sizeof(int));

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
         scanf("%d",&C[i][j]);
    }

    printf("\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
          printf("%d ",C[i][j]);
        printf("\n");
    }
    free(*C);

    return 0;
}