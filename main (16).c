#include <stdio.h>

int main()
{
	int num1, i;
	float a, b, c, media;

	printf("Quantos testes? ");
	scanf("%d", &num1);

	for(i=0; i < num1; i++)
	{

		printf("\nDigite os tres valores: ");
		scanf("%f %f %f", &a, &b, &c);

		media = (2*a + 3*b + 5*c) / 10.0;

		printf("Media ponderada: %f", media);
	}
	return 0;
}