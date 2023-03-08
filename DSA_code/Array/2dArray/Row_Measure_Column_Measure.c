#include<stdio.h>
int row_measure(int BA,int m, int n, int I, int J){
    printf("Row Measure: \n");
    int elem_add,elem_add1;
    elem_add = BA + (((I * n) + J)*sizeof(int));
    elem_add1 = BA + ((n * (I-1))+(J-1));
    printf("The Address of the element is(Actual Method): %d\n",elem_add);
    printf("The Address of the element is (College Method): %d\n",elem_add1);
}
int column_measure(int BA,int m,int n, int I, int J){
    printf("Column Measure: \n");
    int elem_add, elem_add1;
    elem_add = BA + (((J*m)+I)*sizeof(int));
    elem_add1 = BA +(m*(J-1))+(I-1);
    printf("The Address of the element is(Actual Method): %d\n",elem_add);
    printf("The Address of the element is (College Method): %d\n",elem_add1);
}
int main(){
    int BA, I, J,m, n, s;;
    printf("Enter the base Address: ");
    scanf("%d",&BA);
    printf("Enter the order of the matrix: ");
    scanf("%d %d",&m,&n);
    printf("Enter the index of the address: ");
    scanf("%d %d",&I,&J);
    printf("---------------------------------\n");
    printf("Press 1 to select Row Measure. \n");
    printf("Press 2 to select Column Measure. \n");
    printf("Select one to continue: ");
    scanf("%d",&s);

    switch(s){
        case 1: row_measure(BA,m,n,I,J);
         break;
        case 2: column_measure(BA,m,n,I,J);
         break;
        default: printf("Invalid Option");
         break;
    }
    return 0;
}