#include <stdio.h>

int main(){ 
   //CARTA 1
    int nome1;
    int estado1;
    char codigo1[2];
    int populaçao1;
    float area1;
    float pib1;
    int pontos1;

    //CARTA 2
    int nome2;
    int estado2;
    char codigo2[2];    
    int populaçao2;
    float area2;
    float pib2;
    int pontos2;

    //CARTA 1
   
    printf("O estado: ");
    scanf("%d", &estado1);

    printf("a cidade: ");
    scanf("%d", &nome1);
    
    printf("digite o codigo da carta 1(ex:1 a 2): ");
    scanf("%1s", codigo1);

    printf("A populaçao: ");
    scanf("%d", &populaçao1);

    printf("area em KM²: ");
    scanf("%f", &area1);

    printf("Pib em milhoes: ");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos: ");
    scanf("%d", &pontos1);
     
    //CARTA 2
    printf("O estado: ");
    scanf("%d", &estado2);

    printf("a cidade: ");
    scanf("%d", &nome2);

    printf("Digite o codigo da carta 2(ex: 1 a 2): ");
    scanf("%1s", codigo2);

    printf("A populacao: ");
    scanf("%d", &populaçao2);

    printf("Area em KM²: ");
    scanf("%f", &area2);

    printf("Pib em milhoes: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos: ");
    scanf("%d", &pontos2);

    printf("\\n--- Dados da Carta 1 ---\\n");printf("População: %d\\n", populaçao1);printf("Área: %.2f km²\\n", area1);

    printf("\\n--- Dados da Carta 2 ---\\n");printf("População: %d\\n", populaçao2);printf("Área: %.2f km²\\n", area2);

    return 0;


}
