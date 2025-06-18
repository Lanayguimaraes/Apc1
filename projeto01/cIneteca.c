#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100


int main() {
    struct Midia {
    char titulo[50];
    char tipo[16];
    char genero[20];
    char plataforma[30];
    float nota;
};

    struct Midia midias[MAX];
    int qtd = 0;
    int opcao;

    char tipos[][16] = {"Filme", "Serie"};
    int totalTipos = sizeof(tipos) / sizeof(tipos[0]);

    char generos[][25] = {"Acao", "Anime", "Aventura", "Comedia", "Desenho", "Drama", "Fantasia", "Ficcao Cientifica", "Terror", "Suspense", "Romance", "Policial", "Documentario"};
    int totalGeneros = sizeof(generos) / sizeof(generos[0]);

    char plataformas[][30] = {"Netflix", "Amazon Prime", "Disney+", "HBO Max", "Viki", "Crunchyroll"};
    int totalPlataformas = sizeof(plataformas) / sizeof(plataformas[0]);

    do {
        printf("\n--- CineTeca ---\n");
        printf("1. Adicionar nova midia\n");
        printf("2. Listar midias\n");
        printf("3. Buscar midia\n");
        printf("4. Remover midia\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao (1 a 5): ");
        scanf("%i", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                if (qtd < MAX) {
                    printf("\n--- Informe o titulo da midia: ---\n");
                    fgets(midias[qtd].titulo, sizeof(midias[qtd].titulo), stdin);
                    midias[qtd].titulo[strcspn(midias[qtd].titulo, "\n")] = '\0';

                    int tipoOpcao;
                    printf("\nEscolha o tipo:\n");
                    for (int i = 0; i < totalTipos; i++) {
                        printf("%d. %s\n", i + 1, tipos[i]);
                    }
                    do {
                        printf("Digite a Opcao (1 a %d): ", totalTipos);
                        scanf("%d", &tipoOpcao);
                        getchar();
                    } while (tipoOpcao < 1 || tipoOpcao > totalTipos);
                    strcpy(midias[qtd].tipo, tipos[tipoOpcao - 1]);

                    int generoOpcao;
                    printf("\nEscolha o genero:\n");
                    for (int i = 0; i < totalGeneros; i++) {
                        printf("%d. %s\n", i + 1, generos[i]);
                    }
                    do {
                        printf("Digite a Opcao (1 a %d): ", totalGeneros);
                        scanf("%d", &generoOpcao);
                        getchar();
                    } while (generoOpcao < 1 || generoOpcao > totalGeneros);
                    strcpy(midias[qtd].genero, generos[generoOpcao - 1]);

                    int plataformaOpcao;
                    printf("\nEscolha a plataforma:\n");
                    for (int i = 0; i < totalPlataformas; i++) {
                        printf("%d. %s\n", i + 1, plataformas[i]);
                    }
                    do {
                        printf("Digite a Opcao (1 a %d): ", totalPlataformas);
                        scanf("%d", &plataformaOpcao);
                        getchar();
                    } while (plataformaOpcao < 1 || plataformaOpcao > totalPlataformas);
                    strcpy(midias[qtd].plataforma, plataformas[plataformaOpcao - 1]);

                    do {
                        printf("\nInforme a nota (0.0 a 10.0): ");
                        scanf("%f", &midias[qtd].nota);
                        getchar();
                    } while (midias[qtd].nota < 0.0 || midias[qtd].nota > 10.0);

                    printf("\nMidia adicionada com sucesso!\n");
                    qtd++;
                } else {
                    printf("\nLimite de midias atingido!\n");
                }
                break;

            case 2:
                if (qtd == 0) {
                    printf("\nNenhuma midia adicionada.\n");
                } else {
                    printf("\n--- Lista de Midias ---\n");
                    for (int i = 0; i < qtd; i++) {
                        printf("\nMidia #%d\n", i + 1);
                        printf("Titulo: %s\n", midias[i].titulo);
                        printf("Tipo: %s\n", midias[i].tipo);
                        printf("Genero: %s\n", midias[i].genero);
                        printf("Plataforma: %s\n", midias[i].plataforma);
                        printf("Nota: %.1f\n", midias[i].nota);
                        printf("-----------------------\n");
                    }
                }
                break;

            case 3: {
                if (qtd == 0) {
                    printf("\nNenhuma midia cadastrada para buscar.\n");
                    break;
                }

                int buscaOpcao;
                char termoBusca[50];
                int encontrado = 0;

                printf("\n--- Buscar Midia por ---\n");
                printf("1. Tipo\n");
                printf("2. Genero\n");
                printf("3. Plataforma\n");
                printf("4. Titulo\n");
                printf("Escolha uma opcao de busca (1 a 4): ");
                scanf("%d", &buscaOpcao);
                getchar();

                switch (buscaOpcao) {
                    case 1: {
                        int tipoOpcao;
                        printf("\nEscolha o tipo:\n");
                        for (int i = 0; i < totalTipos; i++) {
                            printf("%d. %s\n", i + 1, tipos[i]);
                        }
                        do {
                            printf("Digite a Opcao (1 a %d): ", totalTipos);
                            scanf("%d", &tipoOpcao);
                            getchar();
                        } while (tipoOpcao < 1 || tipoOpcao > totalTipos);
                        strcpy(termoBusca, tipos[tipoOpcao - 1]);
                        break;
                    }
                    case 2: {
                        int generoOpcao;
                        printf("\nEscolha o genero:\n");
                        for (int i = 0; i < totalGeneros; i++) {
                            printf("%d. %s\n", i + 1, generos[i]);
                        }
                        do {
                            printf("Digite a Opcao (1 a %d): ", totalGeneros);
                            scanf("%d", &generoOpcao);
                            getchar();
                        } while (generoOpcao < 1 || generoOpcao > totalGeneros);
                        strcpy(termoBusca, generos[generoOpcao - 1]);
                        break;
                    }
                    case 3: {
                        int plataformaOpcao;
                        printf("\nEscolha a plataforma:\n");
                        for (int i = 0; i < totalPlataformas; i++) {
                            printf("%d. %s\n", i + 1, plataformas[i]);
                        }
                        do {
                            printf("Digite a Opcao (1 a %d): ", totalPlataformas);
                            scanf("%d", &plataformaOpcao);
                            getchar();
                        } while (plataformaOpcao < 1 || plataformaOpcao > totalPlataformas);
                        strcpy(termoBusca, plataformas[plataformaOpcao - 1]);
                        break;
                    }
                    case 4:
                        printf("\nDigite o titulo: ");
                        fgets(termoBusca, sizeof(termoBusca), stdin);
                        termoBusca[strcspn(termoBusca, "\n")] = '\0';
                        break;
                    default:
                        printf("\nOpcao de busca invalida.\n");
                        continue;
                }

                printf("\n--- Resultados da Busca ---\n");
                for (int i = 0; i < qtd; i++) {
                    int achou = 0;
                    switch (buscaOpcao) {
                        case 1:
                            if (strcasecmp(midias[i].tipo, termoBusca) == 0) achou = 1;
                            break;
                        case 2:
                            if (strcasecmp(midias[i].genero, termoBusca) == 0) achou = 1;
                            break;
                        case 3:
                            if (strcasecmp(midias[i].plataforma, termoBusca) == 0) achou = 1;
                            break;
                        case 4:
                            if (strcasecmp(midias[i].titulo, termoBusca) == 0) achou = 1;
                            break;
                    }
                    if (achou) {
                        encontrado = 1;
                        printf("\nMidia #%d\n", i + 1);
                        printf("Titulo: %s\n", midias[i].titulo);
                        printf("Tipo: %s\n", midias[i].tipo);
                        printf("Genero: %s\n", midias[i].genero);
                        printf("Plataforma: %s\n", midias[i].plataforma);
                        printf("Nota: %.1f\n", midias[i].nota);
                        printf("-----------------------\n");
                    }
                }
                if (!encontrado) {
                    printf("\nNenhuma midia encontrada com o termo '%s'.\n", termoBusca);
                }
                break;
            }

            case 4: {
                if (qtd == 0) {
                    printf("\nNenhuma midia para remover.\n");
                    break;
                }
                char tituloRemover[50];
                int removido = 0;

                printf("\n--- Digite o titulo da midia a ser removida: ---\n");
                fgets(tituloRemover, sizeof(tituloRemover), stdin);
                tituloRemover[strcspn(tituloRemover, "\n")] = '\0';

                for (int i = 0; i < qtd; i++) {
                    if (strcmp(midias[i].titulo, tituloRemover) == 0) {
                        for (int j = i; j < qtd - 1; j++) {
                            midias[j] = midias[j + 1];
                        }
                        qtd--;
                        printf("Midia '%s' removida com sucesso!\n", tituloRemover);
                        removido = 1;
                        i--;
                    }
                }
                if (!removido) {
                    printf("Midia '%s' nao encontrada.\n", tituloRemover);
                }
                break;
            }

            case 5:
                printf("\nSaindo do CineTeca, Ate logo!\n");
                break;

            default:
                printf("\nOpcao invalida. Tente novamente.\n");
        }

    } while (opcao != 5);

    printf("\nObrigado por usar o CineTeca!\n");


    
    return 0;
}
