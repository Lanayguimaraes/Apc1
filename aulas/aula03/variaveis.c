#include <stdio.h>

int main() {
    char tecla;
    tecla = 'A';
    printf("Tecla = %c\n", tecla);
    tecla = 100;
    printf("Tecla = %c\n", tecla);    
    
    
    int numero = 10;
    printf("Numero = %i\n", numero);
    // int numero; não pode

{
    int numero = 20; // aqui pode ( novas chaves - "vida nova")
    printf("Numero = %i\n", numero);
     
}
 
    float media = 9.5f;
    printf("Media = %.1f\n", media);

    double dizima = 2.3333333333;
    printf("Dizima = %.8f\n", dizima ); 


    return 0 ;

}