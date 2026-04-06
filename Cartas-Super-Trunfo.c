#include <stdio.h>
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado_c1, estado_c2;
    int codigo_c1, codigo_c2;
    char cidade_c1[50], cidade_c2[50];
    unsigned long int populacao_c1, populacao_c2;
    float area_c1, area_c2;
    float pib_c1, pib_c2;
    int pontosturisticos_c1, pontosturisticos_c2;
    float densidade_c1, densidade_c2;
    float percapita_c1, percapita_c2;
    int resultado_população, resultado_area, resultado_pib, resultado_pontos, resultado_densidade, resultado_percapita, resultado_superpoder;
    char *vencedor[] = {"Carta 2", "Carta 1"};

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
    scanf("%lu", &populacao_c1);
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
    scanf("%lu", &populacao_c2);
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

    // Calculos de Super Poder
    float inversodensidade_c1 = 1.0 / densidade_c1;
    float inversodensidade_c2 = 1.0 / densidade_c2;
    float superpoder_c1 = (float) populacao_c1 + area_c1 + pib_c1 + pontosturisticos_c1 + percapita_c1 + inversodensidade_c1; 
    float superpoder_c2 = (float) populacao_c2 + area_c2 + pib_c2 + pontosturisticos_c2 + percapita_c2 + inversodensidade_c2;

    //Comparação de cartas
    resultado_população = populacao_c1 > populacao_c2;
    resultado_area = area_c1 > area_c2;
    resultado_pib = pib_c1 > pib_c2;
    resultado_pontos = pontosturisticos_c1 > pontosturisticos_c2;
    resultado_densidade = densidade_c1 < densidade_c2;
    resultado_percapita = percapita_c1 > percapita_c2;
    resultado_superpoder = superpoder_c1 > superpoder_c2;

    // Área de saída de dados da cidade
  printf("-==-==-CARTAS CADASTRADAS COM SUCESSO!-==-==-\n");
  
    //Saída da carta 1
  printf("CARTA 1\n");
  printf("Estado: %c\n", estado_c1);
  printf("Código: %c%02d\n", estado_c1, codigo_c1);
  printf("Cidade: %s\n", cidade_c1);
  printf("População: %lu de pessoas\n", populacao_c1);
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
  printf("População: %lu de pessoas\n", populacao_c2);
  printf("Área: %.2f km²\n", area_c2);
  printf("PIB: %.2f bilhões de reias\n", pib_c2);
  printf("Pontos Turísticos: %d\n", pontosturisticos_c2);
  printf("Densidade populacional: %.2f hab/km²\n", densidade_c2);
  printf("PIB per capita: R$%.2f\n", percapita_c2);

  //Resultado da Comparação
  printf("-==-==-COMPARAÇÃO DAS CARTAS-==-==-\n");
  printf("(1: Carta 1 vence | 0: Carta 2 vence)\n");
  printf("RESULTADO:\n");
  printf("População: %s venceu! (%d)\n", vencedor[resultado_população], resultado_população);
  printf("Área: %s venceu! (%d)\n", vencedor[resultado_area], resultado_area);
  printf("PIB: %s venceu! (%d)\n", vencedor[resultado_pib], resultado_população);
  printf("Pontos Turísticos: %s venceu! (%d)\n", vencedor[resultado_pontos], resultado_pontos);
  printf("Densidade Populacional: %s venceu! (%d)\n", vencedor[resultado_densidade],resultado_densidade);
  printf("PIB per Capita: %s venceu! (%d)\n", vencedor[resultado_percapita], resultado_percapita);
  printf("Super Poder: %s venceu! (%d)\n", vencedor[resultado_superpoder], resultado_superpoder);

return 0;
} 