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

    // Exibição dos dados
    printf("\n--- Dados das Cartas ---\n");

    printf("\nCarta 1:\nEstado: %s\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\n",
           Estado1, codigoC1, nome_cidade1, populacao1, areakm1, pib1, numero_pontos_turisticos1, densidade1, pib_per_capita1);

    printf("\nCarta 2:\nEstado: %s\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\n",
           Estado2, codigoC2, nome_cidade2, populacao2, areakm2, pib2, numero_pontos_turisticos2, densidade2, pib_per_capita2);

    // Comparação baseada em PIB per capita
    printf("\n--- Comparação de Cartas (Atributo: PIB per Capita) ---\n");

    printf("%s (%.2f) vs %s (%.2f)\n", nome_cidade1, pib_per_capita1, nome_cidade2, pib_per_capita2);

    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 (%s - %s) venceu!\n", nome_cidade1, Estado1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Resultado: Carta 2 (%s - %s) venceu!\n", nome_cidade2, Estado2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
