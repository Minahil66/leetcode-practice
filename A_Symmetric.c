#include<stdio.h>
int main(){
    int m,n, flag=1;
    printf("Matrix dimension: ");
    scanf("%d", &m);
    n=m;
    int matrix[m][n];
    int transpose[m][n];
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    printf("Row %d and Column %d: ", i+1,j+1);
    scanf("%d", &matrix[i][j]);
    }
    }
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    transpose[i][j]=matrix[j][i];
    }
    }
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    if( transpose[i][j]!=matrix[i][j]){
    flag=0;
    break;
    }
    }
    }
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    printf(" %d ", matrix[i][j]);
    }
    printf("\n");
    }
    if(flag==1){
    printf("Matrix is Symmetric");
    }
    else{
    printf("matrix is Asymmetric");
    }
    }