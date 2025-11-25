#include <stdio.h>

int main()
{
	int positivos = 0;
	float num1, soma = 0, media;

	printf("Digite um numero (-1000 para parar):\n");
	scanf("%f", &num1);

	if(num1 == -1000)
	{
		printf("Nenhum valor digitado ! ");
		return 0;
	}

	if(num1 > 0)
	{
		positivos++;
		soma += num1;
	}


	while(num1 != -1000)
	{
		scanf("%f", &num1);

		if(num1 > 0)
		{
			positivos++;
			soma += num1;

		}

	}

	if(positivos > 0)
	{
		media = soma / positivos;
		
		printf("Quantidade de valores positivos: %d\n", positivos);
		printf("Media dos positivos: %.1f\n", media);
	}



	return 0;
}