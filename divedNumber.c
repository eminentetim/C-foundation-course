#include <stdio.h>

int main()

{

float a, b, result;

	printf("Enter first number:");
	scanf("%f", &a);

	  printf("Enter second  number:");

	  scanf("%f", &b);
	
	if (b!=0){
	result =a/b;
	  printf("The answer is =%f\n", a/b);
	}
	else
	printf("Don't divide with 0 guy\n");
}
