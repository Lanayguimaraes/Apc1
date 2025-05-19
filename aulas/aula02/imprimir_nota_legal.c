#include <stdio.h>

int main() {
    printf("------------------------------------------------------\n");
    printf("                       NOTA LEGAL                     \n");
    printf("------------------------------------------------------\n");
    printf("Item                      Qtd   Prc       Valor\n");
    printf("%-25s %03i %6.2f %9.2f\n", "Caneta Azul",    2,  2.0,   4.0);
    printf("%-25s %03i %6.2f %9.2f\n", "Borracha",       1,  5.0,   5.0);
    printf("%-25s %03i %6.2f %9.2f\n", "Resma de Papel", 1,  10.0,  10.0);
    printf("------------------------------------------------------\n");
    printf("                                  TOTAL: R$ %f\n",  19.00);
    

    return 0;
}