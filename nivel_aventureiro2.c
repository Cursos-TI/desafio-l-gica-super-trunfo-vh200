#include <stdio.h>

int main() {
    // Informações da carta 1
    char Estado1[50], codigoC1[50], nome_cidade1[50];
    unsigned long int populacao1;
    float areakm1, pib1;
    int numero_pontos_turisticos1;
    float densidade1, pib_per_capita1;

    // Informações da carta 2
    char Estado2[50], codigoC2[50], nome_cidade2[50];
    unsigned long int populacao2;
    float areakm2, pib2;
    int numero_pontos_turisticos2;
    float densidade2, pib_per_capita2;

    int opcao;

    // Entrada Carta 1
    printf("Carta 1\n");
    printf("Estado: ");
    scanf("%49s", Estado1);
    printf("Código da Carta: ");
    scanf("%49s", codigoC1);
    printf("Nome da Cidade: ");
    scanf("%49s", nome_cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &areakm1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &numero_pontos_turisticos1);

    // Entrada Carta 2
    printf("\nCarta 2\n");
    printf("Estado: ");
    scanf("%49s", Estado2);
    printf("Código da Carta: ");
    scanf("%49s", codigoC2);
    printf("Nome da Cidade: ");
    scanf("%49s", nome_cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &areakm2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &numero_pontos_turisticos2);

    // Cálculos
    densidade1 = populacao1 / areakm1;
    densidade2 = populacao2 / areakm2;

    pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1;
    pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;

    // Menu interativo
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n--- Comparação ---\n");

    switch (opcao) {
        case 1:
            printf("População: %lu vs %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Carta 1 (%s) venceu!\n", nome_cidade1);
            else if (populacao2 > populacao1)
                printf("Carta 2 (%s) venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área: %.2f vs %.2f\n", areakm1, areakm2);
            if (areakm1 > areakm2)
                printf("Carta 1 (%s) venceu!\n", nome_cidade1);
            else if (areakm2 > areakm1)
                printf("Carta 2 (%s) venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB: %.2f vs %.2f\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Carta 1 (%s) venceu!\n", nome_cidade1);
            else if (pib2 > pib1)
                printf("Carta 2 (%s) venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos: %d vs %d\n", numero_pontos_turisticos1, numero_pontos_turisticos2);
            if (numero_pontos_turisticos1 > numero_pontos_turisticos2)
                printf("Carta 1 (%s) venceu!\n", nome_cidade1);
            else if (numero_pontos_turisticos2 > numero_pontos_turisticos1)
                printf("Carta 2 (%s) venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade Demográfica: %.2f vs %.2f\n", densidade1, densidade2);
            if (densidade1 < densidade2)
                printf("Carta 1 (%s) venceu! (menor densidade)\n", nome_cidade1);
            else if (densidade2 < densidade1)
                printf("Carta 2 (%s) venceu! (menor densidade)\n", nome_cidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("PIB per Capita: %.2f vs %.2f\n", pib_per_capita1, pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2)
                printf("Carta 1 (%s) venceu!\n", nome_cidade1);
            else if (pib_per_capita2 > pib_per_capita1)
                printf("Carta 2 (%s) venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}
