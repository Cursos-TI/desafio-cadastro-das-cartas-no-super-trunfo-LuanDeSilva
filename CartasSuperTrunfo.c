#incluir <stdio.h>

int principal() {
    // Variáveis ​​para carta 1
    char nomeCidade1[50];
    int população1;
    área flutuante1;
    flutuar pib1;
    int pontosTurísticos1;

    // Variáveis ​​para carta 2
    char nomeCidade2[50];
    int população2;
    área flutuante2;
    flutuar pib2;
    int pontosTurísticos2;

    int opção;

    // Entrada dos dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTurísticos1);

    // Entrada dos dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Menu de comparação
    printf("\n=== Escolha o atributo para comparar ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n=== Resultado da Rodada ===\n");
    switch (opção) {
        caso 1:
            se (população1 > população2)
                printf("%s venceu com maior população!\n", nomeCidade1);
            senão se (populacao2 > populacao1)
                printf("%s venceu com maior população!\n", nomeCidade2);
            outro
                printf("Empate em População!\n");
            quebrar;

        caso 2:
            se (área1 > área2)
                printf("%s vencidos com maior Área!\n", nomeCidade1);
            senão se (área2 > área1)
                printf("%s vencidos com maior Área!\n", nomeCidade2);
            outro
                printf("Empate em Área!\n");
            quebrar;

        caso 3:
            se (pib1 > pib2)
                printf("%s venceu com maior PIB!\n", nomeCidade1);
            senão se (pib2 > pib1)
                printf("%s venceu com maior PIB!\n", nomeCidade2);
            outro
                printf("Empate em PIB!\n");
            quebrar;

        caso 4:
            if (pontosTurísticos1 > pontosTurísticos2)
                printf("%s venceu com mais Pontos Turísticos!\n", nomeCidade1);
            else if (pontosTurísticos2 > pontosTurísticos1)
                printf("%s venceu com mais Pontos Turísticos!\n", nomeCidade2);
            outro
                printf("Empate em Pontos Turísticos!\n");
            quebrar;

        padrão:
            printf("Opção inválida!\n");
    }

    retornar 0;
}
