#include<stdio.h>
int main() {
    int m,n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    int matrix[m][n];
    int count=0;
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    printf("element of row %d and column %d: ", i+1,j+1);
    scanf("%d", &matrix[i][j]);
    if(matrix[i][j]==0){
    count+=1;
    }
    }
    }
    if (count>((m*n)/2)){
        printf("Matrix is sparse");
    }
    else{
        printf("matrix is not sparse");
    }

}