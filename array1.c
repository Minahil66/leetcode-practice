#include<stdio.h>
int main() {
    int quant, count=0;
    float average, sum=0;
    printf("Enter the quantity of elements: ");
    scanf("%d", &quant);

    int nums[quant];

    printf("Enter numbers: ");
    for(int i=0;i<quant;i++){
    printf("\nNumber %d: ", i+1);
    scanf("%d", &nums[i]);
    if(nums[i]>=0){
    sum+=nums[i];
    count+=1;
    }
    }
    if(count>0){
    average=sum/count;
    printf("Results:\nSum of all positive numbers: %.1f\nCount of all postitive numbers: %d\nAverage: %.1f", sum, count, average);
    }
    else{
    printf("No positive numbers");
    }
}