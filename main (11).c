#include <stdio.h>
#define PRIMEIRA 9
#define ULTIMA 15

int main()
{
    int quantidade_1, quantidade_2;
    float valor, aux;
    
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade_1);
    
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade_2);
    
    valor = ((quantidade_1 + quantidade_2) * (ULTIMA - PRIMEIRA)) / 2;
    
    if(valor > quantidade_1)
    {
        printf("O resultado do %f e as quantidades sao %d e %d", valor, quantidade_1, quantidade_2);
    }
    else
    {
        aux = valor * 0.8;
        
        printf("O resultado e %f e as quantidades sao %d e %d", aux, quantidade_1, quantidade_2);
        
    }
    
    

    return 0;
}