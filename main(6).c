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
		printf("o perimetro e maior que area");
	}
	else if(perimetro<area)
	{
		printf("a area e maior que o perimetro");
	}
	
	if(perimetro==area)
	{
	    printf("a area e igual o perimetro");
	}
	return 0;
}