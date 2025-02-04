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
        getchar();
    printf("Digite Nome da cidade: \n");
        scanf("%s", nome_cid);
    printf("Digite População: \n");
        scanf("%lf", &populacao);
    printf("Digite Área: \n");
        scanf("%f", &area);
    printf("Digite PIB: \n");
        scanf("%lf", &pib);
    printf("Digite Nº Pontos Turísticos: \n");
        scanf("%d", &numero_pontos_turisticos);

        printf("Estado: %1s \n", estado);
        printf("Código da Carta: %2s \n", codigo_carta);
        printf("Nome da cidade: %s \n", nome_cid);
        printf("População: %lf \n", populacao);
        printf("Área: %.2f Km2 - PIB: %.2lf - Nº Pontos Turísticos: %d \n", area, pib, numero_pontos_turisticos);
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