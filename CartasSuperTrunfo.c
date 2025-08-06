#include <stdio.h>

int main() {
    // Carta 1
    int carta1 = 1;
    char estado1 = 'A';
    char codigo1[20] = "A01";
    char cidade1[50] = "Sao Paulo";
    int populacao1 = 1232500;
    float area1 = 1521.11;
    float PIB1 = 699.28;
    int pontos1 = 50;
    float densidade1 = populacao1 / area1;
    float capita1 = PIB1 / populacao1;

    // Impressão da carta 1
    printf("Carta: %d\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.8f\n", capita1); // PIB per capita é pequeno, use mais casas

    printf("\n");

    // Carta 2
    int carta2 = 2;
    char estado2 = 'B';
    char codigo2[20] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float PIB2 = 300.50;
    int pontos2 = 30;
    float densidade2 = populacao2 / area2;
    float capita2 = PIB2 / populacao2;

    // Impressão da carta 2
    printf("Carta: %d\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.8f\n", capita2);

    printf("\n");

    // Comparações
    if (densidade1 > densidade2) {
        printf("A maior densidade populacional é da cidade: %s (%.2f hab/km²)\n", cidade1, densidade1);
    } else {
        printf("A maior densidade populacional é da cidade: %s (%.2f hab/km²)\n", cidade2, densidade2);
    }

    if (capita1 > capita2) {
        printf("O maior PIB per capita é da cidade: %s (%.8f)\n", cidade1, capita1);
    } else {
        printf("O maior PIB per capita é da cidade: %s (%.8f)\n", cidade2, capita2);
    }

    return 0;
}