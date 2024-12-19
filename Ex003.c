#include <stdio.h>
#include <string.h>

 /*
Manipulação de Strings: Escreva um programa que receba uma string e determine se ela é um palíndromo. Considere apenas letras e números, ignorando espaços e pontuação.
*/

int main(void) {
    
    char string [] = "arara"; int tam = strlen(string); int palindromo = 0;
    
    for(int i = 0, j = tam-1; i<j; i++, j--)
    {
    if(string[i] != string[j])
    {
        palindromo = 1;
        break;
    }
    }
    
    if(palindromo == 1)
    {
        printf("Não é palindromo");
    }

    else
    {
      printf("São iguais!");
    }

    return 0;
}