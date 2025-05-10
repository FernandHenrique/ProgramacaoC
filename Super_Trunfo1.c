#include <stdio.h>

int main() {
    // Carta 1.
    char estado1;
    char codigocarta1[4];
    char nomecidade1[50];
    int populacao1; // Simplificado para int
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Carta 2.
    char estado2;
    char codigocarta2[4];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    //
    printf("** Cadastro da Carta 1 **\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
  

    printf("Código da Carta: ");
    scanf("%3s", codigocarta1);
    

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomecidade1);


    printf("População: ");
    scanf(" %d", &populacao1);
    

    printf("Área em Km²: ");
    scanf(" %f", &area1);
    

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);
    printf("\n");
 

    // Cálculo para a Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (float)(pib1 * 1000000000.0) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

    //-------------------------------------
    printf("** Cadastro da carta 2 **\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    

    printf("Código da Carta: ");
    scanf("%3s", codigocarta2);
   

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomecidade2);
  

    printf("População: ");
    scanf(" %d", &populacao2);
   

    printf("Área em Km²: ");
    scanf(" %f", &area2);
    

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
   

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);
    printf("\n");
   

    // Cálculo para a Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (float)(pib2 * 1000000000.0) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    //Exibição Carta 1
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código Carta: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área em Km²: %.2f\n", area1);
    printf("PIB (em Bilhões de reais): %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("\n");

    //Exibição Carta 2
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código Carta: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área em Km²: %.2f\n", area2);
    printf("PIB (em Bilhões de reais): %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("\n");

        // Comparação das Cartas
    printf("Comparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? populacao1 : populacao2);
    printf("Área: Carta %d venceu (%.2f)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? area1 : area2);
    printf("PIB: Carta %d venceu (%.2f)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? pib1 : pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosturisticos1 > pontosturisticos2) ? 1 : 2, (pontosturisticos1 > pontosturisticos2) ? pontosturisticos1 : pontosturisticos2);
    printf("Densidade Populacional: Carta %d venceu (%.2f)\n", (densidadePopulacional1 > densidadePopulacional2) ? 1 : 2, (densidadePopulacional1 > densidadePopulacional2) ? densidadePopulacional1 : densidadePopulacional2);
    printf("PIB per Capita: Carta %d venceu (%.2f)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, (pibPerCapita1 > pibPerCapita2) ? pibPerCapita1 : pibPerCapita2);
    printf("Super Poder: Carta %d venceu (%.2f)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2) ? superPoder1 : superPoder2);

    return 0;
}
