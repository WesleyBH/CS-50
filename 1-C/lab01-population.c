#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // DEFINIÇÃO DAS VARIÁVEIS
    int initPop, endPop, pop, years, born, death;
    years = 0;
    
    // NÃO PERMITE QUE A POPULAÇÃO INICIAL SEJA MENOR QUE 9
    do
    {
        initPop = get_int("Start Size: ");
    }
    while (initPop < 9);
    
    // NÃO PERMITE QUE A POPULAÇÃO FINAL SEJA MENOR QUE A POPULAÇÃO INICIAL
    do
    {
        endPop = get_int("End Size: ");
    }
    while (endPop < initPop);
    
    // SE A POPULAÇÃO INICIAL FOR IGUAL A POP FINAL, EXIBE 0 ANOS
    if (initPop == endPop)
    {
        printf("Years: %i\n", years);
    }
    else
    {
        // CALCULA NASCIMENTOS, MORTES, CRESCIMENTO POPULAÇÃO E ANOS ATÉ POPULAÇÃO DESEJADA
        do
        {
            born = floor((float)initPop / 3);
            death = floor((float)initPop / 4);
            pop = initPop + born - death;
            initPop = pop;
            years++;
        }
        while (pop < endPop);
        
        // INFORMA A QUANTIDADE DE ANOS NECESSÁRIOS PARA POPULAÇÃO CRESCER ATÉ O DESEJADO
        printf("Years: %i\n", years);
    }
}