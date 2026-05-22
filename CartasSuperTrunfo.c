#include <stdio.h>
int main (){
    char Estado_1, Estado_2;
    char Codigo_1, Codigo_2;
    char Cidade_1 [25], Cidade_2 [25];  
    int Populacao_1, Populacao_2;
    float Area_1, Area_2;
    float PIB_1, PIB_2;
    int Pontos_Turisticos_1, Pontos_Turisticos_2;
    float Densidade_Populacional_1, Densidade_Populacional_2;
    float PIB_per_capita_1, PIB_per_capita_2;
    float inversodensidade_1, inversodensidade_2;
    

    // ENTRADA DE DADOS DAS CARTAS
    printf("Super Trunfo\n");
    printf("Insira abaixo os dados de sua carta\n");

    printf("Digite o estado: ");
    scanf(" %c", &Estado_1);

    printf("Digite o codigo: ");
    scanf(" %c", &Codigo_1);

    printf("Digite a cidade: ");
    scanf("%s", Cidade_1);   

    printf("Digite a populacao: ");
    scanf("%d", &Populacao_1);
    
    printf("Digite a area 'em km2': ");
    scanf("%f", &Area_1); 

    printf("Digite o PIB: ");
    scanf("%f", &PIB_1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &Pontos_Turisticos_1);

    printf("\n\nCarta criada com sucesso!\n");
    printf("Insira os dados de sua segunda carta\n");
    
    printf("\nDigite o estado: ");
    scanf(" %c", &Estado_2);

    printf("Digite o codigo: ");
    scanf(" %c", &Codigo_2);  

    printf("Digite a cidade: ");
    scanf("%s", Cidade_2);
    
    printf("Digite a populacao: ");
    scanf("%d", &Populacao_2);

    printf("Digite a area 'em km2': ");
    scanf("%f", &Area_2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB_2);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &Pontos_Turisticos_2);
    
    //OPERADORES MATEMATICOS PARA CALCULAR DENSIDADE POPULACIONAL, PIB PER CAPITA E SUPERPODER
    Densidade_Populacional_1 = (float) Populacao_1 / Area_1;
    PIB_per_capita_1 = (PIB_1 * 1000000000.0) / Populacao_1;   
    inversodensidade_1 = 1 / Densidade_Populacional_1;
    float superpoder_1 = inversodensidade_1 + PIB_per_capita_1 + Pontos_Turisticos_1 + Area_1 + PIB_1 + Populacao_1;
    
    Densidade_Populacional_2 = (float) Populacao_2 / Area_2;        
    PIB_per_capita_2 = (PIB_2 * 1000000000.0) / Populacao_2;    
    inversodensidade_2 = 1 / Densidade_Populacional_2;
    float superpoder_2 = inversodensidade_2 + PIB_per_capita_2 + Pontos_Turisticos_2 + Area_2 + PIB_2 + Populacao_2;


    // IMPRESSOES DOS DADOS DAS CARTAS

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado_1);
    printf("Codigo: %c%c\n", Estado_1, Codigo_1); 
    printf("Cidade: %s\n", Cidade_1);
    printf("Populacao: %d\n", Populacao_1);
    printf("Area: %.2f km2\n", Area_1);
    printf("PIB: %.2f bilhoes de reais\n", PIB_1);
    printf("Numero de pontos turisticos: %d\n", Pontos_Turisticos_1);
    printf("Densidade populacional: %.2f habitantes por km2\n", Densidade_Populacional_1);
    printf("PIB per capita: %.2f reais\n", PIB_per_capita_1);
    printf("Superpoder: %.2f\n\n", superpoder_1);
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado_2);
    printf("Codigo: %c%c\n", Estado_2, Codigo_2);
    printf("Cidade: %s\n", Cidade_2);
    printf("Populacao: %d\n", Populacao_2);
    printf("Area: %.2f km2\n", Area_2);
    printf("PIB: %.2f bilhoes de reais\n", PIB_2);
    printf("Numero de pontos turisticos: %d\n", Pontos_Turisticos_2);
    printf("Densidade populacional: %.2f habitantes por km2\n", Densidade_Populacional_2);
    printf("PIB per capita: %.2f reais\n", PIB_per_capita_2);
    printf("Superpoder: %.2f\n\n", superpoder_2);

    //COMPARACAO DE CARTAS
    printf("\nComparacao das cartas:\n");
    printf("Populacao: a carta %d venceu (%d)\n", Populacao_1 > Populacao_2 ? 1 : 2, Populacao_1 > Populacao_2);
    printf("Area: a carta %d venceu (%d)\n", Area_1 > Area_2 ? 1 : 2, Area_1 > Area_2);
    printf("PIB: a carta %d venceu (%d)\n", PIB_1 > PIB_2 ? 1 : 2, PIB_1 > PIB_2);
    printf("Numero de pontos turisticos: a carta %d venceu (%d)\n", Pontos_Turisticos_1 > Pontos_Turisticos_2 ? 1 : 2, Pontos_Turisticos_1 > Pontos_Turisticos_2);
    printf("Densidade populacional: a carta %d venceu (%d)\n", Densidade_Populacional_1 < Densidade_Populacional_2 ? 1 : 2, Densidade_Populacional_1 < Densidade_Populacional_2);
    printf("PIB per capita: a carta %d venceu (%d)\n", PIB_per_capita_1 > PIB_per_capita_2 ? 1 : 2, PIB_per_capita_1 > PIB_per_capita_2);
    printf("Superpoder: a carta %d venceu (%d)\n", superpoder_1 > superpoder_2 ? 1 : 2, superpoder_1 > superpoder_2);

 
    return 0;


}