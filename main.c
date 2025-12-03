#include <stdio.h>

int main()
{
	int n;
	int k = 1;

	printf("Digite um numero: ");
	scanf("%d", &n);

	while(k * ( k + 1 ) * ( k + 2 ) < n )
	{
		k++;
	}
	if(k * ( k + 1 ) * ( k + 2 ) == n)
	{
		printf(" e um numero triangular!");
	}

	else
	{
		printf("nao e trianglar!");

	}


	return 0;
}