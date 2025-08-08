#include <stdio.h>

int main(){
    // variaveis carta 1
    char estado1;
    char codigo_da_carta1[5];
    char nome_da_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int p_turisticos1;

    // variaveis carta 2
    char estado2;
    char codigo_da_carta2[5];
    char nome_da_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int p_turisticos2;

    // entrada de dados da carta 1 e carta 2
    // carta 1
    printf("Bem-vindo ao jogo de cartas!\n");
    printf("---------------CARTA 1---------------\n");
    
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c",  &estado1);

    printf("Digite o codigo da carta (ex: A01, B03): \n");
    scanf("%s", codigo_da_carta1);

    printf("digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade1);

    printf("O número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("A area da cidade em km²: \n");
    scanf("%f", &area1);

    printf("O PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("O numero de pontos turisticos da cidade: \n");
    scanf("%d", &p_turisticos1);
    // fim da entrada de dados da carta 1
    
    //carta 2
    printf("\n---------------CARTA 2---------------\n");
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01, B03): \n");
    scanf(" %s", codigo_da_carta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome_da_cidade2);

    printf("O numero de habitantes da cidade: \n");
    scanf(" %d", &populacao2);

    printf("A area da cidade em km²: \n");
    scanf(" %f", &area2);

    printf("O PIB da cidade: \n");
    scanf(" %f", &pib2);

    printf("O numero de pontos turisticos da cidade: \n");
    scanf(" %d", &p_turisticos2);
     //  fim da entrada de dados da carta 2

    // fim da entrada de dados da carta 1 e carta 2
        
    // exibir as cartas 1 e 2
    //carta 1
    printf("\n---------------CARTA 1---------------\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo_da_carta1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area em km²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", p_turisticos1);
    
    // fim da exibição das cartas 1 
    // carta 2
    printf("---------------CARTA 2---------------\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %S\n", nome_da_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area em km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", p_turisticos2);
    
    //fim da exibição das cartas 2
    // fim da exibição das cartas 1 e 2

    
    
    
    
    
    
    return 0;
}















