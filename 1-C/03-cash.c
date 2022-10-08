#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // DEFINIÇÃO DAS VARIÁVEIS UTILIZADAS
    float troco;
    int penny, nickel, dime, quarter, moedas, centavos;
    
    // VALORES DAS MOEDAS DE TROCO
    penny = 1;
    nickel = 5;
    dime = 10;
    quarter = 25;
    moedas = 0;
    
    // NÃO PERMITE O USUÁRIO DIGITAR VALORES MENORES QUE 0.01 CENTAVOS
    do
    {
        troco = get_float("Valor do troco: ");
        centavos = round(troco * 100);
    }
    while (centavos <= 0);


    // VERIFICAÇÃO DA QUANTIDADE DE MOEDAS A SEREM UTILIZADAS
    do
    {
        if (centavos >= quarter)
        {
            centavos = centavos - quarter;
            moedas++;
        }
    
        else if (centavos >= dime)
        {
            centavos = centavos - dime;
            moedas++;
        }
    
        else if (centavos >= nickel)
        {
            centavos = centavos - nickel;
            moedas++;
        }
        
        else
        {
            centavos = centavos - penny;
            moedas++;
        }
    }
    while (centavos > 0);
    
    // IMPRIME A QUANTIDADE DE MOEDAS UTILIZADAS
    printf("%i \n", moedas);
}