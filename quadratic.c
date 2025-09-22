#include<stdio.h>
#include<math.h>
int main() {
	int a,b,c;
	float r1,r2, realpart, imaginpart, discriminant;
	printf("SOLVING QUADRATIC EQUATIONS\n");
	printf("Enter the value of a, b and c:\n");
	scanf("%d%d%d", &a,&b,&c); 
	discriminant=pow(b,2)-(4*a*c);
	
	if (a==0) {
		printf("Error! a cannot be 0\n");
		return 1;
	}
	
	else if (discriminant<0) {
		printf("Discriminant is negative: %.2f, hence roots are complex:\n\n", discriminant);
		realpart=-b/(2*a);
		imaginpart=sqrt(discriminant)/(2*a);
		printf("Root 1: %.2f + %.2fi\n", realpart, imaginpart);
		printf("Root 2: %.2f - %.2fi", realpart,imaginpart);
		}
		else {
			r1=(-b+sqrt(discriminant))/(2*a);
			r2=(-b-sqrt(discriminant))/(2*a);
			printf("Root 1: %.2f\n", r1);
			printf("Root 2: %.2f", r2);
		}
}