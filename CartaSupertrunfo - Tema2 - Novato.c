#include <stdio.h>

int main() {
    
   
    int numerodepontosturisticos1, numerodepontosturisticos2, populacao1, populacao2;
    float area1, PIB1, area2, PIB2, den1, den2, PIBper1, PIBper2, super1, super2;
    
    char estado1 [50] = "TO";
    char cidade1 [50] = "Palmas";
    char codigodacidade1 [50] = "A01";
    
    char estado2 [50] = "GO";
    char cidade2 [50] = "Goiania";
    char codigodacidade2 [50] = "B01";
    
    
    
    printf("Digite a população da 1º carta: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da 1º carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da 1º carta: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turístico da 1º carta: \n");
    scanf("%d", &numerodepontosturisticos1);



    printf("Digite a população da 2º carta: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da 2º carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da 2º carta: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turístico da 2º carta: \n");
    scanf("%d", &numerodepontosturisticos2);


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
    
    if(populacao1 > populacao2){
        printf("A carta %s é a vencedora. Com a população de %d. A carta perdedora tem a população de %d.\n", cidade1, populacao1, populacao2);
    }
    else{
        printf("A carta %s é a vencedora. Com a população de %d. A carta perdedora tem a população de %d.\n", cidade2, populacao2, populacao1);
    }


    if(area1 > area2){
        printf("A carta %s é a vencedora. Com a área de %.2f. A carta perdedora tem a área de %.2f.\n", cidade1, area1, area2);
    }
    else{
        printf("A carta %s é a vencedora. Com a área de %.2f. A carta perdedora tem a área de %.2f.\n", cidade2, area2, area1);
    }


    if(PIB1 > PIB2){
        printf("A carta %s é a vencedora. Com o PIB de %.2f.A carta perdedora tem o PIB de %.2f.\n", cidade1, PIB1, PIB2);
    }
    else{
        printf("A carta %s é a vencedora. Com o PIB %.2f. A carta perdedora tem o PIB de %.2f.\n", cidade2, PIB2, PIB1);
    }


    if(numerodepontosturisticos1 > numerodepontosturisticos2){
        printf("A carta %s é a vencedora. Com o número de pontos turístico de %d. A carta perdedora tem o número de Pontos turístico de %d.\n", cidade1, numerodepontosturisticos1, numerodepontosturisticos2);
    }
    else{
        printf("A carta %s é a vencedora. Com o número de pontos turístico de %d. A carta perdedora tem o número de Pontos turístico de %d.\n", cidade2, numerodepontosturisticos2, numerodepontosturisticos1);
    }


    if(den1 < den2){
        printf("A carta %s é a vencedora. Com a densidade demográfica de %.2f. A carta perdedora tem a densidade demográfica de %.2f.\n", cidade1, den1, den2);
    }
    else{
        printf("A carta %s é a vencedora. Com a densidade demográfica de %.2f. A carta perdedora tem a densidade demográfica de %.2f.\n", cidade2, den2, den1);
    }


    if(PIBper1 > PIBper2){
        printf("A carta %s é a vencedora. Com o PIB per Capita de %.2f. A carta perdedora tem o PIB per Capita de %.2f.\n", cidade1, PIBper1, PIBper2);
    }
    else{
        printf("A carta %s é a vencedora. Com o PIB per Capita de %.2f. A carta perdedora tem o PIB per Capita de %.2f.\n", cidade2, PIBper2, PIBper1);
    }

    if(super1 > super2){
        printf("A carta %s é a vencedora. Com o Super Poder de %.2f. A carta perdedora tem o super poder de %.2f.\n", cidade1, super1, super2);
    }
    else{
        printf("A carta %s é a vencedora. Com o super poder de %.2f. A carta perdedora tem o spuer poder de %.2f.\n", cidade2, super2, super1);
    }



    return 0;

}
