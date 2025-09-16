#include <stdio.h>

int main()

{
	int num1, num2;
	
	printf("Digite numeros (numero negativo para sair):\n");
	scanf("%d", &num1);
	
	if(num1 < 0)
	{
	 printf("Nenhum numero digitado.");
	 return 0;
	}
	
	num2 = num1;
	
	while(1)
	{
	    printf("Digite outro numero:\n");
	    scanf("%d", &num1);
	    
	    if(num1 < 0)
	    {
	        break;
	    }
	    if(num1 > num2)
	    {
	        num2 = num1;
	    }
	}
	
	printf("O maior numero digitado foi: %d", num2);
	
	
	return 0;
}