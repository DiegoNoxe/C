/*

Escreva um programa que calcule o valor final de um produto após a aplicação de um desconto percentual
fornecido pelo usuário.

*/

#include <stdio.h>

int main() {
    float valorProduto, desconto;
    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);
    printf("Digite o desconto do produto: ");
    scanf("%f", &desconto);
    printf("O valor do produto é: %.2f e com o desconto de %.2f%% de desconto o novo valor agora é: %.2f", valorProduto, desconto, valorProduto * (1 - desconto / 100));
    return 0;
}
