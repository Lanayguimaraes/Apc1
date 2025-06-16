#include <stdio.h>

int main() {
    int numeros [10];
    int numero, achou = -1;

    
for(int i=0; i<10; i++) {
    printf("Entre com o %i numero: ", i+1);
    scanf("%i", &numeros[i]);
}
    printf("Procure pelo numero: ");
    scanf("%i", &numero);

for(int i=0; i<10; i++) {
    if (numeros[i] == numero) {
        achou = i; 
        break;
    }
}

if(achou < 0) {
    printf("O numero nao foi encontrado!\n");
} else {
    printf("O numero foi encontrado na posicao %i\n", achou);
}

    return 0;
}