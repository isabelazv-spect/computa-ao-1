#include <stdio.h>

int main()
{
	int num1, num2, i = 0;

	printf("digite um numero: ");
	scanf("%d", &num1);

	for(i=1; i <=100; i++)
	{
		if( i % num1 == 2)
		{
			printf("numeros dividos que tem resto igual a dois: %d\n", i);
		}
	}
	return 0;
}