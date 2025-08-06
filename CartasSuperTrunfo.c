#include <stdio.h>

int main(){
    int carta1 = 1;
    char estado1 = 'A';
    char codigo1[20] = "A01";
    char cidade1[50] = "sao paulo";
    int populacao1 = 1232500;
    float area1 = 1521.11;
    float PIB1 = 699.28;
    int pontos1 = 50;
    float densidade1 = (populacao1 / area1);
    float capita1 = (PIB1 / populacao1);
    

    printf("Carta: %d\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n",codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n",PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %f\n", densidade1);
    printf("PIB per Capita: %f\n", capita1);

    int carta2 = 2;
    char estado2 = 'B';
    char codigo2[220] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float PIB2 = 300.50;
    int pontos2 = 30;
    float densidade2 = (populacao2 / area2);
    float capita2 = (PIB2 / populacao2);

    printf("Carta: %d\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n",codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n",PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB per Capita: %f\n", capita2);

    int resultadoA, resultasoB;

    resultadoA = densidade1 > capita1;
    resultasoB = densidade2 > capita2;

    printf("a carta como maior numero populacional: %f e o maior PIB capita é: %d\n", densidade1, capita1);
    printf("a carta como maior numero populacional: %f e o maior PIB capita é: %d\n", densidade2, capita2);


    return 0;

}