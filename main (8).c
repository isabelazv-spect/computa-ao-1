#include <stdio.h>

int main()

{
	int num1, i, aux;

	printf("Digite um numero inteiro: ");
	scanf("%d", &num1);

	for(i = 1; i <= 100; i++)
	{
	    if(i % num1 == 2)
	    {
		printf("%d\n", i);
	    }
	}

	return 0;
}