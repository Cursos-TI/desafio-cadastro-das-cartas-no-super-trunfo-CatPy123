#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado;
    char codigo[4]; 
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int turista; 
    float pibpc;
    float dp;


    char estado1;
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int turista1; 
    float pibpc1;
    float dp1;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite os dados para a carta 1: \n");
    printf("Digite um dos 8 estados usando uma letra de 'A' a 'H' para representá-lo: ");
    scanf(" %c", &estado); 
    
    printf("Digite a letra do estado seguida de um número de 01 a 04 para ser o código da carta: ");
    scanf("%s", codigo); 

    printf("Digite o nome da cidade (não use espaços): ");
    scanf("%s", cidade);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turista);

    pibpc = pib / populacao;

    dp = populacao / area;

    
    printf("\nDigite os dados para a carta 2: \n");
    printf("Digite um dos 8 estados usando uma letra de 'A' a 'H' para representá-lo: ");
    scanf(" %c", &estado1); 
    
    printf("Digite a letra do estado seguida de um número de 01 a 04 para ser o código da carta: ");
    scanf("%s", codigo1); 

    printf("Digite o nome da cidade (não use espaços): ");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turista1);
    
    pibpc1 = pib1 / populacao1;

    dp1 = populacao1 / area1;


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmeros de pontos turísticos: %d\nDensidade populacional: %.2f\nPIB per capita: %.2f\n", estado, codigo, cidade, populacao, area, pib, turista, dp, pibpc);

    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmeros de pontos turísticos: %d\nDensidade populacional: %.2f\nPIB per capita: %.2f\n", estado1, codigo1, cidade1, populacao1, area1, pib1, turista1, dp1, pibpc1);
    
    return 0;
}
