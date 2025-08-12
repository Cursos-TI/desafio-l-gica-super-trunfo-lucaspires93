#include <stdio.h>
#include <string.h>



int main() {
    char estado1[3], estado2[3];
    char codigo1[5], codigo2[5];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    printf("\n=== NÍVEL NOVATO ===\n");

    // Cadastro da Carta 1
    printf("\nCadastro da Carta 1:\n\n");

    printf("Estado: ");
    scanf("%s", estado1);
    printf("\n");

    printf("Código: ");
    scanf("%s", codigo1);
    printf("\n");

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("\n");

    printf("População: ");
    scanf("%d", &populacao1);
    printf("\n");

    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("\n");

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("\n");

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n\n");

    printf("Estado: ");
    scanf("%s", estado2);
    printf("\n");

    printf("Código: ");
    scanf("%s", codigo2);
    printf("\n");

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("\n");

    printf("População: ");
    scanf("%d", &populacao2);
    printf("\n");

    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("\n");

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("\n");

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Comparação
    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n\n");
    printf("Comparando por POPULAÇÃO...\n");
    if (populacao1 > populacao2)
        printf("Vencedora: %s (Carta 1)\n", nomeCidade1);
    else if (populacao2 > populacao1)
        printf("Vencedora: %s (Carta 2)\n", nomeCidade2);
    else
        printf("Empate!\n");

    return 0;
}
