#include <stdio.h>

int main() {
    // Variáveis para Carta 1
    char estado1[3], codigo1[10], nome1[50];
    unsigned long int populacao1;
    float area1;
    double pib1;
    int pontos1;

    // Variáveis para Carta 2
    char estado2[3], codigo2[10], nome2[50];
    unsigned long int populacao2;
    float area2;
    double pib2;
    int pontos2;

    // Leitura dos dados das cartas
    // Leitura dos dados da Carta 1
    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Estado (sigla): ");
    scanf("%2s", estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %s", nome1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%lf", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Leitura dos dados da Carta 2
    printf("\n=== CADASTRO DA CARTA 2 ===\n");
    printf("Estado (sigla): ");
    scanf("%2s", estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", nome2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%lf", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);
    // fim da leitura dos dados das cartas
    
    // Cálculos de densidade e PIB per capita
    float densidade1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    float densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0;
    float pibpc1 = (populacao1 > 0) ? (float)pib1 / populacao1 : 0;
    float pibpc2 = (populacao2 > 0) ? (float)pib2 / populacao2 : 0;
    // fim dos cálculos de densidade e PIB per capita
    
    // Cálculo do Super Poder
    float inv_densidade1 = (densidade1 > 0) ? 1.0f / densidade1 : 0;
    float inv_densidade2 = (densidade2 > 0) ? 1.0f / densidade2 : 0;
    float super_poder1 = (float)populacao1 + area1 + (float)pib1 + (float)pontos1 + pibpc1 + inv_densidade1;
    float super_poder2 = (float)populacao2 + area2 + (float)pib2 + (float)pontos2 + pibpc2 + inv_densidade2;
    //fim do cálculo do Super Poder
    
    // Exibição das cartas
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2lf\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.4f\n", pibpc1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.4f\n", pibpc2);
    printf("Super Poder: %.2f\n", super_poder2);
    //fim da exibição das cartas
    // Comparações
    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, populacao1 > populacao2);
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, pib1 > pib2);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontos1 > pontos2) ? 1 : 2, pontos1 > pontos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibpc1 > pibpc2) ? 1 : 2, pibpc1 > pibpc2);
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, super_poder1 > super_poder2);
    // fim da comparação
    return 0;
}














