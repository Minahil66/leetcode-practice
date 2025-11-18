// // #include<stdio.h>
// // int main() {
// // int m,n;
// // printf("Enter the number of rows: ");
// // scanf("%d", &m);
// // printf("Enter the number of columns: ");
// // scanf("%d", &n);
// // int matrix[m][n];
// // int max_element, current=0;
// // for(int i=0;i<m;i++){
// // for(int j=0;j<n;j++){
// // printf("a[%d][%d]: ",i+1,j+1);
// // scanf("%d", &matrix[i][j]);
// // if(matrix[i][j]>current){
// // current=matrix[i][j];
// // }
// // }
// // }
// // printf("The max element of the given matrix: %d\n", current);
// // for(int i=0;i<m;i++){
// // for(int j=0;j<n;j++){
// // printf(" %d ",matrix[i][j]);
// // }
// // printf("\n");
// // }
// // }
// #include<stdio.h>
// struct employee{
//     int id;
//     char name[20];
//     int salary;
// };
// int main() {
//     struct employee emp[3];
//     for(int i=0;i<3;i++){
//         printf("Employee %d ID: ", i+1);
//         scanf("%d", &emp[i].id);
//         getchar();
//         printf("Employee %d name: ", i+1);
//         fgets(emp[i].name, 20,stdin);
//         printf("Employee %d salary: ", i+1);
//         scanf("%d", &emp[i].salary);
//         printf("\n");
//     }
//     printf("EMPLOYEE INFORMATION:\n\n");
//     for(int i=0;i<3;i++){
//         printf("Employee %d ID: %d\n", i+1, emp[i].id);
//         printf("Employee %d name: %s", i+1, emp[i].name);
//         printf("Employee %d salary: %d\n", i+1, emp[i].salary);
//         printf("\n");
//     }
// }
#include<stdio.h>
struct student{
    char name[20];
    int roll;
    int marks[3];
};
int main(){
    struct student s[5];
    float sum;
    int best_student;
    float ave[5], best_ave=0;
    for(int i=0;i<5;i++){
        printf("Student %d name: ", i+1);
        fgets(s[i].name, 20,stdin);
        printf("Student %d roll number: ", i+1);
        scanf("%d", &s[i].roll);
        sum=0;
    for(int j=0;j<3;j++){
        printf("Marks of subject %d: ", j+1);
        scanf("%d", &s[i].marks[j]);
        sum+=s[i].marks[j];
    }
    ave[i]=sum/3.0;
    printf("AVERAGE OF STUDENT %d is: %.1f\n", i+1, ave[i]);
    if(best_ave<ave[i]){
        best_ave=ave[i];
        best_student=i+1;
    }
    getchar();
    }
    
    printf("\nHighest Average Achiever: STUDENT %d\naAVERAGE: %.1f", best_student, best_ave);
}

