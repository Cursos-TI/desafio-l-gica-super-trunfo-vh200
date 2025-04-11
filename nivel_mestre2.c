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

    int atributo1, atributo2;
    float soma1 = 0, soma2 = 0;

    // Menu - Primeiro atributo
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    // Menu - Segundo atributo
    do {
        printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("6 - PIB per Capita\n");
        printf("Opção: ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1) {
            printf("Você já escolheu esse atributo! Escolha outro.\n");
        }
    } while (atributo2 == atributo1);

    for (int i = 1; i <= 2; i++) {
        int attr = (i == 1) ? atributo1 : atributo2;
        float v1 = 0, v2 = 0;

        switch (attr) {
            case 1:
                v1 = populacao1;
                v2 = populacao2;
                break;
            case 2:
                v1 = areakm1;
                v2 = areakm2;
                break;
            case 3:
                v1 = pib1;
                v2 = pib2;
                break;
            case 4:
                v1 = numero_pontos_turisticos1;
                v2 = numero_pontos_turisticos2;
                break;
            case 5:
                v1 = densidade1;
                v2 = densidade2;
                break;
            case 6:
                v1 = pib_per_capita1;
                v2 = pib_per_capita2;
                break;
        }

        soma1 += v1;
        soma2 += v2;

        printf("\nComparando %s:\n", 
            (attr == 1) ? "População" :
            (attr == 2) ? "Área" :
            (attr == 3) ? "PIB" :
            (attr == 4) ? "Pontos Turísticos" :
            (attr == 5) ? "Densidade Demográfica" :
            "PIB per Capita"
        );
        printf("%s: %.2f | %s: %.2f\n", nome_cidade1, v1, nome_cidade2, v2);

        if (attr == 5) {
            if (v1 < v2)
                printf("Vantagem: %s (menor densidade)\n", nome_cidade1);
            else if (v2 < v1)
                printf("Vantagem: %s (menor densidade)\n", nome_cidade2);
            else
                printf("Empate neste atributo!\n");
        } else {
            if (v1 > v2)
                printf("Vantagem: %s\n", nome_cidade1);
            else if (v2 > v1)
                printf("Vantagem: %s\n", nome_cidade2);
            else
                printf("Empate neste atributo!\n");
        }
    }

    printf("\n--- Resultado Final ---\n");
    printf("Soma dos Atributos:\n");
    printf("%s: %.2f\n", nome_cidade1, soma1);
    printf("%s: %.2f\n", nome_cidade2, soma2);

    if (soma1 > soma2)
        printf("VENCEDORA: Carta 1 - %s\n", nome_cidade1);
    else if (soma2 > soma1)
        printf("VENCEDORA: Carta 2 - %s\n", nome_cidade2);
    else
        printf("Empate!\n");

    return 0;
}
