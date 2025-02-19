#include <stdio.h>


int main() {
    
   
    int códigodacidade1, númerodepontosturísticos1, códigodacidade2, númerodepontosturísticos2, população1, população2;
    float área1, PIB1, área2, PIB2;
    char nome1[50], nome2[50];

// Entrada de dados da 1 carta
    printf("Digite o nome da 1º carta: \n");
    scanf("%s", &nome1);

    printf("Digite o código da cidade da 1º carta: \n");
    scanf("%d", &códigodacidade1);

    printf("Digite a população da 1º carta: \n");
    scanf("%d", &população1);

    printf("Digite a área da 1º carta: \n");
    scanf("%f", &área1);

    printf("Digite o PIB da 1º carta: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turístico da 1º carta: \n");
    scanf("%d", &númerodepontosturísticos1);

//Entrada de dados da 2 carta

    printf("Digite o nome da 2º carta: \n");
    scanf("%s", &nome2);

    printf("Digite o código da cidade da 2º carta: \n");
    scanf("%d", &códigodacidade2);

    printf("Digite a população da 2º carta: \n");
    scanf("%d", &população2);

    printf("Digite a área da 2º carta: \n");
    scanf("%f", &área2);

    printf("Digite o PIB da 2º carta: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turístico da 2º carta: \n");
    scanf("%d", &númerodepontosturísticos2);

// Saída de dados da carta 1

    printf("------CARTA %d------", códigodacidade1);
    printf("O código da cidade é: %d.\n", códigodacidade1);
    printf("O nome da cidade é: %f.", nome1);
    printf("A população da cidade é: %d habitante.\n", população1);
    printf("A área da cidade é: %f Km².\n", área1);
    printf("O PIB da cidade é: %f, reais.\n", PIB1);
    printf("Nº de pontos turístico é: %d.\n", númerodepontosturísticos1);

// Saída de dados da Carta 2

    printf("------CARTA %d------", códigodacidade2);
    printf("O código da cidade é: %d.\n", códigodacidade2);
    printf("O nome da cidade é: %f.", nome2);
    printf("A população da cidade é: %d habitante.\n", população2);
    printf("A área da cidade é: %f Km².\n", área2);
    printf("O PIB da cidade é: %f, reais.\n", PIB2);
    printf("Nº de pontos turístico é: %d.\n", númerodepontosturísticos2);
    
    return 0;
}