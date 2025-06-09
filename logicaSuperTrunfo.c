#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

// Este código reutiliza meu código inicial do Tema 1 - Cadastro das Cartas.
// Caso deseje conferir, segue o link do repositório Git do código do Tema 1:
// https://github.com/Cursos-TI/desafio-cadastro-das-cartas-no-super-trunfo-LuannDias

// Desafio: Nível Novato - Concluído (Luann - 09/06/2025)


int main() {
    // Variáveis para a primeira carta, usando a convenção camelCase
    char estadoCarta1, codigoCarta1[10], nomeCidadeCarta1[20];
    int numeroPontosTuristicosCarta1;
    unsigned long int populacaoCarta1;
    float areaKm2Carta1, pibCarta1;
    float densidadePopulacionalCarta1, pibPerCapitaCarta1;

    // Entrada de dados para a carta 1
    printf("Responda abaixo, usando o teclado, as informações da 1ª carta:\n");
    printf("Digite a letra que representa o estado ao qual a cidade da carta pertence (ex.: A): ");
    scanf(" %c", &estadoCarta1);
    printf("Digite o código da carta (ex.: A01): ");
    scanf("%s", codigoCarta1);
    printf("Digite o nome da cidade da carta, use apenas cidades com nomes únicos (ex.: Natal, Fortaleza): ");
    scanf("%s", nomeCidadeCarta1);
    printf("Digite o número da população da cidade da carta, usando um número inteiro (ex.: 1000): ");
    scanf("%lu", &populacaoCarta1);
    printf("Digite a área em km² da cidade da carta, usando um número com ponto flutuante (ex.: 5000.00): ");
    scanf("%f", &areaKm2Carta1);
    printf("Digite o PIB da cidade da carta, usando um número com ponto flutuante (ex.: 5000.00): ");
    scanf("%f", &pibCarta1);
    printf("Digite o número de pontos turísticos da cidade da carta, usando um número inteiro (ex.: 20): ");
    scanf("%d", &numeroPontosTuristicosCarta1);

    // Cálculos da densidade populacional e do PIB per capita da carta 1
    densidadePopulacionalCarta1 = (double) populacaoCarta1 / areaKm2Carta1;
    pibPerCapitaCarta1 = pibCarta1 / populacaoCarta1;

    // Cálculo do superpoder da carta 1 e do inverso da densidade populacional
    float inversoDensidadeCarta1 = 1 / densidadePopulacionalCarta1;
    float superPoderCarta1 = (float) populacaoCarta1 + areaKm2Carta1 + pibCarta1 + (float) numeroPontosTuristicosCarta1 + pibPerCapitaCarta1 + inversoDensidadeCarta1;

    // Saída de dados para a carta 1
    printf("\n====================================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta1);
    printf("População: %lu\n", populacaoCarta1);
    printf("Área: %.2f km²\n", areaKm2Carta1);
    printf("PIB: %.2f bilhões de reais\n", pibCarta1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicosCarta1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalCarta1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaCarta1);
    printf("Super Porder: %.2f\n", superPoderCarta1);

    // Variáveis para a segunda carta, usando a convenção camelCase
    char estadoCarta2, codigoCarta2[10], nomeCidadeCarta2[20];
    int numeroPontosTuristicosCarta2;
    unsigned long int populacaoCarta2;
    float areaKm2Carta2, pibCarta2;
    float densidadePopulacionalCarta2, pibPerCapitaCarta2;

    // Entrada de dados para a carta 2
    printf("\n");
    printf("Responda abaixo, usando o teclado, as informações da 2ª carta:\n");
    printf("Digite a letra que representa o estado ao qual a cidade da carta pertence (ex.: A): ");
    scanf(" %c", &estadoCarta2);
    printf("Digite o código da carta (ex.: A01): ");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade da carta, use apenas cidades com nomes únicos (ex.: Natal, Fortaleza): ");
    scanf("%s", nomeCidadeCarta2);
    printf("Digite o número da população da cidade da carta, usando um número inteiro (ex.: 1000): ");
    scanf("%lu", &populacaoCarta2);
    printf("Digite a área em km² da cidade da carta, usando um número com ponto flutuante (ex.: 5000.00): ");
    scanf("%f", &areaKm2Carta2);
    printf("Digite o PIB da cidade da carta, usando um número com ponto flutuante (ex.: 5000.00): ");
    scanf("%f", &pibCarta2);
    printf("Digite o número de pontos turísticos da cidade da carta, usando um número inteiro (ex.: 20): ");
    scanf("%d", &numeroPontosTuristicosCarta2);

    // Cálculos da densidade populacional e do PIB per capita da carta 1
    densidadePopulacionalCarta2 = (double) populacaoCarta2 / areaKm2Carta2;
    pibPerCapitaCarta2 = pibCarta2 / populacaoCarta2;

    // Cálculo do superpoder da carta 1 e do inverso da densidade populacional
    float inversoDensidadeCarta2 = 1 / densidadePopulacionalCarta2;
    float superPoderCarta2 = (float) populacaoCarta2 + areaKm2Carta2 + pibCarta2 + (float) numeroPontosTuristicosCarta2 + pibPerCapitaCarta2 + inversoDensidadeCarta2;

    // Saída de dados para a carta 2
    printf("\n====================================\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta2);
    printf("População: %lu\n", populacaoCarta2);
    printf("Área: %.2f km²\n", areaKm2Carta2);
    printf("PIB: %.2f bilhões de reais\n", pibCarta2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicosCarta2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalCarta2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaCarta2);
    printf("Super Porder: %.2f\n", superPoderCarta2);

    // Comparação de cartas usando o atributo população
    // Saída de dados exibindo o atributo a ser comparado e o valor que cada cidade possui desse atributo
    printf("\n");
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%c): %lu\n", nomeCidadeCarta1, estadoCarta1, populacaoCarta1);
    printf("Carta 2 - %s (%c): %lu\n", nomeCidadeCarta2, estadoCarta2, populacaoCarta2);

    // Comparação do atributo usando estrutura if-else para determinar e exibir a cidade vencedora
    if (populacaoCarta1 > populacaoCarta2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidadeCarta1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidadeCarta2);
    }

    return 0;
}
