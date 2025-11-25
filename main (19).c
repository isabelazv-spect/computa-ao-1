#include <stdio.h>

int main()
{
	int senha;

	printf("Digite a senha: ");
	scanf("%d", &senha);
	
	
	while(senha != 2002)
	{
		printf("Senha invalida!\n");
		printf("Digite a senha: ");
		scanf("%d", &senha);
	}
	
		printf("Senha correta !");

	return 0;
}