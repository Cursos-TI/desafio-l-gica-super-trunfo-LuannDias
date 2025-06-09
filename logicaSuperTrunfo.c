#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

// Este código reutiliza meu código inicial do Tema 1 - Cadastro das Cartas.
// Caso deseje conferir, segue o link do repositório Git do código do Tema 1:
// https://github.com/Cursos-TI/desafio-cadastro-das-cartas-no-super-trunfo-LuannDias

// Desafio: Nível Novato - Concluído (Luann - 09/06/2025)
// Código reutilizado (copiado) do programa do Tema 1 - Cadastro das Cartas
// Criada sessão que compara o atributo das cartas (neste caso, população) usando estrutura if-else.
// A comparação decide qual cidade vence com base nesse atributo.

// Desafio: Nível Aventureiro - Concluído (Luann - 09/06/2025)
// Realizei uma alteração no código. Percebi que o enunciado do desafio Nível Aventureiro trata o jogo com atributos diferentes dos que foram usados no Tema 1.
// Agora o jogo recebe cartas de países, e não mais de cidades, então mudei o código de cadastro das cartas para o novo modelo de países.
// Foi alterada a sessão que compara os atributos das cartas. Agora o jogador escolhe qual atributo será comparado através de um menu interativo usando switch.

int main() {
    // Variáveis para a primeira carta, usando a convenção camelCase
    char nomePaisCarta1[25];
    int numeroPontosTuristicosCarta1;
    unsigned long int populacaoCarta1;
    float areaKm2Carta1, pibCarta1;
    float densidadeDemograficaCarta1;

    // Entrada de dados para a carta 1
    printf("Responda abaixo, usando o teclado, as informações da 1ª carta:\n");
    printf("Digite o nome do país da carta, usando apenas países com nomes únicos (ex.: Brasil, Argentina): ");
    scanf("%s", nomePaisCarta1);
    printf("Digite o número da população da carta, usando um número inteiro (ex.: 1000): ");
    scanf("%lu", &populacaoCarta1);
    printf("Digite a área em km² da carta, usando um número com ponto flutuante (ex.: 5000.00): ");
    scanf("%f", &areaKm2Carta1);
    printf("Digite o PIB da carta, usando um número com ponto flutuante (ex.: 5000.00): ");
    scanf("%f", &pibCarta1);
    printf("Digite o número de pontos turísticos da carta, usando um número inteiro (ex.: 20): ");
    scanf("%d", &numeroPontosTuristicosCarta1);

    // Cálculo da densidade demográfica da carta 1
    densidadeDemograficaCarta1 = (double) populacaoCarta1 / areaKm2Carta1;

    // Saída de dados para a carta 1
    printf("\n====================================\n");
    printf("Carta 1:\n");
    printf("Nome do país: %s\n", nomePaisCarta1);
    printf("População: %lu\n", populacaoCarta1);
    printf("Área: %.2f km²\n", areaKm2Carta1);
    printf("PIB: %.2f\n", pibCarta1);
    printf("Número de pontos turísticos: %d\n", numeroPontosTuristicosCarta1);
    printf("Densidade demográfica: %.2f hab/km²\n", densidadeDemograficaCarta1);

    // Variáveis para a segunda carta, usando a convenção camelCase
    char nomePaisCarta2[25];
    int numeroPontosTuristicosCarta2;
    unsigned long int populacaoCarta2;
    float areaKm2Carta2, pibCarta2;
    float densidadeDemograficaCarta2;

    // Entrada de dados para a carta 2
    printf("\n");
    printf("Responda abaixo, usando o teclado, as informações da 2ª carta:\n");
    printf("Digite o nome do país da carta, usando apenas países com nomes únicos (ex.: Brasil, Argentina): ");
    scanf("%s", nomePaisCarta2);
    printf("Digite o número da população da carta, usando um número inteiro (ex.: 1000): ");
    scanf("%lu", &populacaoCarta2);
    printf("Digite a área em km² da carta, usando um número com ponto flutuante (ex.: 5000.00): ");
    scanf("%f", &areaKm2Carta2);
    printf("Digite o PIB da carta, usando um número com ponto flutuante (ex.: 5000.00): ");
    scanf("%f", &pibCarta2);
    printf("Digite o número de pontos turísticos da carta, usando um número inteiro (ex.: 20): ");
    scanf("%d", &numeroPontosTuristicosCarta2);

    // Cálculo da densidade demográfica da carta 2
    densidadeDemograficaCarta2 = (double) populacaoCarta2 / areaKm2Carta2;

    // Saída de dados para a carta 2
    printf("\n====================================\n");
    printf("Carta 2:\n");
    printf("Nome do país: %s\n", nomePaisCarta2);
    printf("População: %lu\n", populacaoCarta2);
    printf("Área: %.2f km²\n", areaKm2Carta2);
    printf("PIB: %.2f\n", pibCarta2);
    printf("Número de pontos turísticos: %d\n", numeroPontosTuristicosCarta2);
    printf("Densidade demográfica: %.2f hab/km²\n", densidadeDemograficaCarta2);

    // Comparação de cartas, usando switch para criar um menu que permite escolher qual atributo será usado na comparação
    int escolha;

    printf("\n");
    printf("### Menu de comparação das cartas ###\n");
    printf("*Com exceção de densidade demográfica, o maior valor vence!*\n");
    printf("Escolha um dos atributos para comparar entre as cartas:\n");
    printf("1. População\n");
    printf("2. Área em km²\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Digite o número referente ao atributo que deseja comparar: ");
    scanf("%d", &escolha);
    printf("\n");

    switch (escolha)
    {
    case 1:
        if (populacaoCarta1 > populacaoCarta2) {
            printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
            printf("Comparação entre populações\n");
            printf("%s = %lu e %s = %lu\n", nomePaisCarta1, populacaoCarta1, nomePaisCarta2, populacaoCarta2);
            printf("Carta 1 (%s) venceu!\n", nomePaisCarta1);
        } else if (populacaoCarta1 < populacaoCarta2) {
            printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
            printf("Comparação entre populações\n");
            printf("%s = %lu e %s = %lu\n", nomePaisCarta1, populacaoCarta1, nomePaisCarta2, populacaoCarta2);
            printf("Carta 2 (%s) venceu!\n", nomePaisCarta2);
        } else {
            printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
            printf("Comparação entre populações\n");
            printf("%s = %lu e %s = %lu\n", nomePaisCarta1, populacaoCarta1, nomePaisCarta2, populacaoCarta2);
            printf("Houve um empate!\n");
        }
        break;
    case 2:
        if (areaKm2Carta1 > areaKm2Carta2) {
            printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
            printf("Comparação entre áreas em km²\n");
            printf("%s = %.2f e %s = %.2f\n", nomePaisCarta1, areaKm2Carta1, nomePaisCarta2, areaKm2Carta2);
            printf("Carta 1 (%s) venceu!\n", nomePaisCarta1);
        } else if (areaKm2Carta1 < areaKm2Carta2) {
            printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
            printf("Comparação entre áreas em km²\n");
            printf("%s = %.2f e %s = %.2f\n", nomePaisCarta1, areaKm2Carta1, nomePaisCarta2, areaKm2Carta2);
            printf("Carta 2 (%s) venceu!\n", nomePaisCarta2);
        } else {
            printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
            printf("Comparação entre áreas em km²\n");
            printf("%s = %.2f e %s = %.2f\n", nomePaisCarta1, areaKm2Carta1, nomePaisCarta2, areaKm2Carta2);
            printf("Houve um empate!\n");
        }
        break;
    case 3:
        if (pibCarta1 > pibCarta2) {
            printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
            printf("Comparação entre PIBs\n");
            printf("%s = %.2f e %s = %.2f\n", nomePaisCarta1, pibCarta1, nomePaisCarta2, pibCarta2);
            printf("Carta 1 (%s) venceu!\n", nomePaisCarta1);
        } else if (pibCarta1 < pibCarta2) {
            printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
            printf("Comparação entre PIBs\n");
            printf("%s = %.2f e %s = %.2f\n", nomePaisCarta1, pibCarta1, nomePaisCarta2, pibCarta2);
            printf("Carta 2 (%s) venceu!\n", nomePaisCarta2);
        } else {
            printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
            printf("Comparação entre PIBs\n");
            printf("%s = %.2f e %s = %.2f\n", nomePaisCarta1, pibCarta1, nomePaisCarta2, pibCarta2);
            printf("Houve um empate!\n");
        }
        break;
    case 4:
        if (numeroPontosTuristicosCarta1 > numeroPontosTuristicosCarta2) {
            printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
            printf("Comparação entre número de pontos turísticos\n");
            printf("%s = %d e %s = %d\n", nomePaisCarta1, numeroPontosTuristicosCarta1, nomePaisCarta2, numeroPontosTuristicosCarta2);
            printf("Carta 1 (%s) venceu!\n", nomePaisCarta1);
        } else if (numeroPontosTuristicosCarta1 < numeroPontosTuristicosCarta2) {
            printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
            printf("Comparação entre número de pontos turísticos\n");
            printf("%s = %d e %s = %d\n", nomePaisCarta1, numeroPontosTuristicosCarta1, nomePaisCarta2, numeroPontosTuristicosCarta2);
            printf("Carta 2 (%s) venceu!\n", nomePaisCarta2);
        } else {
            printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
            printf("Comparação entre número de pontos turísticos\n");
            printf("%s = %d e %s = %d\n", nomePaisCarta1, numeroPontosTuristicosCarta1, nomePaisCarta2, numeroPontosTuristicosCarta2);
            printf("Houve um empate!\n");
        }
        break;
    case 5:
        if (densidadeDemograficaCarta1 < densidadeDemograficaCarta2) {
            printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
            printf("Comparação entre densidade demográfica (nesse caso, o menor valor vence)\n");
            printf("%s = %.2f e %s = %.2f\n", nomePaisCarta1, densidadeDemograficaCarta1, nomePaisCarta2, densidadeDemograficaCarta2);
            printf("Carta 1 (%s) venceu!\n", nomePaisCarta1);
        } else if (densidadeDemograficaCarta1 > densidadeDemograficaCarta2) {
            printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
            printf("Comparação entre densidade demográfica (nesse caso, o menor valor vence)\n");
            printf("%s = %.2f e %s = %.2f\n", nomePaisCarta1, densidadeDemograficaCarta1, nomePaisCarta2, densidadeDemograficaCarta2);
            printf("Carta 2 (%s) venceu!\n", nomePaisCarta2);
        } else {
            printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
            printf("Comparação entre densidade demográfica (nesse caso, o menor valor vence)\n");
            printf("%s = %.2f e %s = %.2f\n", nomePaisCarta1, densidadeDemograficaCarta1, nomePaisCarta2, densidadeDemograficaCarta2);
            printf("Houve um empate!\n");
        }
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}
