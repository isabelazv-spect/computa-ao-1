#include <stdio.h>

int main()
{
    int num1;
    int j =1 , i = 1;
    
    printf("digite um numero: ");
    scanf("%d", &num1);
    
    printf(" \n");
    
    for(i = 1; i <= num1; i++ )
    {
        printf("%d", i);
        
        for(j = 1; j <= i; j++)
        {
            printf(" %d", i * j);
        }
        
        printf("\n");
    }

    return 0;
}
