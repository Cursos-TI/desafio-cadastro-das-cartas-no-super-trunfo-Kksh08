#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta
    char codigoCarta1[4]; // Ex: A01
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração de variáveis para a segunda carta
    char codigoCarta2[4]; // Ex: B02
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- Cadastro da Primeira Carta ---
    printf("--- Cadastro da Primeira Carta ---\n");
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigoCarta1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em trilhoes): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n"); // Linha em branco para melhor visualizacao

    // --- Cadastro da Segunda Carta ---
    printf("--- Cadastro da Segunda Carta ---\n");
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigoCarta2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em trilhoes): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n"); // Linha em branco para melhor visualizacao

    // --- Exibição dos Dados da Primeira Carta ---
    printf("--- Dados da Primeira Carta (%s) ---\n", codigoCarta1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f trilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n"); // Linha em branco para melhor visualizacao

    // --- Exibição dos Dados da Segunda Carta ---
    printf("--- Dados da Segunda Carta (%s) ---\n", codigoCarta2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f trilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0; // Indica que o programa terminou com sucesso
}