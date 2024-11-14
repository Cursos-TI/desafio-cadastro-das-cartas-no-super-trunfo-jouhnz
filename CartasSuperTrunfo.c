#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

typedef struct {
    char codigo[5];  // Código da carta (ex: A01, B04)
    char nome[50];    // Nome da cidade 
    int populacao, pontosTuristicos; // População e Pontos Turísticos
    float area,pib; // Área em km² e PIB
} Cidade;
int main() {    
    int i;   
        Cidade cidades[4]; //Array para cadastrar uma carta para cada estado
        
        printf("Bem-vindo ao jogo do Super Trunfo! \n");
        for (i = 0; i < 4; i++) {
          printf("\nDados da carta %d:\n", i + 1);
        printf("Informe o codigo da carta (ex: A01, B04, etc): ");
        scanf("%s", cidades[i].codigo);  // Exemplo: A01, B02, C03, etc.
        printf("Informe o nome da cidade: ");
        scanf("%s", cidades[i].nome);
        printf("Informe a populacao da cidade: ");
        scanf("%ld", &cidades[i].populacao);
        printf("Informe a area da cidade (em km²): ");
        scanf("%f", &cidades[i].area);
        printf("Informe o PIB da cidade (em bilhoes): ");
        scanf("%f", &cidades[i].pib);
        printf("Informe o numero de pontos turisticos: ");
        scanf("%d", &cidades[i].pontosTuristicos);
    }

        // Exibindo todas as cartas cadastradas
    printf("\n--- Cidades Cadastradas ---\n");
    for (i = 0; i < 4; i++) {
        printf("\n--- Carta: %s ---\n", cidades[i].codigo);
        printf("Nome da cidade: %s\n", cidades[i].nome);
        printf("População: %ld\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: R$ %.2f bilhões\n", cidades[i].pib);
        printf("Pontos Turísticos: %d\n", cidades[i].pontosTuristicos);
        printf("--------------------------------\n");
    }

    return 0;
    
}
