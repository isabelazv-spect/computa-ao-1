#include <stdio.h>
int main()
{
	float num1, num2, num3;

	printf("Digite um dos lados do triangulo: ");
	scanf("%f", &num1);

	printf("Digite o segundo lado do triangulo: ");
	scanf("%f", &num2);

	printf("Digite o terceiro lado do triangulo: ");
	scanf("%f", &num3);

	if(num1 >= num2+num3 || num2 >= num3+num1 || num3 >= num2+num1)
	{
		printf("Nao forma um triangulo! ");
	}
	else if(num1 == num2 && num2 == num3)
	{
		printf("Forma um triangulo equilatero ");
	}
	else if(num1 != num2 && num2 != num3)
	{
		printf("Forma um triangulo escaleno ");
	}
	else if(num1 == num2 || num1 == num3 || num2 == num3)
	{
	    printf("Forma triangulo isosceles ");
	}
		return 0;
}