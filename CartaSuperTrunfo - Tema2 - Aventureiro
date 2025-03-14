#include <stdio.h>

int main() {
    
    char estado1 [50] = "TO";
    char cidade1 [50] = "Palmas";
    char codigodacidade1 [50] = "A01";
    
    char estado2 [50] = "GO";
    char cidade2 [50] = "Goiania";
    char codigodacidade2 [50] = "B01";
        
    int escolha;

    printf("Jogador 1 - Escolha o Atributo que será usado:\n");
    printf("1 - População.\n");
    printf("2 - Área.\n");
    printf("3 - PIB.\n");
    printf("4 - Pontos turísticos.\n");
    printf("5 - Densidade.\n");
    printf("6 - PIB per capita.\n");
    
    printf("Escolha uma das opções: ");
    scanf("%d", &escolha);
    
    switch (escolha)
    {
    case 1:
        int populacao1, populacao2;

        printf("Digite a população da 1º carta: \n");
        scanf("%d", &populacao1);
        printf("Digite a população da 2º carta: \n");
        scanf("%d", &populacao2);

        if (populacao1 > populacao2){
            printf("------CARTA (%s - %s) VENCEU-----\n", cidade1, codigodacidade1);
            printf("População: %d habitantes. / População: %d habitantes.", populacao1, populacao2);
        } else{
            printf("------CARTA (%s - %s) VENCEU-----\n", cidade2, codigodacidade2);
            printf("População: %d habitantes. / População: %d habitantes.", populacao2, populacao1);
        }
            break;
    case 2:
        float area1, area2;
    
    
        printf("Digite a área da 1º carta: \n");
        scanf("%f", &area1);
        printf("Digite a área da 2º carta: \n");
        scanf("%f", &area2);
        
        if (area1 > area2){
            printf("------CARTA (%s - %s) VENCEU-----\n", cidade1, codigodacidade1);
            printf("Área: %.2f m². / Área: %.2f m²", area1, area2);
        } else{
            printf("------CARTA (%s - %s) VENCEU-----\n", cidade2, codigodacidade2);
            printf("Área: %.2f m². / Área: %.2f m²", area2, area1);
        }
            break;
    case 3:
        float PIB1, PIB2;

        printf("Digite o PIB da 1º carta: \n");
        scanf("%f", &PIB1);
        printf("Digite o PIB da 2º carta: \n");
        scanf("%f", &PIB2);

        if (PIB1 > PIB2){
            printf("------CARTA (%s - %s) VENCEU-----\n", cidade1, codigodacidade1);
            printf("PIB: R$ %.2f reais. / PIB: R$ %.2f reais.", PIB1, PIB2);

        } else{
            printf("------CARTA (%s - %s) VENCEU-----\n", cidade2, codigodacidade2);
            printf("PIB: R$ %.2f reais. / PIB: R$ %.2f reais.", PIB2, PIB1);
        }
            break;
    case 4:
        int pontostur1, pontostur2;

        printf("Digite o número de pontos turístico da 1º carta: \n");
        scanf("%d", &pontostur1);
        printf("Digite o número de pontos turístico da 2º carta: \n");
        scanf("%d", &pontostur2);

        if (pontostur1 > pontostur2){
            printf("------CARTA (%s - %s) VENCEU-----\n", cidade1, codigodacidade1);
            printf("Pontos Turísticos: %d. / Pontos turísticos: %d.", pontostur1, pontostur2);
        } else{
            printf("------CARTA (%s - %s) VENCEU-----\n", cidade2, codigodacidade2);
            printf("Pontos Turísticos: %d. / Pontos turísticos: %d.", pontostur2, pontostur1);
        }
            break;
    case 5:
        float den1, den2;

        printf("Digite a população da 1º carta: \n");
        scanf("%d", &populacao1);
        printf("Digite a população da 2º carta: \n");
        scanf("%d", &populacao2);
        printf("Digite a área da 1º carta: \n");
        scanf("%f", &area1);
        printf("Digite a área da 2º carta: \n");
        scanf("%f", &area2);

        den1 = populacao1 / area1;
        den2 = populacao2 / area2;


        if (den1 < den2){
            printf("------CARTA (%s - %s) VENCEU-----\n", cidade1, codigodacidade1);
            printf("Densidade Habitacional: %.2f hab./m². / Densidade Habitacional: %.2f hab./m².", den1, den2);
        } else{
            printf("------CARTA (%s - %s) VENCEU-----\n", cidade2, codigodacidade2);
            printf("Densidade Habitacional: %.2f hab./m². / Densidade Habitacional: %.2f hab./m².", den2, den1);
        }
            break;
    case 6:
        float PIBper1, PIBper2;
    
        printf("Digite a população da 1º carta: \n");
        scanf("%d", &populacao1);
        printf("Digite a população da 2º carta: \n");
        scanf("%d", &populacao2);
        printf("Digite o PIB da 1º carta: \n");
        scanf("%f", &PIB1);
        printf("Digite o PIB da 2º carta: \n");
        scanf("%f", &PIB2);

        PIBper1 = PIB1 / populacao1;
        PIBper2 = PIB2 / populacao2;
    
    if (PIBper1 > PIBper2){
            printf("------CARTA (%s - %s) VENCEU-----\n", cidade1, codigodacidade1);
            printf("PIB per Capita: R$ %.2f reais/hab.. / PIB per Capita: R$ %.2f reais/hab..", PIBper1, PIBper2);
        } else{
            printf("------CARTA (%s - %s) VENCEU-----\n", cidade2, codigodacidade2);
            printf("PIB per Capita: R$ %.2f reais/hab.. / PIB per Capita: R$ %.2f reais/hab..", PIBper2, PIBper1);
        }
            break;
    default:
        printf("Opção Inválida!!!");
    }

    return 0;

}
