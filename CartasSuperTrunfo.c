#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado;
    char Codigo;
    char Cidade [25];
    int Populacao;
    float Area;
    float PIB;
    int Numero_de_Pontos_Turisticos;
    float Densidade; 
    float pib_per_capita;

    // Área para entrada de dados
    printf("Super Trunfo\n");
    printf("Insira abaixo os dados de sua carta\n");

    printf("Digite o estado: ");
    scanf(" %c", &Estado);

    printf("Digite o codigo: ");
    scanf(" %c", &Codigo);

    printf("Digite a cidade: ");
    scanf("%s", Cidade);   

    printf("Digite a populacao: ");
    scanf("%d", &Populacao);
    
    printf("Digite a area 'em km2': ");
    scanf("%f", &Area); 

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &Numero_de_Pontos_Turisticos);

    //operadores matematicos
    Densidade = (float) Populacao / Area;
    pib_per_capita = (PIB * 1000000000.0) / Populacao; 

    // Área para exibição dos dados da cidade
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado);
    printf("Codigo: %c%c\n", Estado, Codigo); 
    printf("Cidade: %s\n", Cidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f km2\n", Area);
    printf("PIB: %.2f Bilhoes de reais\n", PIB);
    printf("Numero de pontos turisticos: %d\n", Numero_de_Pontos_Turisticos);
    printf("Densidade Populacional: %.2f hab/km2 \n", Densidade);
    printf("PIB per capita: %.2f reais\n", pib_per_capita);
  
    printf("\n\nCarta criada com sucesso!\n");
    printf("Insira os dados de sua segunda carta\n");

    //Area para entrada de dados da segunda carta
    printf("\nDigite o estado: ");
    scanf(" %c", &Estado);

    printf("Digite o codigo: ");
    scanf(" %c", &Codigo);  

    printf("Digite a cidade: ");
    scanf("%s", Cidade);
    
    printf("Digite a populacao: ");
    scanf("%d", &Populacao);

    printf("Digite a area 'em km2': ");
    scanf("%f", &Area);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &Numero_de_Pontos_Turisticos);

    //operadores matematicos carta 2
    Densidade = (float) Populacao / Area;
    pib_per_capita = (PIB * 1000000000) / Populacao;

    //Area para exibicao dos dados da segunda cidade
    printf("\n\nCarta criada com sucesso!\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado);
    printf("Codigo: %c%c\n", Estado, Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f km2\n", Area);
    printf("PIB: %.2f Bilhoes de reais\n", PIB);
    printf("Numero de pontos turisticos: %d\n", Numero_de_Pontos_Turisticos);
    printf("Densidade populacional: %.2f hab/km2\n", Densidade);
    printf("PIB per capita: %.2f reais\n", pib_per_capita);

return 0;
} 
