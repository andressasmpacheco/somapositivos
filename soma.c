#include <stdio.h> 
int main() 
{    
    int num, soma = 0;
    do
    {
    printf("Escreva numeros positivos: ");
    scanf("%d", &num);
    soma = soma + num;
    printf("%d\n", soma);
    } while (num % 2 == 0);
    
   
    
}
