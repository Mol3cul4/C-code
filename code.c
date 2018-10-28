#include <stdio.h>

int main(void)
{
    int i, j, w;
	
    int K=66, e=114, n=117, N=110, Y=97;

    printf("Digite um número inteiro entre 14 e 20: ");
    scanf("%d", &w);

if(w >= 14 && w <=20)
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

printf("%c%c%c%c%c%c%c%c%c%c%c%c", 44,32,101,117,32,116,101,32,97,109,111,33);
	
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

else 
{
    printf("\nEscolha um número entre 14 e 20, %c%c%c%c%c%c%c%c\n\n", 101,109,98,117,115,116,101,33);
}

    return 0;
}
