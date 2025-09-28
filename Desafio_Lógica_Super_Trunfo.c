#include <stdio.h>

int main() {
    // ---------------- Carta 1 ----------------
    char estado1[20];
    char codigo1[20];
    char cidade1[30];
    int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, percapita1;

    printf("Carta 1:\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (m²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cálculos carta 1
    densidade1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;

    printf("======================================\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f m²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/m²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);
    printf("======================================\n");

    // ---------------- Carta 2 ----------------
    char estado2[20];
    char codigo2[20];
    char cidade2[30];
    int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, percapita2;

    printf("Carta 2:\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (m²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos carta 2
    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;

    printf("======================================\n");
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f m²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/m²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", percapita2);
    printf("======================================\n");

    // ---------------- Comparação ----------------

    // Superpoder calculado 
    float superpoder1 = populacao1 + pontos1 + pib1 + area1 + densidade1 + percapita1;
    float superpoder2 = populacao2 + pontos2 + pib2 + area2 + densidade2 + percapita2;

    // Resultado das comparações
    int resultado;
    char* vencedor[2] = { "Carta 2 venceu", "Carta 1 venceu" };

    printf("\nComparação de Cartas:\n");

    resultado = populacao1 >= populacao2;
    printf("População: %s\n", vencedor[resultado]);

    resultado = area1 >= area2;
    printf("Área: %s\n", vencedor[resultado]);

    resultado = pib1 >= pib2;
    printf("PIB: %s\n", vencedor[resultado]);

    resultado = pontos1 >= pontos2;
    printf("Pontos turísticos: %s\n", vencedor[resultado]);

    resultado = densidade1 >= densidade2;
    printf("Densidade Populacional: %s\n", vencedor[resultado]);

    resultado = percapita1 >= percapita2;
    printf("PIB per Capita: %s\n", vencedor[resultado]);

    resultado = superpoder1 >= superpoder2;
    printf("Super Poder: %s\n", vencedor[resultado]);

    return 0;
}
