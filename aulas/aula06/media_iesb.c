#include <stdio.h>

int main () {
    float nota_a1 = 0.0f;
    float nota_a2 = 0.0f;
    int leu_certo = 0;

    printf("Imforme a nota A1: ");
    leu_certo = scanf("%f", &nota_a1);
    getchar();
    
    if(!leu_certo || nota_a1 < 0.0f || nota_a1 >10.0f) {
        printf("As notas devem estar entre 0.0 e 10.0\n");
        return 0;
    }

    printf("Imforme a nota A2: ");
    scanf("%f", &nota_a2);
    getchar();

    if(!leu_certo || nota_a2 < 0.0f || nota_a2 >10.0f) {
        printf("As notas devem estar entre 0.0 e 10.0\n");
        return 0;
    }

    float media = 0.4f * nota_a1 + 0.6f * nota_a2;
    
    if (9.0f <= media && media <= 10.0) {
        printf("Sua media eh %.1f e a mencao eh SS!\n", media);
    } else if (7.0f <= media && media <= 8.9) {
        printf("Sua media eh %.1f e a mencao eh MS!\n", media);
    } else if (5.0f <= media && media <= 6.9) {
        printf("Sua media eh %.1f e a mencao eh MM!\n", media);
    } else if (3.0f <= media && media <= 4.9) {
        printf("Sua media eh %.1f e a mencao eh MI!\n", media);
    } else if (0.1f <= media && media <= 2.9) {
        printf("Sua media eh %.1f e a mencao eh II!\n", media);
    } else  {
        printf("Sua media eh %.1f e a mencao eh SR!\n", media);
    } 



    return 0; 
}