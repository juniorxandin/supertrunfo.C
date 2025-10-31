#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para a Carta 1
    char estado1[50];
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    
    // Variáveis para a Carta 2
    char estado2[50];
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    
    // Leitura dos dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado: ");
    scanf(" %[^\n]", estado1);
    
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    
    printf("Digite a População: ");
    scanf("%lu", &populacao1);
    
    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cálculos para a Carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / (float)populacao1;
    
    printf("\n");
    
    // Leitura dos dados da Carta 2
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado: ");
    scanf(" %[^\n]", estado2);
    
    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Digite a População: ");
    scanf("%lu", &populacao2);
    
    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculos para a Carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / (float)populacao2;
    
    printf("\n");
    
    // Exibição dos dados cadastrados
    printf("=== Dados Cadastrados ===\n\n");
    
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    
    printf("\n");
    
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    
    printf("\n");
    
    // ========== MENU DINÂMICO - ESCOLHA DOS ATRIBUTOS ==========
    
    printf("=== MENU DE COMPARAÇÃO - ESCOLHA DOIS ATRIBUTOS ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("\nEscolha o PRIMEIRO atributo (1-6): ");
    
    int atributo1;
    scanf("%d", &atributo1);
    
    // Validação do primeiro atributo
    while (atributo1 < 1 || atributo1 > 6) {
        printf("Opção inválida! Escolha um número entre 1 e 6: ");
        scanf("%d", &atributo1);
    }
    
    printf("\n=== ESCOLHA O SEGUNDO ATRIBUTO ===\n");
    
    // Menu dinâmico - exibe apenas as opções não escolhidas
    if (atributo1 != 1) printf("1 - População\n");
    if (atributo1 != 2) printf("2 - Área\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Número de Pontos Turísticos\n");
    if (atributo1 != 5) printf("5 - Densidade Populacional\n");
    if (atributo1 != 6) printf("6 - PIB per Capita\n");
    printf("\nEscolha o SEGUNDO atributo: ");
    
    int atributo2;
    scanf("%d", &atributo2);
    
    // Validação do segundo atributo
    while (atributo2 < 1 || atributo2 > 6 || atributo2 == atributo1) {
        if (atributo2 == atributo1) {
            printf("Você não pode escolher o mesmo atributo! Escolha outro: ");
        } else {
            printf("Opção inválida! Escolha um número entre 1 e 6: ");
        }
        scanf("%d", &atributo2);
    }
    
    printf("\n");
    
    // ========== PROCESSAMENTO DA COMPARAÇÃO ==========
    
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    char nome_atributo1[50], nome_atributo2[50];
    char unidade1[30], unidade2[30];
    int inverte_atributo1 = 0, inverte_atributo2 = 0;
    
    // Processa o primeiro atributo escolhido
    switch(atributo1) {
        case 1:
            valor1_carta1 = (float)populacao1;
            valor1_carta2 = (float)populacao2;
            strcpy(nome_atributo1, "População");
            strcpy(unidade1, "habitantes");
            break;
        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            strcpy(nome_atributo1, "Área");
            strcpy(unidade1, "km²");
            break;
        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            strcpy(nome_atributo1, "PIB");
            strcpy(unidade1, "bilhões");
            break;
        case 4:
            valor1_carta1 = (float)pontos_turisticos1;
            valor1_carta2 = (float)pontos_turisticos2;
            strcpy(nome_atributo1, "Pontos Turísticos");
            strcpy(unidade1, "pontos");
            break;
        case 5:
            valor1_carta1 = densidade_populacional1;
            valor1_carta2 = densidade_populacional2;
            strcpy(nome_atributo1, "Densidade Populacional");
            strcpy(unidade1, "hab/km²");
            inverte_atributo1 = 1; // Menor vence
            break;
        case 6:
            valor1_carta1 = pib_per_capita1;
            valor1_carta2 = pib_per_capita2;
            strcpy(nome_atributo1, "PIB per Capita");
            strcpy(unidade1, "reais");
            break;
    }
    
    // Processa o segundo atributo escolhido
    switch(atributo2) {
        case 1:
            valor2_carta1 = (float)populacao1;
            valor2_carta2 = (float)populacao2;
            strcpy(nome_atributo2, "População");
            strcpy(unidade2, "habitantes");
            break;
        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            strcpy(nome_atributo2, "Área");
            strcpy(unidade2, "km²");
            break;
        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            strcpy(nome_atributo2, "PIB");
            strcpy(unidade2, "bilhões");
            break;
        case 4:
            valor2_carta1 = (float)pontos_turisticos1;
            valor2_carta2 = (float)pontos_turisticos2;
            strcpy(nome_atributo2, "Pontos Turísticos");
            strcpy(unidade2, "pontos");
            break;
        case 5:
            valor2_carta1 = densidade_populacional1;
            valor2_carta2 = densidade_populacional2;
            strcpy(nome_atributo2, "Densidade Populacional");
            strcpy(unidade2, "hab/km²");
            inverte_atributo2 = 1; // Menor vence
            break;
        case 6:
            valor2_carta1 = pib_per_capita1;
            valor2_carta2 = pib_per_capita2;
            strcpy(nome_atributo2, "PIB per Capita");
            strcpy(unidade2, "reais");
            break;
    }
    
    // ========== EXIBIÇÃO DOS RESULTADOS ==========
    
    printf("=== RESULTADO DA COMPARAÇÃO ===\n\n");
    
    // Exibe os valores dos atributos
    printf("Atributos escolhidos: %s e %s\n\n", nome_atributo1, nome_atributo2);
    
    printf("CARTA 1 - %s (%s):\n", cidade1, estado1);
    printf("  %s: %.2f %s\n", nome_atributo1, valor1_carta1, unidade1);
    printf("  %s: %.2f %s\n", nome_atributo2, valor2_carta1, unidade2);
    
    printf("\nCARTA 2 - %s (%s):\n", cidade2, estado2);
    printf("  %s: %.2f %s\n", nome_atributo1, valor1_carta2, unidade1);
    printf("  %s: %.2f %s\n", nome_atributo2, valor2_carta2, unidade2);
    
    printf("\n--- Comparação por Atributo ---\n\n");
    
    // Comparação do primeiro atributo usando operador ternário
    int pontos_carta1 = 0, pontos_carta2 = 0;
    
    if (inverte_atributo1) {
        // Densidade: menor vence
        pontos_carta1 += (valor1_carta1 < valor1_carta2) ? 1 : (valor1_carta1 == valor1_carta2) ? 0 : 0;
        pontos_carta2 += (valor1_carta2 < valor1_carta1) ? 1 : (valor1_carta2 == valor1_carta1) ? 0 : 0;
        
        printf("%s: ", nome_atributo1);
        if (valor1_carta1 < valor1_carta2) {
            printf("Carta 1 (%s) venceu! (%.2f < %.2f)\n", cidade1, valor1_carta1, valor1_carta2);
        } else if (valor1_carta2 < valor1_carta1) {
            printf("Carta 2 (%s) venceu! (%.2f < %.2f)\n", cidade2, valor1_carta2, valor1_carta1);
        } else {
            printf("Empate! (%.2f = %.2f)\n", valor1_carta1, valor1_carta2);
        }
    } else {
        // Outros atributos: maior vence
        pontos_carta1 += (valor1_carta1 > valor1_carta2) ? 1 : (valor1_carta1 == valor1_carta2) ? 0 : 0;
        pontos_carta2 += (valor1_carta2 > valor1_carta1) ? 1 : (valor1_carta2 == valor1_carta1) ? 0 : 0;
        
        printf("%s: ", nome_atributo1);
        if (valor1_carta1 > valor1_carta2) {
            printf("Carta 1 (%s) venceu! (%.2f > %.2f)\n", cidade1, valor1_carta1, valor1_carta2);
        } else if (valor1_carta2 > valor1_carta1) {
            printf("Carta 2 (%s) venceu! (%.2f > %.2f)\n", cidade2, valor1_carta2, valor1_carta1);
        } else {
            printf("Empate! (%.2f = %.2f)\n", valor1_carta1, valor1_carta2);
        }
    }
    
    // Comparação do segundo atributo usando operador ternário
    if (inverte_atributo2) {
        // Densidade: menor vence
        pontos_carta1 += (valor2_carta1 < valor2_carta2) ? 1 : (valor2_carta1 == valor2_carta2) ? 0 : 0;
        pontos_carta2 += (valor2_carta2 < valor2_carta1) ? 1 : (valor2_carta2 == valor2_carta1) ? 0 : 0;
        
        printf("%s: ", nome_atributo2);
        if (valor2_carta1 < valor2_carta2) {
            printf("Carta 1 (%s) venceu! (%.2f < %.2f)\n", cidade1, valor2_carta1, valor2_carta2);
        } else if (valor2_carta2 < valor2_carta1) {
            printf("Carta 2 (%s) venceu! (%.2f < %.2f)\n", cidade2, valor2_carta2, valor2_carta1);
        } else {
            printf("Empate! (%.2f = %.2f)\n", valor2_carta1, valor2_carta2);
        }
    } else {
        // Outros atributos: maior vence
        pontos_carta1 += (valor2_carta1 > valor2_carta2) ? 1 : (valor2_carta1 == valor2_carta2) ? 0 : 0;
        pontos_carta2 += (valor2_carta2 > valor2_carta1) ? 1 : (valor2_carta2 == valor2_carta1) ? 0 : 0;
        
        printf("%s: ", nome_atributo2);
        if (valor2_carta1 > valor2_carta2) {
            printf("Carta 1 (%s) venceu! (%.2f > %.2f)\n", cidade1, valor2_carta1, valor2_carta2);
        } else if (valor2_carta2 > valor2_carta1) {
            printf("Carta 2 (%s) venceu! (%.2f > %.2f)\n", cidade2, valor2_carta2, valor2_carta1);
        } else {
            printf("Empate! (%.2f = %.2f)\n", valor2_carta1, valor2_carta2);
        }
    }
    
    // Cálculo da soma dos atributos
    float soma_carta1 = valor1_carta1 + valor2_carta1;
    float soma_carta2 = valor1_carta2 + valor2_carta2;
    
    printf("\n--- Resultado Final ---\n\n");
    printf("Soma dos atributos:\n");
    printf("Carta 1 (%s): %.2f + %.2f = %.2f\n", cidade1, valor1_carta1, valor2_carta1, soma_carta1);
    printf("Carta 2 (%s): %.2f + %.2f = %.2f\n", cidade2, valor1_carta2, valor2_carta2, soma_carta2);
    printf("\n");
    
    // Placar por pontos
    printf("Placar de Vitórias:\n");
    printf("Carta 1 (%s): %d ponto(s)\n", cidade1, pontos_carta1);
    printf("Carta 2 (%s): %d ponto(s)\n", cidade2, pontos_carta2);
    printf("\n");
    
    // Resultado final usando operador ternário
    printf("🏆 VENCEDOR DA RODADA: ");
    printf(soma_carta1 > soma_carta2 ? "Carta 1 (%s)!\n" : 
           soma_carta2 > soma_carta1 ? "Carta 2 (%s)!\n" : 
           "EMPATE!\n", 
           soma_carta1 > soma_carta2 ? cidade1 : cidade2);
    
    if (soma_carta1 == soma_carta2) {
        printf("As duas cartas têm a mesma soma de atributos!\n");
    }
    
    printf("\n");
    
    return 0;
}