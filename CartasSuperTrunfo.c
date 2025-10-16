#include <stdio.h>

// Estrutura da carta
struct Carta {
    char estado[3];
    char nomeCidade[50];
    int codigo;
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
};

int main() {
    struct Carta carta1, carta2;

    // ===== LEITURA DOS DADOS =====
    printf("===== CARTA 1 =====\n");
    printf("Estado (ex: SP): ");
    scanf("%2s", carta1.estado);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);
    printf("Codigo da carta: ");
    scanf("%d", &carta1.codigo);
    printf("Populacao: ");
    scanf("%lu", &carta1.populacao);
    printf("Area (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos automáticos
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000.0) / carta1.populacao;
    carta1.superPoder = (float)carta1.populacao + carta1.area + carta1.pib +
                        carta1.pontosTuristicos + carta1.pibPerCapita +
                        (1.0 / carta1.densidadePopulacional);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado (ex: RJ): ");
    scanf("%2s", carta2.estado);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);
    printf("Codigo da carta: ");
    scanf("%d", &carta2.codigo);
    printf("Populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Area (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos automáticos
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000.0) / carta2.populacao;
    carta2.superPoder = (float)carta2.populacao + carta2.area + carta2.pib +
                        carta2.pontosTuristicos + carta2.pibPerCapita +
                        (1.0 / carta2.densidadePopulacional);

    // ===== COMPARAÇÕES =====
    printf("\n===== COMPARACAO DE CARTAS =====\n");

    // População
    printf("Populacao: Carta %d venceu (%d)\n",
           (carta1.populacao > carta2.populacao) ? 1 : 2,
           (carta1.populacao > carta2.populacao));

    // Área
    printf("Area: Carta %d venceu (%d)\n",
           (carta1.area > carta2.area) ? 1 : 2,
           (carta1.area > carta2.area));

    // PIB
    printf("PIB: Carta %d venceu (%d)\n",
           (carta1.pib > carta2.pib) ? 1 : 2,
           (carta1.pib > carta2.pib));

    // Pontos Turísticos
    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           (carta1.pontosTuristicos > carta2.pontosTuristicos) ? 1 : 2,
           (carta1.pontosTuristicos > carta2.pontosTuristicos));

    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (carta1.densidadePopulacional < carta2.densidadePopulacional) ? 1 : 2,
           (carta1.densidadePopulacional < carta2.densidadePopulacional));

    // PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (carta1.pibPerCapita > carta2.pibPerCapita) ? 1 : 2,
           (carta1.pibPerCapita > carta2.pibPerCapita));

    // Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n",
           (carta1.superPoder > carta2.superPoder) ? 1 : 2,
           (carta1.superPoder > carta2.superPoder));

    printf("\n===== FIM DO JOGO =====\n");

    return 0;
}
