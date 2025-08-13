#include <stdio.h>

int main() {
    // Carta 1
    int carta1 = 1;
    char estado1 = 'A';
    char codigo1[20] = "A01";
    char cidade1[50] = "Sao Paulo";
    int populacao1 = 1232500;
    float area1 = 1521.11;
    float PIB1 = 699280000000.0; 
    int pontos1 = 50;
    float densidade1 = populacao1 / area1;
    float capita1 = PIB1 / populacao1; 

    // Carta 2
    int carta2 = 2;
    char estado2 = 'B';
    char codigo2[20] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float PIB2 = 300500000000.0; 
    int pontos2 = 30;
    float densidade2 = populacao2 / area2;
    float capita2 = PIB2 / populacao2;

    int opcao;
    printf("\n=== Super Trunfo - Comparação ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("\nComparando %s x %s\n", cidade1, cidade2);

    switch (opcao) {
        case 1:
            printf("População: %d x %d\n", populacao1, populacao2);
            if (populacao1 == populacao2) {
                printf("Empate!\n");
            } else if (populacao1 > populacao2) {
                printf("%s venceu!\n", cidade1);
            } else {
                printf("%s venceu!\n", cidade2);
            }
            break;

        case 2:
            printf("Área: %.2f x %.2f\n", area1, area2);
            if (area1 == area2) {
                printf("Empate!\n");
            } else if (area1 > area2) {
                printf("%s venceu!\n", cidade1);
            } else {
                printf("%s venceu!\n", cidade2);
            }
            break;

        case 3:
            printf("PIB (em reais): %.2f x %.2f\n", PIB1, PIB2);
            if (PIB1 == PIB2) {
                printf("Empate!\n");
            } else if (PIB1 > PIB2) {
                printf("%s venceu!\n", cidade1);
            } else {
                printf("%s venceu!\n", cidade2);
            }
            break;

        case 4:
            printf("Pontos turísticos: %d x %d\n", pontos1, pontos2);
            if (pontos1 == pontos2) {
                printf("Empate!\n");
            } else if (pontos1 > pontos2) {
                printf("%s venceu!\n", cidade1);
            } else {
                printf("%s venceu!\n", cidade2);
            }
            break;

        case 5:
            printf("Densidade: %.2f x %.2f\n", densidade1, densidade2);
            if (densidade1 == densidade2) {
                printf("Empate!\n");
            } else if (densidade1 < densidade2) {
                printf("%s venceu!\n", cidade1);
            } else {
                printf("%s venceu!\n", cidade2);
            }
            break;

        case 6:
            printf("PIB per capita: %.2f x %.2f\n", capita1, capita2);
            if (capita1 == capita2) {
                printf("Empate!\n");
            } else if (capita1 > capita2) {
                printf("%s venceu!\n", cidade1);
            } else {
                printf("%s venceu!\n", cidade2);
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}