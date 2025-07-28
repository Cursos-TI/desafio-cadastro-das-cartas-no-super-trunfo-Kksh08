#include <stdio.h>
int main() {  

    // CARTA 1
    char nome1[50];
    char estado1[50];
    char codigo1[3];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    
    // CARTA 2
    char nome2[50];
    char estado2[50];
    char codigo2[3];    
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // CARTA 1
    printf("O estado: ");
    scanf("%s", estado1);

    printf("A cidade: ");
    scanf("%s", nome1);
    
    printf("Digite o codigo da carta 1 (ex: 1a2): ");
    scanf("%2s", codigo1);

    printf("A populacao: ");
    scanf("%d", &populacao1);

    printf("Area em KM²: ");
    scanf("%f", &area1);

    printf("Pib em milhoes: ");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos: ");
    scanf("%d", &pontos1);
     
    // CARTA 2
    printf("O estado: ");
    scanf("%s", estado2);

    printf("A cidade: ");
    scanf("%s", nome2);

    printf("Digite o codigo da carta 2 (ex: 1a2): ");
    scanf("%2s", codigo2);

    printf("A populacao: ");
    scanf("%d", &populacao2);

    printf("Area em KM²: ");
    scanf("%f", &area2);

    printf("Pib em milhoes: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos: ");
    scanf("%d", &pontos2);

    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", nome1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nome2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    printf("Densidade Populacional (Carta 1): %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita (Carta 1): %.2f milhões/habitante\n", pib_per_capita1);

    printf("PIB per capita (Carta 2): %.2f milhões/habitante\n", pib_per_capita2);
    printf("Densidade Populacional (Carta 2): %.2f habitantes/km²\n", densidade2);

    printf("\n--- Resultados Finais ---\n");
    printf("Densidade Populacional (Carta 1): %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita (Carta 1): %.2f milhões/habitante\n", pib_per_capita1);
    printf("Densidade Populacional (Carta 2): %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita (Carta 2): %.2f milhões/habitante\n", pib_per_capita2);

    return 0;
}