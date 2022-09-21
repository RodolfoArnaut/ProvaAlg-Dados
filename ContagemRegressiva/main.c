#include <stdio.h>
#include <stdlib.h>



   int main()
{
    int n;

    printf("Digite o numero para fazer contagem regressiva \n>>>");
    scanf("%d", &n);


    while(n)
    {
        printf("%d\n",n -1);
        n = n - 1;
    }
    return 0;

}