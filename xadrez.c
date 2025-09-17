#include <stdio.h>

int main(){
    
    int Torre = 0, Rainha = 0, Bispo = 0, Cavalo = 0;

    printf(" ** Torre **\n");
    while (Torre < 5) //Condição para Torre
    {
        printf("Direita\n"); //Saída Torre

        Torre++; //incremento de Torre
    }
    printf("\n");

    printf(" ** Bispo **\n");
    do
    {
        printf("Direita\n"); //Ação
        
        Bispo++; //Incremento Rainha

        if (Bispo <= 5) //Condição if para soma
        {
            printf("Cima");
        }
        printf("\n");
        
    } while (Bispo < 5); // Saída while
    printf("\n");

    printf(" ** Rainha **\n"); 
    for ( Rainha = 0; Rainha < 8; Rainha++) //Loop peça Rainha
    {
        printf("Esquerda\n");
    }
    printf("\n");


    printf(" ** Cavalo **\n");
    for ( Cavalo = 0; Cavalo < 1; Cavalo++) //Loop externo Cavalo
    {
        while (Cavalo < 2) //Loop interno
        {
            printf("Baixo\n"); //Saída interna
            Cavalo++;
        }
        
        printf("Esquerda\n"); // Saída externa
    }
    
    
    return 0;
}
