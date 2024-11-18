//Faça um programa que leia um número Inteiro qualquer e mostre na tela a sua tabuada.

#include <stdio.h>

int main() 
{
    int n;
    
    printf("Digite um número inteiro: \n");
    scanf("%d", &n);
    
    for(int i = 0; i<= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}