#include<stdio.h>
int main() {
	int num, n;
	printf("Enter the number to check if it is divisible by 7: ");
	scanf("%d", &num);
	n=num; 
		if (n>=10 || n<=-10) 
		{n=(n/10)-2*(n%10);}
		
		if (n>=10 || n<=-10) 
		{n=(n/10)-2*(n%10);}
		
	    if (n>=10 || n<=-10) 
		{n=(n/10)-2*(n%10);}
		
		if (n>=10 || n<=-10) 
		{n=(n/10)-2*(n%10);}
		
		if (n==7 || n==-7 || n==0) {
		printf("number is divisible by 7");
	}
		else {
			printf("not divisible by 7");
		}
		return 0;
	}

	
 