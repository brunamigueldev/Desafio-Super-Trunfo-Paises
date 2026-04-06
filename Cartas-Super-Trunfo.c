#include <stdio.h>
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado_c1, estado_c2;
    int codigo_c1, codigo_c2;
    char cidade_c1[50], cidade_c2[50];
    int populacao_c1, populacao_c2;
    float area_c1, area_c2;
    float pib_c1, pib_c2;
    int pontosturisticos_c1, pontosturisticos_c2;
    float densidade_c1, densidade_c2;
    float percapita_c1, percapita_c2;

  // Área para entrada de dados
    // Entrada da carta 1
    printf("CARTA 1\n");
    printf("Estado (A até H): ");
    scanf(" %c", &estado_c1);
    printf("Código da Carta(1 até 4): ");
    scanf("%d", &codigo_c1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade_c1);
    printf("População: ");
    scanf("%d", &populacao_c1);
    printf("Área (em km²): ");
    scanf("%f", &area_c1);
    printf("PIB: ");
    scanf("%f", &pib_c1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos_c1);

      //Entrada da carta 2
    printf("CARTA 2\n");
    printf("Estado (A até H): ");
    scanf(" %c", &estado_c2);
    printf("Código da Carta(1 até 4): ");
    scanf("%d", &codigo_c2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade_c2);
    printf("População: ");
    scanf("%d", &populacao_c2);
    printf("Área (em km²): ");
    scanf("%f", &area_c2);
    printf("PIB: ");
    scanf("%f", &pib_c2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos_c2);

    // Calculos de densidade populacional e PIB per Capita
    densidade_c1 = populacao_c1 / area_c1;
    densidade_c2 = populacao_c2 / area_c2;
    percapita_c1 = (pib_c1 * 1000000000) / populacao_c1;
    percapita_c2 = (pib_c2 * 1000000000) / populacao_c2;

  // Área de saída de dados da cidade
  printf("-==-==-CARTAS CADASTRADAS COM SUCESSO!-==-==-\n");
  
    //Saída da carta 1
  printf("CARTA 1\n");
  printf("Estado: %c\n", estado_c1);
  printf("Código: %c%02d\n", estado_c1, codigo_c1);
  printf("Cidade: %s\n", cidade_c1);
  printf("População: %d de pessoas\n", populacao_c1);
  printf("Área: %.2f km²\n", area_c1);
  printf("PIB: %.2f bilhões de reias\n", pib_c1);
  printf("Pontos Turísticos: %d\n", pontosturisticos_c1);
  printf("Densidade populacional: %.2f hab/km²\n", densidade_c1);
  printf("PIB per capita: R$%.2f\n", percapita_c1);

    //Saída da carta 2
  printf("CARTA 2\n");
  printf("Estado: %c\n", estado_c2);
  printf("Código: %c%02d\n", estado_c2, codigo_c2);
  printf("Cidade: %s\n", cidade_c2);
  printf("População: %d de pessoas\n", populacao_c2);
  printf("Área: %.2f km²\n", area_c2);
  printf("PIB: %.2f bilhões de reias\n", pib_c2);
  printf("Pontos Turísticos: %d\n", pontosturisticos_c2);
  printf("Densidade populacional: %.2f hab/km²\n", densidade_c2);
  printf("PIB per capita: R$%.2f\n", percapita_c2);

return 0;
} 
