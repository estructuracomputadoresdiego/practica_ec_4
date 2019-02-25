#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int base, exp, total, respuesta;

	inicio: //punto de partida en caso de que se desee realizar otra operación

	base = exp = 0;
	total=1;

	printf("Dime la base de la potencia:\n");
	scanf("%d" ,&base);
	printf("Dime el exponente al que elvear la base:\n");
	scanf("%d" ,&exp);
	
	if (exp>=0)
	{

		if (base==0)//Respuesta en el caso partiular de que la base sea 0
		{
			printf("El resultado es : 0\n");
		}

		if (exp==0)//Respuesta en el caso partiular de que el exponente sea 0
		{
			printf("El resultado es : 1\n\n");
		}

		else{

			while(exp>0){
			total=total*base;	
			exp--;			
			}
		printf("El resultado es : %d\n\n" ,total);
		}	
	}

	else{
		
		printf("Necesito un exponte positivo\n\n");
		goto inicio;		
		}


	//Bucle que se asegura que la respuesta sea 1 o 2

	do{
	printf("¿Quieres realizar otra operación?\n\n 1: Si\n 2: No\n\n");

	scanf("%d",&respuesta);
	}while(respuesta!=1&&respuesta!=2);

	switch(respuesta){

		case 1: goto inicio; 
		case 2: printf("Que tengas un buen dia :D\n");

	}


	return 0;
}