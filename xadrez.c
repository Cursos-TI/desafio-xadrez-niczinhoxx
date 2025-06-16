#include <stdio.h>

int main(){

// Váriavel do Bispo    
int bispo = 0;
// Váriavel da Rainha
int rainha = 0;
// Váriavel do Cavalo
int cavalo = 1;



    // Torre 5 casas para direita com For

    for (int torre = 0; torre < 5; torre++)

    {   
        printf("Movimento da torre\n");  

        printf("Direita\n");
    }

        printf("==========================\n");


    // Bispo 5 casas para cima direita com Do While

    do{   
        printf("Movimento do bispo\n");

        printf("Cima Direita\n");
        bispo++;

    } while (bispo < 5);

        printf("==========================\n");

    // Rainha 8 casas para esquerda com While

    while (rainha < 8){
        printf("Movimento da rainha\n");
        printf("Esquerda\n");
        rainha++;
    }


    printf("==========================\n");

    // movimento do cavalo

    printf("Movimento do cavalo\n");

    while (cavalo--)
    {
        for(int i = 0; i < 2; i++)
        {
            printf("Cima\n");
        }

        printf("Direita\n");
        /* code */
    }
    
    return 0;
}