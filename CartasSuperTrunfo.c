#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char nome[30] ;
    int populacao;
    int area;
    float PIB;
    int pontosturisticos;
    char cidade[30];

    printf("digite o código da cidade");
    scanf("%s", &cidade);

    printf("digite o nome da cidade");
    scanf("%s", &nome );

    printf("digite a quantidade da população");
    scanf("%d", &populacao);
    
    printf("digite a área");
    scanf("%d", &area);

    printf("digite o PBI");
    scanf("%f", &PIB);  
    
    printf("Pontos Turísticos");
    scanf("%d",&pontosturisticos);

    printf(" - Código da Cidade: %s\n - Nome da cidade: %s\n - Quantidade da População: %d\n - area: %d\n - Pontos Turísticos: %d\n - PIB : %f\n ", cidade, nome, populacao, area, pontosturisticos,PIB);
    

    return 0;


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
}
