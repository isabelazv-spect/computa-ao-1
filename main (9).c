#include <stdio.h>

int main()

{
	int num1, i;
	float v1, v2, v3, media;

	printf("Digite o numero de testes: ");
	scanf("%d", &num1);

	for(i = 1; i <= num1; i++)
	{
	    printf("Digite os 3 valores do caso %d:\n ", i);
	    scanf("%f %f %f", &v1, &v2, &v3);
	    
	    media = (v1*2 + v2*3 + v3*5) / 10.0;
	    
	    printf("Media ponderada do %d: %f\n", i, media);
	    
	}

	return 0;
}