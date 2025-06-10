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

// Desafio: Nível Mestre - Concluído (Luann - 09/06/2025)
// Alterada a parte de comparação das cartas: agora os jogadores escolhem dois atributos para comparar.
// O programa compara os atributos separadamente usando estruturas switch.
// Também soma os dois atributos de cada carta e compara essas somas.
// Foi adicionado tratamento de erro com if-else, exibindo mensagem caso as escolhas sejam iguais ou inválidas.

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
    densidadeDemograficaCarta1 = (double)populacaoCarta1 / areaKm2Carta1;

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
    densidadeDemograficaCarta2 = (double)populacaoCarta2 / areaKm2Carta2;

    // Saída de dados para a carta 2
    printf("\n====================================\n");
    printf("Carta 2:\n");
    printf("Nome do país: %s\n", nomePaisCarta2);
    printf("População: %lu\n", populacaoCarta2);
    printf("Área: %.2f km²\n", areaKm2Carta2);
    printf("PIB: %.2f\n", pibCarta2);
    printf("Número de pontos turísticos: %d\n", numeroPontosTuristicosCarta2);
    printf("Densidade demográfica: %.2f hab/km²\n", densidadeDemograficaCarta2);

    // Sessão que faz a comparação de cartas. O jogador escolhe duas opções de atributos para comparar.
    // Se as escolhas forem válidas e diferentes, o programa então faz a comparação individual para cada atributo escolhido,
    // exibe o resultado e acumula o valor de cada atributo em uma variável para, depois, comparar a soma dos atributos e decidir a carta vencedora.

    // Variáveis usadas durante a sessão de comparação
    int escolha1, escolha2;
    float somaDosAtributosCarta1, somaDosAtributosCarta2;

    // Primeira escolha do jogador: todas as opções são exibidas, junto com mensagens adicionais com explicações
    printf("\n");
    printf("### Menu de comparação das cartas ###\n");
    printf("Você poderá escolher 2 atributos para comparar entre as cartas.\n");
    printf("Escolha o PRIMEIRO atributo para comparar entre as cartas:\n");
    printf("*Com exceção de densidade demográfica, o maior valor vence!*\n");
    printf("1. População\n");
    printf("2. Área em km²\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Digite o número referente ao atributo que deseja comparar: ");
    scanf("%d", &escolha1);
    printf("\n");

    // Segunda escolha do jogador: o programa verifica e oculta a opção já selecionada anteriormente, evitando que o mesmo atributo seja exibido novamente.
    printf("Escolha o SEGUNDO atributo para comparar entre as cartas:\n");
    printf("O atributo que você escolheu na primeira opção não pode mais ser escolhido.\n");
    printf("*Com exceção de densidade demográfica, o maior valor vence!*\n");
    if (escolha1 != 1) {
        printf("1. População\n");
    }
    if (escolha1 != 2) {
        printf("2. Área em km²\n");
    }
    if (escolha1 != 3) {
        printf("3. PIB\n");
    }
    if (escolha1 != 4) {
        printf("4. Número de pontos turísticos\n");
    }
    if (escolha1 != 5) {
        printf("5. Densidade demográfica\n");
    }
    printf("Digite o número referente ao atributo que deseja comparar: ");
    scanf("%d", &escolha2);
    printf("\n");

    // printf para separar as informações das cartas das informações das comparações
    printf("### Resultado das comparações ###\n");

    // Verificação das escolhas do jogador: o programa só continuará se o jogador tiver escolhido atributos válidos e diferentes. Caso contrário, será exibida uma mensagem de erro apropriada.
    if ((escolha1 != escolha2) && (escolha1 > 0 && escolha1 < 6) && (escolha2 > 0 && escolha2 < 6)) {

        // Se as escolhas do jogador forem válidas, o programa inicia as comparações e exibe os resultados.
        // Cada atributo escolhido é comparado separadamente e, ao final, as somas dos atributos são comparadas.

        // Comparação e exibição do primeiro atributo
        switch (escolha1) {
        case 1:
            if (populacaoCarta1 > populacaoCarta2) {
                printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
                printf("Comparação entre populações\n");
                printf("%s = %lu e %s = %lu (Carta 1 vence!)\n", nomePaisCarta1, populacaoCarta1, nomePaisCarta2, populacaoCarta2);
            } else if (populacaoCarta1 < populacaoCarta2) {
                printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
                printf("Comparação entre populações\n");
                printf("%s = %lu e %s = %lu (Carta 2 vence!)\n", nomePaisCarta1, populacaoCarta1, nomePaisCarta2, populacaoCarta2);
            } else {
                printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
                printf("Comparação entre populações\n");
                printf("%s = %lu e %s = %lu (Empate!)\n", nomePaisCarta1, populacaoCarta1, nomePaisCarta2, populacaoCarta2);
            }
            somaDosAtributosCarta1 += populacaoCarta1;
            somaDosAtributosCarta2 += populacaoCarta2;
            break;
        case 2:
            if (areaKm2Carta1 > areaKm2Carta2) {
                printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
                printf("Comparação entre áreas em km²\n");
                printf("%s = %.2f e %s = %.2f (Carta 1 vence!)\n", nomePaisCarta1, areaKm2Carta1, nomePaisCarta2, areaKm2Carta2);
            } else if (areaKm2Carta1 < areaKm2Carta2) {
                printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
                printf("Comparação entre áreas em km²\n");
                printf("%s = %.2f e %s = %.2f (Carta 2 vence!)\n", nomePaisCarta1, areaKm2Carta1, nomePaisCarta2, areaKm2Carta2);
            } else {
                printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
                printf("Comparação entre áreas em km²\n");
                printf("%s = %.2f e %s = %.2f (Empate!)\n", nomePaisCarta1, areaKm2Carta1, nomePaisCarta2, areaKm2Carta2);
            }
            somaDosAtributosCarta1 += areaKm2Carta1;
            somaDosAtributosCarta2 += areaKm2Carta2;
            break;
        case 3:
            if (pibCarta1 > pibCarta2) {
                printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
                printf("Comparação entre PIBs\n");
                printf("%s = %.2f e %s = %.2f (Carta 1 vence!)\n", nomePaisCarta1, pibCarta1, nomePaisCarta2, pibCarta2);
            } else if (pibCarta1 < pibCarta2) {
                printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
                printf("Comparação entre PIBs\n");
                printf("%s = %.2f e %s = %.2f (Carta 2 vence!)\n", nomePaisCarta1, pibCarta1, nomePaisCarta2, pibCarta2);
            } else {
                printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
                printf("Comparação entre PIBs\n");
                printf("%s = %.2f e %s = %.2f (Empate!)\n", nomePaisCarta1, pibCarta1, nomePaisCarta2, pibCarta2);
            }
            somaDosAtributosCarta1 += pibCarta1;
            somaDosAtributosCarta2 += pibCarta2;
            break;
        case 4:
            if (numeroPontosTuristicosCarta1 > numeroPontosTuristicosCarta2) {
                printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
                printf("Comparação entre número de pontos turísticos\n");
                printf("%s = %d e %s = %d (Carta 1 vence!)\n", nomePaisCarta1, numeroPontosTuristicosCarta1, nomePaisCarta2, numeroPontosTuristicosCarta2);
            } else if (numeroPontosTuristicosCarta1 < numeroPontosTuristicosCarta2) {
                printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
                printf("Comparação entre número de pontos turísticos\n");
                printf("%s = %d e %s = %d (Carta 2 vence!)\n", nomePaisCarta1, numeroPontosTuristicosCarta1, nomePaisCarta2, numeroPontosTuristicosCarta2);
            } else {
                printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
                printf("Comparação entre número de pontos turísticos\n");
                printf("%s = %d e %s = %d (Empate!)\n", nomePaisCarta1, numeroPontosTuristicosCarta1, nomePaisCarta2, numeroPontosTuristicosCarta2);
            }
            somaDosAtributosCarta1 += numeroPontosTuristicosCarta1;
            somaDosAtributosCarta2 += numeroPontosTuristicosCarta2;
            break;
        case 5:
            if (densidadeDemograficaCarta1 < densidadeDemograficaCarta2) {
                printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
                printf("Comparação entre densidade demográfica (nesse caso, o menor valor vence)\n");
                printf("%s = %.2f e %s = %.2f (Carta 1 vence!)\n", nomePaisCarta1, densidadeDemograficaCarta1, nomePaisCarta2, densidadeDemograficaCarta2);
            } else if (densidadeDemograficaCarta1 > densidadeDemograficaCarta2) {
                printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
                printf("Comparação entre densidade demográfica (nesse caso, o menor valor vence)\n");
                printf("%s = %.2f e %s = %.2f (Carta 2 vence!)\n", nomePaisCarta1, densidadeDemograficaCarta1, nomePaisCarta2, densidadeDemograficaCarta2);
            } else {
                printf("%s versus %s\n", nomePaisCarta1, nomePaisCarta2);
                printf("Comparação entre densidade demográfica (nesse caso, o menor valor vence)\n");
                printf("%s = %.2f e %s = %.2f (Empate!)\n", nomePaisCarta1, densidadeDemograficaCarta1, nomePaisCarta2, densidadeDemograficaCarta2);
            }
            somaDosAtributosCarta1 += densidadeDemograficaCarta1;
            somaDosAtributosCarta2 += densidadeDemograficaCarta2;
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }

        // Comparação e exibição do segundo atributo
        switch (escolha2) {
        case 1:
            if (populacaoCarta1 > populacaoCarta2) {
                printf("Comparação entre populações\n");
                printf("%s = %lu e %s = %lu (Carta 1 vence!)\n", nomePaisCarta1, populacaoCarta1, nomePaisCarta2, populacaoCarta2);
            } else if (populacaoCarta1 < populacaoCarta2) {
                printf("Comparação entre populações\n");
                printf("%s = %lu e %s = %lu (Carta 2 vence!)\n", nomePaisCarta1, populacaoCarta1, nomePaisCarta2, populacaoCarta2);
            } else {
                printf("Comparação entre populações\n");
                printf("%s = %lu e %s = %lu (Empate!)\n", nomePaisCarta1, populacaoCarta1, nomePaisCarta2, populacaoCarta2);
            }
            somaDosAtributosCarta1 += populacaoCarta1;
            somaDosAtributosCarta2 += populacaoCarta2;
            break;
        case 2:
            if (areaKm2Carta1 > areaKm2Carta2) {
                printf("Comparação entre áreas em km²\n");
                printf("%s = %.2f e %s = %.2f (Carta 1 vence!)\n", nomePaisCarta1, areaKm2Carta1, nomePaisCarta2, areaKm2Carta2);
            } else if (areaKm2Carta1 < areaKm2Carta2) {
                printf("Comparação entre áreas em km²\n");
                printf("%s = %.2f e %s = %.2f (Carta 2 vence!)\n", nomePaisCarta1, areaKm2Carta1, nomePaisCarta2, areaKm2Carta2);
            } else {
                printf("Comparação entre áreas em km²\n");
                printf("%s = %.2f e %s = %.2f (Empate!)\n", nomePaisCarta1, areaKm2Carta1, nomePaisCarta2, areaKm2Carta2);
            }
            somaDosAtributosCarta1 += areaKm2Carta1;
            somaDosAtributosCarta2 += areaKm2Carta2;
            break;
        case 3:
            if (pibCarta1 > pibCarta2) {
                printf("Comparação entre PIBs\n");
                printf("%s = %.2f e %s = %.2f (Carta 1 vence!)\n", nomePaisCarta1, pibCarta1, nomePaisCarta2, pibCarta2);
            } else if (pibCarta1 < pibCarta2) {
                printf("Comparação entre PIBs\n");
                printf("%s = %.2f e %s = %.2f (Carta 2 vence!)\n", nomePaisCarta1, pibCarta1, nomePaisCarta2, pibCarta2);
            } else {
                printf("Comparação entre PIBs\n");
                printf("%s = %.2f e %s = %.2f (Empate!)\n", nomePaisCarta1, pibCarta1, nomePaisCarta2, pibCarta2);
            }
            somaDosAtributosCarta1 += pibCarta1;
            somaDosAtributosCarta2 += pibCarta2;
            break;
        case 4:
            if (numeroPontosTuristicosCarta1 > numeroPontosTuristicosCarta2) {
                printf("Comparação entre número de pontos turísticos\n");
                printf("%s = %d e %s = %d (Carta 1 vence!)\n", nomePaisCarta1, numeroPontosTuristicosCarta1, nomePaisCarta2, numeroPontosTuristicosCarta2);
            } else if (numeroPontosTuristicosCarta1 < numeroPontosTuristicosCarta2) {
                printf("Comparação entre número de pontos turísticos\n");
                printf("%s = %d e %s = %d (Carta 2 vence!)\n", nomePaisCarta1, numeroPontosTuristicosCarta1, nomePaisCarta2, numeroPontosTuristicosCarta2);
            } else {
                printf("Comparação entre número de pontos turísticos\n");
                printf("%s = %d e %s = %d (Empate!)\n", nomePaisCarta1, numeroPontosTuristicosCarta1, nomePaisCarta2, numeroPontosTuristicosCarta2);
            }
            somaDosAtributosCarta1 += numeroPontosTuristicosCarta1;
            somaDosAtributosCarta2 += numeroPontosTuristicosCarta2;
            break;
        case 5:
            if (densidadeDemograficaCarta1 < densidadeDemograficaCarta2) {
                printf("Comparação entre densidade demográfica (nesse caso, o menor valor vence)\n");
                printf("%s = %.2f e %s = %.2f (Carta 1 vence!)\n", nomePaisCarta1, densidadeDemograficaCarta1, nomePaisCarta2, densidadeDemograficaCarta2);
            } else if (densidadeDemograficaCarta1 > densidadeDemograficaCarta2) {
                printf("Comparação entre densidade demográfica (nesse caso, o menor valor vence)\n");
                printf("%s = %.2f e %s = %.2f (Carta 2 vence!)\n", nomePaisCarta1, densidadeDemograficaCarta1, nomePaisCarta2, densidadeDemograficaCarta2);
            } else {
                printf("Comparação entre densidade demográfica (nesse caso, o menor valor vence)\n");
                printf("%s = %.2f e %s = %.2f (Empate!)\n", nomePaisCarta1, densidadeDemograficaCarta1, nomePaisCarta2, densidadeDemograficaCarta2);
            }
            somaDosAtributosCarta1 += densidadeDemograficaCarta1;
            somaDosAtributosCarta2 += densidadeDemograficaCarta2;
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }

        // Exibição da soma dos atributos e comparação entre as somas das cartas
        printf("Valor da soma dos atributos escolhidos da Carta 1: %.2f\n", somaDosAtributosCarta1);
        printf("Valor da soma dos atributos escolhidos da Carta 2: %.2f\n", somaDosAtributosCarta2);
        if (somaDosAtributosCarta1 > somaDosAtributosCarta2) {
            printf("A Carta 1 (%s) venceu a comparação da soma dos atributos!\n", nomePaisCarta1);
        } else if (somaDosAtributosCarta1 < somaDosAtributosCarta2) {
            printf("A Carta 2 (%s) venceu a comparação da soma dos atributos!\n", nomePaisCarta2);
        } else {
            printf("Houve empate na comparação da soma dos atributos!\n");
        }

    } else {

        // Sessão que exibe erros caso o jogador escolha atributos iguais ou digite um valor inválido ao escolher os atributos
        if (escolha1 == escolha2) {
            printf("Erro: a escolha de atributos foi repetida!\n");
            printf("Você deve escolher atributos diferentes!\n");
        } else if (escolha1 == 0 || escolha1 > 5) {
            printf("Erro: a PRIMEIRA escolha de atributo é inválida!\n");
            printf("Você deve escolher uma das opções apresentadas no menu, respondendo com o número correspondente ao atributo que deseja comparar!\n");
        } else if (escolha2 == 0 || escolha2 > 5) {
            printf("Erro: a SEGUNDA escolha de atributo é inválida!\n");
            printf("Você deve escolher uma das opções apresentadas no menu, respondendo com o número correspondente ao atributo que deseja comparar!\n");
        }
    }

    return 0;
}
