#include <stdio.h>

int main()
{
    int vetor_7923[7];
    
    /*laço 'for' caso o usuário possa digitar os números que deseja no vetor
    for (int i = 0; i < 7; i++)
    {
        printf("Digite o número da posição %i:\n", i);
        scanf("%i", &vetor_7923[i]);
    }
    */
    
    for (int i = 0; i < 7; i++)
    {
        /*printf para aparecer o valor do índice que o usuário digitou, caso usado o 'for' da linha 7
        printf("O valor da posição %i do vetor é: %i\n", i, vetor_7923[i]);
        */
        printf("O endereço da posição %i do vetor é: %p\n", i, &vetor_7923[i]);
    }

    return 0;
}
