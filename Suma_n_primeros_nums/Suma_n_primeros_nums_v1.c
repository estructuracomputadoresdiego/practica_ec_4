#include <stdio.h>	

int main(int argc, char const *argv[])
{	
	int Num, total;
	
	inicio:

	total=0;

	printf("Escribe cuantos números quieres sumar\n");

	scanf("%d",&Num);

	if (Num >= 1)
	{
		while(Num >= 1){

			total = total + Num;
			Num--;
			
		}
		printf("%d\n", total);
	}

	else{

		printf("Necesito un número mayor que 1\n");
		goto inicio;

	}

	

	return 0;
}