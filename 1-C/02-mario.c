#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int altura;
    // Não permite usuário digitar valores fora do interval 1-8
    do
    {
        altura = get_int("Altura da Pirâmide: ");
    }
    while (altura < 1 || altura > 8);

    // Imprime hashtags e monta a pirâmide
    for (int linha = 0; linha < altura; linha++)
    {
        for (int espacos = linha + 1; espacos < altura; espacos++)
        {
            printf(" ");
        }
        
        for (int tralha = altura + linha; tralha >= altura; tralha--)
        {
            printf("#");
        }
        
        // Cria a segunda pirâmide do lado direito.
        printf("  ");
    
        for (int tralha = altura + linha + 1; tralha > altura; tralha--)
        {
            printf("#");
        }
        
        printf("\n");
    }
}