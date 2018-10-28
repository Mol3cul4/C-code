#include <stdio.h>

int main(void)
{
    int i, j, w;
	
    int K=66, e=114, n=117, N=110, Y=97;

    char a = 'B';
    char b = '4';
    int c = a - b;

    printf("Digite o número de uma data especial: \n");
    printf("Dica: Entre 1 e 30\n");
   
    scanf("%d", &w);

if(w ==c)
{

    for(i=w/2; i<=w; i+=2)
    {
        for(j=1; j<w-i; j+=2)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=1; j<=w-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

for(i=0; i<w/2; i++)
{
    printf(" ");
}

printf("%c%c%c%c%c",K, e, n, N, Y);

printf("%c%c%c%c%c%c%c%c%c%c%c%c\n", 44,32,101,117,32,116,101,32,97,109,111,33);
	
for(i=0; i<w/2; i++)
{
    printf(" ");
}

printf("  %c%c%c%c%c%c%c%c%c%c%c%c", 67,97,115,97,32,99,111,109,105,103,111,33);

printf("\n");

    for(i=w; i>=1; i--)
    {
        for(j=i; j<w; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(i*2)-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

}

else if (w > c) 
{
	printf("\nEscolha um número menor, %c%c%c%c%c%c%c%c\n\n", 101,109,98,117,115,116,101,33);
}

else if (w < c) 
{
	printf("\nEscolha um número maior, %c%c%c%c%c%c%c%c%c%c%c\n\n", 101,115,116,97,103,105,97,114,105,97,33);
}
    return 0;
}
