#include <stdio.h>
int main()
{
	float altura, base, perimetro, area;
	printf("Digite a altura do triangulo:");
	scanf("%f", &altura);

	printf("Digite o comprimento da base do triangulo:");
	scanf("%f", &base);

	perimetro = 2*base+2*altura;
	area = base*altura;

	if(perimetro>area)
	{
		printf("sim,o perimetro e maior que area");
	}
	else
	{
		printf("nao,o perimetro e menos que a area");
	}
	return 0;
}