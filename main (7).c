#include <stdio.h>

int main()

{
	int num1, i;

	printf("Digite um numero: ");
	scanf("%d", &num1);

	printf("Tabuada do %d: \n ", num1);

	for(i = 1; i <= 10; i++)
	{
		printf("%d x %d = %d\n", num1, i, num1 * i);
	}

	return 0;
}