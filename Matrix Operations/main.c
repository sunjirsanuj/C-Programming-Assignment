#include<stdio.h>

int main(){
    int a[10][10];
    int b[10][10];
    int c[10][10];
    int d[10][10];
    int row, col;

    printf("Enter the row numbers of both matrices: ");
    scanf("%d",&row);
    printf("Enter the colum numbers of both matrices: ");
    scanf("%d",&col);

    printf("\n");
    printf("Enter the elements of matrix A\n");
    printf("\n");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            printf("Enter the element at [%d%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements of matrix B\n");
    printf("\n");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            printf("Enter the element at [%d%d]: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++) c[i][j] = a[i][j] + b[i][j];
    }
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++) d[i][j] = a[i][j] - b[i][j];
    }

    printf("\nTne addition of A and B\n\t\t");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++) printf(" %d ",c[i][j]);
        printf("\n\t\t");
    }

    printf("\nTne subtraction of A and B\n\t\t");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++) printf(" %d ",d[i][j]);
        printf("\n\t\t");
    }

}
