#include <stdio.h>

int main(int argc, char const *argv[])
{
	int base, exp, total;

	base = exp = 0;
	total=1;

	printf("Dime la base de la potencia:\n");
	scanf("%d" ,&base);
	printf("Dime el exponente al que elvear la base:\n");
	scanf("%d" ,&exp);

	do{

		total=total*base;
		exp--;

	}while(exp>0);

	printf("El resultado es : %d\n" ,total);

	return 0;
}