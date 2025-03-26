#include <stdio.h>

int main() {
    
    int opcao_menu_principal, opcao_comparacao1, opcao_comparacao2;
    float carta1_resultado = 0.0, carta2_resultado = 0.0;

    // carta 1
    char carta1_estado, carta1_codigo_cidade[4], carta1_nome_cidade[50];
    int carta1_pontos_turisticos;
    unsigned long int carta1_populacao;
    float carta1_area, carta1_pib, carta1_densidade_populacional, carta1_pib_per_capita;

    // carta 2
    char carta2_estado, carta2_codigo_cidade[4], carta2_nome_cidade[50];
    int carta2_pontos_turisticos;
    unsigned long int carta2_populacao;
    float carta2_area, carta2_pib, carta2_densidade_populacional, carta2_pib_per_capita;

    printf("Bem-vindo ao Super Trunfo!\n");
    printf("Escolha uma opção:\n");
    printf("1 - Como jogar?\n");
    printf("2 - Jogar!\n");
    printf("3 - Sair :(\n");

    scanf("%d", &opcao_menu_principal);

    switch (opcao_menu_principal) {
    case 1:
        printf("O jogo Super Trunfo faz a comparação de duas cartas que você irá cadastrar no nosso sistema. Você vai poder criar cartas que contém as seguintes informações:\n");
        printf("Estado, Código da cidade, Nome da cidade, População, Área, PIB e Pontos turísticos.\n");
        printf("A partir dessas informações, o jogo irá gerar uma densidade populacional e um PIB per capita.\n");
        printf("Você poderá escolher uma das seguintes opções de comparação: População, Área, PIB, Número de Pontos turísticos ou Densidade Populacional.\n");
        printf("E por fim, o jogo irá comparar o atributo escolhido e dizer qual carta é vencedora!\n");
        break;

    case 2:
        printf("Cadastro das Cartas \n\n");

        // Pegando os dados da primeira carta
        printf("Cadastrando a primeira carta: \n\n");
    
        printf("Digite a letra correspondente ao estado ('A' a 'H'): \n");
        scanf(" %c", &carta1_estado);
    
        printf("Digite o código da cidade: \n");
        scanf("%s", carta1_codigo_cidade);
    
        printf("Digite o nome da cidade: \n");
        scanf(" %[^\n]", carta1_nome_cidade);
    
        printf("Digite a população da cidade: \n");
        scanf("%lu", &carta1_populacao);
    
        printf("Digite a área da cidade: \n");
        scanf("%f", &carta1_area);
    
        printf("Digite o PIB da cidade: \n");
        scanf("%f", &carta1_pib);
    
        printf("Digite o número de pontos turísticos da cidade: \n");
        scanf("%d", &carta1_pontos_turisticos);
    
        carta1_densidade_populacional = carta1_populacao / carta1_area;
        carta1_pib_per_capita = (carta1_pib * 1000000000) / carta1_populacao;
    
        // Estou exibindo esses valores por ser um requisito do desafio
        printf("Carta 1 Densidade Populacional: %.2f\n", carta1_densidade_populacional);
        printf("Carta 1 PIB per capita: %.2f\n", carta1_pib_per_capita);

        // Pegando os dados da segunda carta
        printf("\nCadastrando a segunda carta: \n\n");
    
        printf("Digite a letra correspondente ao estado ('A' a 'H'): \n");
        scanf(" %c", &carta2_estado);
    
        printf("Digite o código da cidade: \n");
        scanf("%s", carta2_codigo_cidade);
    
        printf("Digite o nome da cidade: \n");
        scanf(" %[^\n]", carta2_nome_cidade);
    
        printf("Digite a população da cidade: \n");
        scanf("%lu", &carta2_populacao);
    
        printf("Digite a área da cidade: \n");
        scanf("%f", &carta2_area);
    
        printf("Digite o PIB da cidade: \n");
        scanf("%f", &carta2_pib);
    
        printf("Digite o número de pontos turísticos da cidade: \n");
        scanf("%d", &carta2_pontos_turisticos);
    
        carta2_densidade_populacional = carta2_populacao / carta2_area;
        carta2_pib_per_capita = (carta2_pib * 1000000000) / carta2_populacao;
    
        // Estou exibindo esses valores por ser um requisito do desafio
        printf("Carta 2 Densidade Populacional: %.2f\n", carta2_densidade_populacional);
        printf("Carta 2 PIB per capita: %.2f\n", carta2_pib_per_capita);

        printf("\n\nEscolha a primeira opção de comparação entre as cartas:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de pontos turísticos\n");
        printf("5 - Densidade populacional\n");

        scanf("%d", &opcao_comparacao1);
    
        switch (opcao_comparacao1) {
        case 1:
            carta1_resultado += carta1_populacao;
            carta2_resultado += carta2_populacao;
            if (carta1_populacao > carta2_populacao) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: População\n");
                printf("A carta 1 (%s) é a vencedora!\n", carta1_nome_cidade);
            } else if (carta1_populacao < carta2_populacao) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: População\n");
                printf("A carta 2 (%s) é a vencedora!\n", carta2_nome_cidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            carta1_resultado += carta1_area;
            carta2_resultado += carta2_area;
            if (carta1_area > carta2_area) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: Area\n");
                printf("A carta 1 (%s) é a vencedora!\n", carta1_nome_cidade);
            } else if (carta1_area < carta2_area) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: Area\n");
                printf("A carta 2 (%s) é a vencedora!\n", carta2_nome_cidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            carta1_resultado += carta1_pib;
            carta2_resultado += carta2_pib;
            if (carta1_pib > carta2_pib) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: PIB\n");
                printf("A carta 1 (%s) é a vencedora!\n", carta1_nome_cidade);
            } else if (carta1_pib < carta2_pib) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: PIB\n");
                printf("A carta 2 (%s) é a vencedora!\n", carta2_nome_cidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            carta1_resultado += carta1_pontos_turisticos;
            carta2_resultado += carta2_pontos_turisticos;
            if (carta1_pontos_turisticos > carta2_pontos_turisticos) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: Número de pontos turísticos\n");
                printf("A carta 1 (%s) é a vencedora!\n", carta1_nome_cidade);
            } else if (carta1_pontos_turisticos < carta2_pontos_turisticos) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: Número de pontos turísticos\n");
                printf("A carta 2 (%s) é a vencedora!\n", carta2_nome_cidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            carta1_resultado += carta1_densidade_populacional;
            carta2_resultado += carta2_densidade_populacional;
            if (carta1_densidade_populacional < carta2_densidade_populacional) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: Densidade Populacional\n");
                printf("Lembrando que Densidade Populacional, vence com o menor valor!\n");
                printf("A carta 1 (%s) é a vencedora!\n", carta1_nome_cidade);
            } else if (carta1_densidade_populacional > carta2_densidade_populacional) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: Densidade Populacional\n");
                printf("Lembrando que Densidade Populacional, vence com o menor valor!\n");
                printf("A carta 2 (%s) é a vencedora!\n", carta2_nome_cidade);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida! Os números aceitos são de 1 a 5!\n");
            printf("Encerrando o programa...");
            break;
        }

        printf("\n\n Agora, escolha a segunda opção de comparação entre as cartas:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de pontos turísticos\n");
        printf("5 - Densidade populacional\n");

        scanf("%d", &opcao_comparacao2);
    
        switch (opcao_comparacao2) {
            case 1:
            carta1_resultado += carta1_populacao;
            carta2_resultado += carta2_populacao;
            if (carta1_populacao > carta2_populacao) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: População\n");
                printf("A carta 1 (%s) é a vencedora!\n", carta1_nome_cidade);
            } else if (carta1_populacao < carta2_populacao) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: População\n");
                printf("A carta 2 (%s) é a vencedora!\n", carta2_nome_cidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            carta1_resultado += carta1_area;
            carta2_resultado += carta2_area;
            if (carta1_area > carta2_area) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: Area\n");
                printf("A carta 1 (%s) é a vencedora!\n", carta1_nome_cidade);
            } else if (carta1_area < carta2_area) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: Area\n");
                printf("A carta 2 (%s) é a vencedora!\n", carta2_nome_cidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            carta1_resultado += carta1_pib;
            carta2_resultado += carta2_pib;
            if (carta1_pib > carta2_pib) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: PIB\n");
                printf("A carta 1 (%s) é a vencedora!\n", carta1_nome_cidade);
            } else if (carta1_pib < carta2_pib) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: PIB\n");
                printf("A carta 2 (%s) é a vencedora!\n", carta2_nome_cidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            carta1_resultado += carta1_pontos_turisticos;
            carta2_resultado += carta2_pontos_turisticos;
            if (carta1_pontos_turisticos > carta2_pontos_turisticos) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: Número de pontos turísticos\n");
                printf("A carta 1 (%s) é a vencedora!\n", carta1_nome_cidade);
            } else if (carta1_pontos_turisticos < carta2_pontos_turisticos) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: Número de pontos turísticos\n");
                printf("A carta 2 (%s) é a vencedora!\n", carta2_nome_cidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            carta1_resultado += carta1_densidade_populacional;
            carta2_resultado += carta2_densidade_populacional;
            if (carta1_densidade_populacional < carta2_densidade_populacional) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: Densidade Populacional\n");
                printf("Lembrando que Densidade Populacional, vence com o menor valor!\n");
                printf("A carta 1 (%s) é a vencedora!\n", carta1_nome_cidade);
            } else if (carta1_densidade_populacional > carta2_densidade_populacional) {
                printf("Nome da carta 1: %s\n", carta1_nome_cidade);
                printf("Nome da carta 2: %s\n", carta2_nome_cidade);
                printf("Atributo usado para comparação: Densidade Populacional\n");
                printf("Lembrando que Densidade Populacional, vence com o menor valor!\n");
                printf("A carta 2 (%s) é a vencedora!\n", carta2_nome_cidade);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida! Os números aceitos são de 1 a 5!\n");
            printf("Encerrando o programa...");
            break;
        }

        printf("\nResultado final com a soma dos atributos escolhidos:\n");
        carta1_resultado > carta2_resultado ? printf("A carta 1 (%s) é a vencedora!\n", carta1_nome_cidade) : printf("A carta 2 (%s) é a vencedora!\n", carta2_nome_cidade);

    return 0;
    case 3:
        printf("Obrigado por jogar Super Trunfo!\n");
        printf("Encerrando o programa...");
        return 0;
    default:
        printf("Opção inválida! Os números aceitos são de 1 a 3!\n");
        printf("Encerrando o programa...");
        break;
    }
    return 0;
}