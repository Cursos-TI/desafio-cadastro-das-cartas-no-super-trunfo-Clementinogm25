#include <stdio.h>

#define NUM_CIDADES 04

struct Cidade {
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float PIB;
    int pontosTuristicos;
};

void cadastrarCidades(struct Cidade cidades[]) {
    for (int i = 0; i < NUM_CIDADES; i++) {
        printf("Digite os dados da cidade %d:\n", i + 1);
        printf("Código: ");
        scanf("%s", cidades[i].codigo);
        printf("Nome: ");
        scanf("%s", cidades[i].nome);
        printf("População: ");
        scanf("%d", &cidades[i].populacao);
        printf("Área (km²): ");
        scanf("%f", &cidades[i].area);
        printf("PIB (em milhões): ");
        scanf("%f", &cidades[i].PIB);
        printf("Número de pontos turísticos: ");
        scanf("%d", &cidades[i].pontosTuristicos);
        printf("\n");
    }
}

void exibirCidades(struct Cidade cidades[]) {
    printf("\nInformações das Cidades:\n");
    printf("------------------------\n");
    for (int i = 0; i < NUM_CIDADES; i++) {
        printf("Cidade %d:\n", i + 1);
        printf("Código: %s\n", cidades[i].codigo);
        printf("Nome: %s\n", cidades[i].nome);
        printf("População: %d habitantes\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2f milhões\n", cidades[i].PIB);
        printf("Pontos turísticos: %d\n", cidades[i].pontosTuristicos);
        printf("------------------------\n");
    }
}
