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
    
    if(num1 >= num2+num3)
    {
        printf("Nao forma um triangulo! ");
    }
    else
    {
        printf("Forma um triangulo! ");
    }

    return 0;
}