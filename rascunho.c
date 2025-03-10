#include <stdio.h>

int main() {
    
   
    int numerodepontosturisticos1, numerodepontosturisticos2, populacao1, populacao2;
    float area1, PIB1, area2, PIB2, den1, den2, PIBper1, PIBper2, super1, super2;
    char cidade1[50], cidade2[50], codigodacidade1 [50], codigodacidade2 [50], estado1[50], estado2[50];

   
   
    estado1 = 'TO';
    cidade1 = "Palmas";
    codigodacidade1 = "A01";
    populacao1 = 302692;
    area1 = 2227329;
    PIB1 = 10333419000;
    numerodepontosturisticos1 = 19;


    estado2 = "GO";
    cidade2 = "Goiania";
    codigodacidade2 = "B01";
    populacao2 = 1437366;
    area2 = 729296;
    PIB2 = 55314931955;
    numerodepontosturisticos2 = 14;

    // Cálculos
    den1 = populacao1 / area1;
    den2 = populacao2 / area2;

    PIBper1 = PIB1 / populacao1;
    PIBper2 = PIB2 / populacao2;

    super1 = (float) populacao1 + area1 + PIB1 + numerodepontosturisticos1 + PIBper1 - den1;
    super2 = (float) populacao2 + area2 + PIB2 + numerodepontosturisticos2 + PIBper2 - den2;

       
   
    printf("------CARTA %s------\n", estado1);
    printf("O código da cidade é: %s.\n", codigodacidade1);
    printf("O nome da cidade é: %s.\n", cidade1);
    printf("A população da cidade é: %d habitante.\n", populacao1);
    printf("A área da cidade é: %.2f Km².\n", area1);
    printf("O PIB da cidade é: %.2f, reais.\n", PIB1);
    printf("Nº de pontos turístico é: %d.\n", numerodepontosturisticos1);
    printf("A densidade populacional é: %.2f.\n", den1);
    printf("O PIB per capita é: %.2f.\n", PIBper1);
    printf("O super poder da carta 1 é: %.2f. \n\n", super1);

    printf("------CARTA %s------\n", estado2);
    printf("O código da cidade é: %s.\n", codigodacidade2);
    printf("O nome da cidade é: %s.\n", cidade2);
    printf("A população da cidade é: %d habitante.\n", populacao2);
    printf("A área da cidade é: %.2f Km².\n", area2);
    printf("O PIB da cidade é: %.2f, reais.\n", PIB2);
    printf("Nº de pontos turístico é: %d.\n", numerodepontosturisticos2);
    printf("A densidade populacional é: %.2f.\n", den2);
    printf("O PIB per capita é: %.2f.\n", PIBper2);
    printf("O super poder da carta 2 é: %.2f. \n\n", super2);

    // Comparação
    
    printf("A carta vencedora para o item 'População' é: %d.\n", populacao1 > populacao2);
    printf("A carta vencedora para o item 'àrea' é: %d.\n", area1 > area2);
    printf("A carta vencedora para o item 'PIB' é: %d.\n", PIB1 > PIB2);
    printf("A carta vencedora para o item 'Pontos turísticos' é: %d.\n", numerodepontosturisticos1 > numerodepontosturisticos2);
    printf("A carta vencedora para o item 'PIB per Capita' é: %d.\n", PIBper1 > PIBper2);
    printf("A carta vencedora para o item 'super Poder' é: %d.\n", super1 > super2);
    printf("A carta vencedora para o item 'densidade Populacional' é: %d.\n\n", den1 < den2);


    return 0;



}