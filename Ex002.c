//Crie um algoritmo que leia um número e mostre o seu dobro e o triplo.

#include <stdio.h>

int main() 
{
    int n;
    printf("Entre com um número: ");
    scanf("%d", &n);
    
    printf("Dobro: %d\nTriplo: %d\n", n*2, n*3);
    return 0;
}