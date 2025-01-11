/*Preencher um vetor com os numeros 10 a 20, e depois mostrar os elementos pares do vetor de
trás prá frente. */

#include <stdio.h>

int main(void) 
{
    int v [] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    for(int i = 10; i>0; i--)
    {
       if(v[i] % 2 == 0)
       printf("%d ", v[i]);
    }
    return 0;
}
