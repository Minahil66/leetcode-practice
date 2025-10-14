//valid distribution
#include<stdio.h>
int main() {
    int x;
    __int16 b,c,a;
    scanf("%d", &x);
    if(3>x || x>100){
        return 1;
    }
    a=x/3;
    b=x-(a+2);
    c=2;
    printf("%d ", a);
    printf("%d ", b);
    printf("%d ", c);

}