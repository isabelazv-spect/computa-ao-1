#include <stdio.h>

int main()
{
	int n, m;
	int i = 1;
	int j = 1;

    printf("Digite n: ");
    scanf("%d", &n);

    printf("Digite m: ");
   	scanf("%d", &m);
   	
   	for(i = 1; i <= n; i++)
   	{
   	    for(j = 1; j <=m; j++)
   	    {
   	        printf("%d", i * j);
   	    }
   	    
   	    printf("\n");
   	}
   	
   	
	return 0;
}