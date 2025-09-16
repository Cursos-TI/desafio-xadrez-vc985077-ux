#include <stdio.h>

int main(){
    
    int Torre = 0, Rainha = 0, Bispo = 0;

    while (Torre < 5) //Condição para Torre
    {
        printf("\nTorre move-se 1 casa para a direita..."); //Saída Torre

        Torre++; //incremento de Torre
    }

    do
    {
        printf("\nBispo move-se 1 casa para a direita..."); //Ação
        
        Bispo++; //Incremento Rainha

        if (Bispo <= 5) //Condição if para soma
        {
            printf("\nBispo move-se 1 casa para cima...");
        }
        
    } while (Bispo < 5); // Saída while

    for ( Rainha = 0; Rainha < 8; Rainha++)
    {
        printf("\nRainha move-se 1 casa para a esquerda...");
    }
    
    return 0;
}
