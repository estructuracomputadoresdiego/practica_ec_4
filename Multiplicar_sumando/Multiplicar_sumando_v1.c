
//Proyecto extra que mando Toño opcional que consiste en sumar n veces el numero dado

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num,repeticiones,total;

	reset: 

	num=repeticiones=total=0;

	printf("¿Que número quieres multiplicar?\n");

	scanf("%d",&num);

	printf("¿Porque número lo quieres multiplicar?\n");

	scanf("%d",&repeticiones);

	if (num>=0&&repeticiones>=0)
	{rm
		
		while(repeticiones>0){

			total=total+num;
			repeticiones--;
	
		}

		printf("El resultado es: %d\n",total );

	}


	else{

		printf("Necesito que ambos numeros sean positivos\n\n");

		goto reset;

	}


	return 0;
}