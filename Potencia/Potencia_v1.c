#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int base, exp, total;

	reset: //punto de partida para el goto en caso de que exp<0

	base = exp = 0;
	total=1;

	printf("Dime la base de la potencia:\n");
	scanf("%d" ,&base);
	printf("Dime el exponente al que elvear la base:\n");
	scanf("%d" ,&exp);



	if (exp>=0&&base>0)
	{

		if (exp==0)
		{
			printf("El resultado es : 1\n");
		}

		else{

			while(exp>0){

			total=total*base;	
			exp--;			
			}
		printf("El resultado es : %d\n" ,total);

		}
	
		
	}


	else{
		printf("El exponente tiene que ser mayor que 0\n");
		goto reset;

	}


	return 0;
}