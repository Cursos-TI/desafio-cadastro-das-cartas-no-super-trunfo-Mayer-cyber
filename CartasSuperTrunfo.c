#include <stdio.h>

int main() {
    // Variáveis para os dados da Carta 1
    char estado1 = 'GOIAS';
    char codigo1[5] = "A01";
    char cidade1[100] = "Goiânia";
    int populacao1 = 12325000;
    float area1 = 1521.11, pib1 = 699.28;
    int pontosTuristicos1 = 50;

    // Variáveis para os dados da Carta 2
    char estado2 = 'Ceára';
    char codigo2[5] = "B02";
    char cidade2[100] = "Fortaleza";
    int populacao2 = 6748000;
    float area2 = 1200.25, pib2 = 300.50;
    int pontosTuristicos2 = 30;

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
