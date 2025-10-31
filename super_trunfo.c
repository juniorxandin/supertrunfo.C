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
    
    // ====== COMPARAÇÃO DE CARTAS ======
    // Escolha o atributo que deseja comparar alterando o número da opção abaixo:
    // 1 = População
    // 2 = Área
    // 3 = PIB
    // 4 = Pontos Turísticos
    // 5 = Densidade Populacional
    // 6 = PIB per Capita
    
    int opcao_comparacao = 1; // ALTERE ESTE VALOR PARA ESCOLHER O ATRIBUTO
    
    printf("=== Comparação de Cartas ===\n\n");
    
    if (opcao_comparacao == 1) {
        // Comparação por População
        printf("Comparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);
        
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } 
    else if (opcao_comparacao == 2) {
        // Comparação por Área
        printf("Comparação de cartas (Atributo: Área):\n");
        printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
        
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (area2 > area1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (opcao_comparacao == 3) {
        // Comparação por PIB
        printf("Comparação de cartas (Atributo: PIB):\n");
        printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", cidade2, estado2, pib2);
        
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pib2 > pib1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (opcao_comparacao == 4) {
        // Comparação por Pontos Turísticos
        printf("Comparação de cartas (Atributo: Número de Pontos Turísticos):\n");
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pontos_turisticos1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontos_turisticos2);
        
        if (pontos_turisticos1 > pontos_turisticos2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pontos_turisticos2 > pontos_turisticos1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (opcao_comparacao == 5) {
        // Comparação por Densidade Populacional (MENOR VENCE)
        printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade_populacional1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidade_populacional2);
        
        if (densidade_populacional1 < densidade_populacional2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (densidade_populacional2 < densidade_populacional1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (opcao_comparacao == 6) {
        // Comparação por PIB per Capita
        printf("Comparação de cartas (Atributo: PIB per Capita):\n");
        printf("Carta 1 - %s (%s): %.2f reais\n", cidade1, estado1, pib_per_capita1);
        printf("Carta 2 - %s (%s): %.2f reais\n", cidade2, estado2, pib_per_capita2);
        
        if (pib_per_capita1 > pib_per_capita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pib_per_capita2 > pib_per_capita1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    
    return 0;
}