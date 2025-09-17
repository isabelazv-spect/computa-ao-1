#include <stdio.h>

int main()
{
    int qtd_1;
    int i;
    float valor, preco, media, total = 0;
    
    printf("Digite a quantidade de frutas vendidas: ");
    scanf("%d", &qtd_1);
    
    for( i = 1; i <= qtd_1; i++)
    {
    printf("Digite o preço da fruta %d:", i);
    scanf("%f", &preco);
    total += preco;
    }
    
    media = total / qtd_1;
    
    while(1)
    {
        printf("Digite um valor em reais (zero ou negativo para encerrar):");
        scanf("%f", &valor);
        
        if (valor <= 0)
        {
            break;
        }
        if (valor > media)
        {
            printf("Errou pra mais!\n");
        }
        else if (valor == media)
        {
            printf("Acertou a media!\n");
        }
        else
        {
            printf("Errou pra menos!\n");
        }
    }
    
    
    return 0;
}