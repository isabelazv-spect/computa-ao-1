#include <stdio.h>
 int main()
{
int num1 , num2 , anx;

printf("Digite o numero de alunos: ");
scanf("%d", &num1);

printf("Digite o numero de monitores");
scanf("%d", &num2);

anx=num1+num2;

if (anx <= 50)
{
    printf("Possivel");
}
else
{
    printf("Nao e possivel");
}
 return 0;
 }