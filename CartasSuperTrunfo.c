#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

typedef struct {
    char codigo[7];  // Código da carta (ex: A1, B1)
    char nome[50];    // Nome da cidade 
    int populacao, pontosTuristicos; // População e Pontos Turísticos
    float area,pib; // Área em km² e PIB
} Cidade;
int main() {    
    int i;   
        Cidade estados[8]; //Array para cadastrar uma carta para cada estado
        
        printf("Bem-vindo ao jogo do Super Trunfo! \n");
        for (i = 0; i < 8; i++) {
          printf("\nDados da carta %d:\n", i + 1);
        printf("Informe o codigo da carta (ex: A1, B1, etc): ");
        scanf("%s", estados[i].codigo); 
        printf("Informe o nome da cidade: ");
        scanf("%s", estados[i].nome);
        printf("Informe a populacao da cidade: ");
        scanf("%d", &estados[i].populacao);
        printf("Informe a area da cidade (em km²): ");
        scanf("%f", &estados[i].area);
        printf("Informe o PIB da cidade (em bilhoes): ");
        scanf("%f", &estados[i].pib);
        printf("Informe o numero de pontos turisticos que a cidade possui: ");
        scanf("%d", &estados[i].pontosTuristicos);
    }

        // Exibindo todas as cartas cadastradas
    printf("\n--- Cidades Cadastradas ---\n");
    for (i = 0; i < 8; i++) {
        printf("\n--- Carta: %s ---\n", estados[i].codigo);
        printf("Nome da cidade: %s\n", estados[i].nome);
        printf("População: %ld\n", estados[i].populacao);
        printf("Área: %.2f km²\n", estados[i].area);
        printf("PIB: R$ %.2f bilhões\n", estados[i].pib);
        printf("Pontos Turísticos: %d\n", estados[i].pontosTuristicos);
        printf("--------------------------------\n");
    }

    return 0;
    
}
