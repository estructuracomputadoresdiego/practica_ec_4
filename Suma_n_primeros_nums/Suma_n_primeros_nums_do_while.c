#include <stdio.h>

int main(int argc, char const *argv[])
{
	int Num, total;
	total=0;

	printf("Escribe cuantos números quieres sumar\n");

	scanf("%d",&Num);

	do{

		total = Num + total;
		Num--;

	}while(Num>=1);

	printf("%d\n",total );

	return 0;
}