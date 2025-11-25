#include <stdio.h>

int main()
{
	float num1, maior;

	printf("Digite um numero (negativo para parar):\n");
	scanf("%f", &num1);

	if(num1 < 0)
	{
		printf("Nenhum valor positivo digitado ! ");
		return 0;
	}

	maior = num1;

	while(num1 >= 0)
	{
		scanf("%f", &num1);

		if( num1 < 0)
		{
			break;
		}
		if(num1 > maior)
		{
			maior = num1;
		}

	}

	printf("O maior valor digitado foi: %f", maior);
	return 0;
}