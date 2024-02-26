#include <stdio.h>

int main() 
{
	char op, cont = 'Y';
	int a, b;
	printf("****************Welcome to Narendra's Arithmetic Calculator***************");
	printf("\nEnter the first number: ");
	scanf("%d", &a);
	start:
		printf("\nEnter the other number: ");
		scanf("%d", &b);
			fgetc(stdin);
		printf("\n Menu of the operators\nEnter + for add:\nEnter - for sub:\nEnter * for mul:\nEnter / for div:\n");
		scanf("%c", &op);
		switch(op)
		 {
			case '+':
				a += b;
				break;
			case '-':
				a -= b;
				break;
			case '*':
				a *= b;
				break;
			case '/':
				if (b == 0)  
                {  
                    printf (" \n Divisor cannot be zero. Please enter another value ");  
                    scanf ("%d", &b); 
					a /= b;
				break;       
                }
				else{
					a /= b;
				break;
				}  }
		printf("Result is: %d\n ", a);
		printf("Do you want to continue\nPress Y for yes and N for no? \n");
		fgetc(stdin);
		scanf("%c", &cont);
		if(cont == 'Y'){goto start;} 
	return 0;
}