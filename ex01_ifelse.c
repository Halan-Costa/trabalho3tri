/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int numero;

 printf ("Digite um numero para ser escaneado\n");
 scanf (" %d", &numero);
 if (numero %2 == 1){
     printf ("O numero %d é um numero ímpar\n", numero);
 }
    else{
        printf ("O numero %d é um numero par\n", numero);
    } 
    
    if (numero > 0){
        printf("O numero %d é um numero positivo\n", numero);
    }
    else if (numero < 0){
        printf("O numero %d é um numero negativo\n", numero);
 }
 else{
     printf("O numero %d é zero\n", numero);
 }
}
















//printf ("o valor é: %d",numero);
