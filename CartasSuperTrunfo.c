#include <stdio.h>

int main(){

    char estado[1];
    char codigo_carta[3];
    char nome_cid[50];
    double populacao;
    float area;
    double pib;
    int numero_pontos_turisticos;
    
    printf("Digite seu estado: \n");
        scanf("%1s", estado);
    printf("Digite código da carta: \n");
        scanf("%3s", codigo_carta);
    printf("Digite Nome da cidade: \n");
        getchar(); // Limpa o buffer antes de scanf()
        scanf("%s49[^\n]", nome_cid); // Lê até 49 caracteres, incluindo espaços
    printf("Digite População: \n");
        scanf("%lf", &populacao);
    printf("Digite Área: \n");
        scanf("%f", &area);
    printf("Digite PIB: \n");
        scanf("%lf", &pib);
    printf("Digite Nº Pontos Turísticos: \n");
        scanf("%d", &numero_pontos_turisticos);

        printf("Estado:  %1s - Código da Carta: %3s\n", estado, codigo_carta);
        printf("Nome da cidade: %49s - População: %lf\n", nome_cid, populacao);
        printf("Área: %.2f Km2 - PIB: %.2lf - Nº Pontos Turísticos: %d\n", area, pib, numero_pontos_turisticos);
        return 0;
        
        /*
        Estado: A
        Código da Carta: A01
        Nome da Cidade: São Paulo
        População: 12325000
        Área: 1521.11 km²
        PIB: 699.28 bilhões de reais
        Número de Pontos Turísticos: 50
        */

}