#include <stdio.h>


int main() {
    
   
    int codigodacidade1, numerodepontosturisticos1, codigodacidade2, numerodepontosturisticos2, populaçao1, populaçao2;
    float area1, PIB1, area2, PIB2;
    char nome1[50], nome2[50];

    printf("Digite o nome da 1º carta: \n");
    scanf("%s", &nome1);

    printf("Digite o código da cidade da 1º carta: \n");
    scanf("%d", &codigodacidade1);

    printf("Digite a população da 1º carta: \n");
    scanf("%d", &populaçao1);

    printf("Digite a área da 1º carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da 1º carta: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turístico da 1º carta: \n");
    scanf("%d", &numerodepontosturisticos1);



    printf("Digite o nome da 2º carta: \n");
    scanf("%s", &nome2);

    printf("Digite o código da cidade da 2º carta: \n");
    scanf("%d", &codigodacidade2);

    printf("Digite a população da 2º carta: \n");
    scanf("%d", &populaçao2);

    printf("Digite a área da 2º carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da 2º carta: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turístico da 2º carta: \n");
    scanf("%d", &numerodepontosturisticos2);


    printf("------CARTA %d------", codigodacidade1);
    printf("O código da cidade é: %d.\n", codigodacidade1);
    printf("O nome da cidade é: %s.", nome1);
    printf("A população da cidade é: %d habitante.\n", populaçao1);
    printf("A área da cidade é: %f Km².\n", area1);
    printf("O PIB da cidade é: %f, reais.\n", PIB1);
    printf("Nº de pontos turístico é: %d.\n", numerodepontosturisticos1);

    printf("------CARTA %d------", codigodacidade2);
    printf("O código da cidade é: %d.\n", codigodacidade2);
    printf("O nome da cidade é: %s.", nome2);
    printf("A população da cidade é: %d habitante.\n", populaçao2);
    printf("A área da cidade é: %f Km².\n", area2);
    printf("O PIB da cidade é: %f, reais.\n", PIB2);
    printf("Nº de pontos turístico é: %d.\n", numerodepontosturisticos2);
    
    return 0;
}
