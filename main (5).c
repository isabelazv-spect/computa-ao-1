#include <stdio.h>
#include <math.h>

int main()
{
	float num1, num2, num3, media1, media2, media3, media4;
	char opcao;
	printf("escolha a opcao (A, P, G, H):");
	scanf("%c", &opcao);

	printf("Digite um numero: ");
	scanf("%f", &num1);

	printf("Digite um numero: ");
	scanf("%f", &num2);

	printf("Digite um numero: ");
	scanf("%f", &num3);

	if(opcao== 'A' || opcao == 'a');
	{
		{
			media1 = (num1+num2+num3) / 3;
			printf("Media aritmetica = ""%f", media1);
		}
		if(opcao == 'P' || opcao == 'p');
		{
			media2 = (num1*1+num2*2+num3*3) / 6;
			printf("Media ponderada = ""%f", media2);
		}
		if(opcao == 'G' || opcao == 'g');
		{
			media3 = pow((num1*num2*num3),3);
			printf("Media geometrica = ""%f", media3);
		}
		if(opcao == 'H' || opcao == 'h');
		{
			media4 = (3 / (1/num1)+(1/num2)+(1/num3));
			printf("Media harmonica = ""%f", media4);
		}
	}
		else
		{
			printf("Erro");
		}
	return 0;
}