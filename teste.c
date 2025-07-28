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
    

    
   
    return 0;


}
