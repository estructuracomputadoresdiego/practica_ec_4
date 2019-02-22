
//Proyecto extra que mando Toño opcional que consiste en sumar n veces el numero dado

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num,repeticiones,total;

	num=repeticiones=total=0;

	//bucle que fuerza a que los numeros sean positivos

	while(num<=0||repeticiones<=0){

		printf("¿Que número quieres multiplicar?\n");

		scanf("%d",&num);

		printf("¿Porque número lo quieres multiplicar?\n");

		scanf("%d",&repeticiones);

		if (num<0||repeticiones<0)
		{
			printf("Necesito que ambos numeros sean positivos\n\n");
		}
	}

	do{
		total=total+num;

		repeticiones--;

	}while(num>0&&repeticiones>0);

		if (num<0||repeticiones<0)
		{
			printf("El resultado es 0\n");
		}
	printf("El resultado es: %d\n",total );


	return 0;
}