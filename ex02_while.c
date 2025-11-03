#include <stdio.h>
int main()
{
    int soma=0, numero=0, pontos=0;
    float resultado;
    
    printf ("Digite os numeros para fazer a soma e a media (Digite -1 para terminar)\n");
    
    while(numero != -1){
        scanf (" %d", &numero);
        printf ("numero digitado %d\n ", numero);
        soma+=numero;
        (++pontos);
    }
    printf ("\nvoce digitou %d numeros\n", pontos);
    printf ("\na soma dos seus numeros é: %d\n", soma);
    resultado=soma/pontos;
    printf ("\na media dos seus numeros é: %.2f", resultado);
    
    
}
