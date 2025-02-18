//Crie um programa que leia um número e informe se ele é positivo ou negativo (Considere 0 como positivo).
#include <stdio.h>

int main() {
    int n;
    printf("insira o número: ");
    scanf("%d", &n);
    n >= 0 ? printf("É positivo") : printf("É negativo");
    return 0;
}
