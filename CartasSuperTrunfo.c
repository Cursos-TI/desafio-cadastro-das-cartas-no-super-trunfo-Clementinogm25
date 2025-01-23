#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Clementino


int main() {
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float PIB;
    int num_pontos_turisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);

    while (getchar() != '\n'); // Limpa o buffer
    printf("Digite o nome da cidade: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &num_pontos_turisticos);
        // Exibição dos Dados das Cartas:
        // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
        // Exiba os valores inseridos para cada atributo da cidade, um por linha.
        // Exibindo os dados coletados
    printf("\nDados cadastrados:\n");
    printf("Código: %d\n", codigo);
    printf("Nome da cidade: %s", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", num_pontos_turisticos);
        
    return 0;
}      
