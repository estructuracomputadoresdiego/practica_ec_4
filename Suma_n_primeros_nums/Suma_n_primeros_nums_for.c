#include <stdio.h>

int main(int argc, char const *argv[])
{
	int Num, total;
	total=0;

	printf("Escribe cuantos números quieres sumar\n");

	scanf("%d",&Num);

	for (int i = Num; i >= 1 ; --i)
	{
		
		total = Num + total;
		Num--;

	}

	printf("%d\n", total);

	return 0;
}