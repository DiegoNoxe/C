/*

Crie um programa que verifique se um número é perfeito. Um número perfeito é aquele cuja soma dos seus 
divisores (exceto ele mesmo) é igual ao próprio número (exemplo: 6 é perfeito, pois 1 + 2 + 3 = 6).

*/

#include <stdio.h>

int main() {
    int n;
    int soma = 0;
    printf("Digite um número: ");
    scanf("%d", &n);
    for(int i = 1; i<n; i++)
    {
        if(n%i == 0) soma += i;
    }
    printf("%s", soma == n ? "O número é perfeito" : "O número não é perfeito"); 
    return 0;
}
