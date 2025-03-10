#include <stdio.h>

int main() {
    
   
 
    char estado1 [50] = "TO";
    char cidade1 [50] = "Palmas";
    char codigodacidade1 [50] = "A01";
    int populacao1 = 302692;
    float area1 = 2227329;
    float PIB1 = 10333419000;
    int numerodepontosturisticos1 = 19;


    char estado2 [50] = "GO";
    char cidade2 [50] = "Goiania";
    char codigodacidade2 [50] = "B01";
    int populacao2 = 1437366;
    float area2 = 729296;
    float PIB2 = 55314931955;
    int numerodepontosturisticos2 = 14;

    // Cálculos
    float den1 = populacao1 / area1;
    float den2 = populacao2 / area2;

    float PIBper1 = PIB1 / populacao1;
    float PIBper2 = PIB2 / populacao2;

    float super1 = populacao1 + area1 + PIB1 + numerodepontosturisticos1 + PIBper1 - den1;
    float super2 = populacao2 + area2 + PIB2 + numerodepontosturisticos2 + PIBper2 - den2;

       
   
    printf("---------------------CARTA %s---------------------\n", codigodacidade1);
    printf("O Estado é: %s.\n", estado1);
    printf("O nome da cidade é: %s.\n", cidade1);
    printf("A população da cidade é: %d habitante.\n", populacao1);
    printf("A área da cidade é: %.2f Km².\n", area1);
    printf("O PIB da cidade é: %.2f, reais.\n", PIB1);
    printf("Nº de pontos turístico é: %d.\n", numerodepontosturisticos1);
    printf("A densidade populacional é: %.2f.\n", den1);
    printf("O PIB per capita é: %.2f.\n", PIBper1);
    printf("O super poder da carta 1 é: %.2f. \n\n", super1);

    printf("---------------------CARTA %s---------------------\n", codigodacidade2);
    printf("O Estado é: %s.\n", estado2);
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