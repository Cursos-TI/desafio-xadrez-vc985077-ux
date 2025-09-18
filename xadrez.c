#include <stdio.h>

void movimento(int passosT){
    if (passosT < 5){
        printf("Direita\n");
        movimento(passosT + 1);//Bloco Torre
    }
}  

void movimento1(int passosB){
    for (passosB = 0;passosB < 5 ; passosB++){//Loop Externo
        printf("Cima\n");

         if (passosB % 1 == 0){ //Loop interno
            printf("Direita\n");
            }
        }
}

void movimento2(int passosR){
    for ( passosR = 0; passosR < 8; passosR++){
        printf("Esquerda\n");
    }     
}

void movimento3(int passosC){
    for(passosC = 0;passosC < 2; passosC++)//Loop externo
    {
        printf("Cima\n");

        if (passosC % 3 == 1) //Loop interno
        {
            printf("Direita\n");
        }
    }
}

int main(){

    int Torre = 0, Rainha = 0, Bispo = 0, Cavalo = 0;

    printf(" ** Torre **\n");
    movimento(Torre);
    printf("\n");//print de Torre

    printf(" ** Bispo **\n");
    movimento1(Bispo);
    printf("\n");//print de Bispo

    printf(" ** Rainha **\n");
    movimento2(Rainha);
    printf("\n");//print da Rainha

    printf(" ** Cavalo **\n");
    movimento3(Cavalo);
    printf("\n");//print do Cavalo

    return 0;
}
