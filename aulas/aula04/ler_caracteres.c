#include <stdio.h>

int main () {
    char tecla;

    printf("Pressione uma tecla e depois ENTER:\n ");
    scanf("%c", &tecla); // nao sabe tecla = valor então precisa 
                        //acessar endereço da variavel 
                        //com o operador & (& comercial)

    getchar();
    printf("Voce pressionou a tecla '%c'\n", tecla);

    
    scanf("%c", &tecla); 
    getchar();
    printf("Voce pressionou a tecla '%c'\n", tecla);

    char nome[35];
    printf("informe seu nome: ");
    scanf("%[^\n]s", nome);
    printf("Ola %s!\n", nome);

    return 0;



}