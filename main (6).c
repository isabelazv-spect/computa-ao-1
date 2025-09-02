#include <stdio.h>

int main()
{
    float num1, num2, num3, num4, aux1, aux2;
    
    printf("Digite o preço do litro do  alcool: ");
    scanf("%f", &num1);
    
    printf("Digite o preço do litro da gasolina: ");
    scanf("%f", &num2);
    
    printf("Digite quantos km por litro o carro realiza com gasolina: ");
    scanf("%f", &num3);
    
    printf("Digite quantos km por litro o crro realiza com alcool: ");
    scanf("%f", &num4);
    
    aux1 = num1 / num4;
    aux2 = num2 / num3;
    
    if(aux1>aux2)
    {
        printf("O alcool vale mais apena! ");
    }
    else if(aux2>aux1)
    {
        printf("A gasolina vale mais apena! ");
    }
    else
    {
        printf("Os dois sao equivalentes! ");
    }

    return 0;
}