
//Proyecto extra que mando Toño opcional que consiste en sumar n veces el numero dado

#include <stdio.h>

int main(int argc, char const *argv[])
{
		int num,repeticiones,total;

	num=repeticiones=total=0;

	//bucle que fuerza a que los numeros sean positivos

	do{

		printf("¿Que número quieres multiplicar?\n");

		scanf("%d",&num);

		printf("¿Porque número lo quieres multiplicar?\n");

		scanf("%d",&repeticiones);

		if (repeticiones<0)
		{
			printf("Necesito que el segundo numero sea positivo\n\n");
		}
	}while(repeticiones<0);

	for (int i = repeticiones; i > 0 ; --i)
	{
		
		total=total+num;

	}

		printf("El resultado es: %d\n",total );



	return 0;
}