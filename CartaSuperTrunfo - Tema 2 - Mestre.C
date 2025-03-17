#include <stdio.h>

int main() {

    char estado1 [50] = "TO";
    char cidade1 [50] = "Palmas";
    char codigodacidade1 [50] = "A01";
    
    char estado2 [50] = "GO";
    char cidade2 [50] = "Goiania";
    char codigodacidade2 [50] = "B01";
        
    char atributo1, atributo2;
    float resultado1, resultado2, area1, area2, PIB1, PIB2, den1, den2, PIBper1, PIBper2;
    int populacao1, populacao2, pontotur1, pontotur2;

    printf("----------BEM VINDO AO SUER TRUNFO----------\n");
    printf("Escolha um dos atributos abaixo: \n");
    printf("P - População. \n");
    printf("A - Área. \n");
    printf("B - PIB. \n");
    printf("T - Pontos Turísticos. \n");
    printf("D - Densidade Habitacional. \n");
    printf("C - PIB per Capita. \n");

    printf("Escolha seu 1º atributo: ");
    scanf("%s", &atributo1);

    switch (atributo1)  {
    
    case 'P':
    case 'p':
        
        printf("Você escolheu o atributo POPULAÇÂO.\n");
        printf("Digite a população da 1º Carta:\n");
        scanf("%d", &populacao1);
        printf("Digite a população da 2º Carta:\n");
        scanf("%d", &populacao2);
        
        resultado1 = populacao1 > populacao2 ? printf("Carta %s VENCEU!!\n", cidade1) : printf("Carta %s VENCEU!!\n", cidade2);

        break;

    case 'A':
    case 'a':
            
        printf("Você escolheu o atributo Área.\n");
        printf("Digite a área da 1º Carta:\n");
        scanf("%d", &area1);
        printf("Digite a área da 2º Carta:\n");
        scanf("%d", &area2);

        resultado1 = area1 > area2 ? printf("Carta %s VENCEU!!\n", cidade1) : printf("Carta %s VENCEU!!\n", cidade2);

        break;

    case 'B':
    case 'b':
        
        printf("Você escolheu o atributo PIB.\n");
        printf("Digite a PIB da 1º Carta:\n");
        scanf("%d", &PIB1);
        printf("Digite a população da 2º Carta:\n");
        scanf("%d", &PIB2);

        resultado1 = PIB1 > PIB2 ? printf("Carta %s VENCEU!!\n", cidade1) : printf("Carta %s VENCEU!!\n", cidade2);

        break;

    case 'T':
    case 't':
        
        printf("Você escolheu o atributo PONTOS TURÍSTICOS.\n");
        printf("Digite o número de pontos turístico da 1º carta: \n");
        scanf("%d", &pontotur1);
        printf("Digite o número de pontos turístico da 2º carta: \n");
        scanf("%d", &pontotur2);

        resultado1 = pontotur1 > pontotur2 ? printf("Carta %s VENCEU!!\n", cidade1) : printf("Carta %s VENCEU!!\n", cidade2);

        break;

    case 'D':
    case 'd':
        
        printf("Você escolheu o atributo DENSIDADE HABITACIONAL.\n");
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

        resultado1 = den1 > den2 ? printf("Carta %s VENCEU!!\n", cidade1) : printf("Carta %s VENCEU!!\n", cidade2);

        break;

    case 'C':
    case 'c':
    
        printf("Você escolheu o atributo PIB PER CAPITA.\n");
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

        resultado1 = PIBper1 > PIBper2 ? printf("Carta %s VENCEU!!\n", cidade1) : printf("Carta %s VENCEU!!\n", cidade2);

        break;
    
    default:
        printf("Opção inválida!!!\n");
        break;
    }

    printf("Escolha o segundo atributos abaixo: \n");
    printf("P - População. \n");
    printf("A - Área. \n");
    printf("B - PIB. \n");
    printf("T - Pontos Turísticos. \n");
    printf("D - Densidade Habitacional. \n");
    printf("C - PIB per Capita. \n");
    
    printf("Escolha seu 2º atributo:\n");
    scanf("%s", &atributo2);

    if(atributo1 == atributo2){
        printf("Você escolheu o mesmo atributo!!!!\n");
    }else{
        switch (atributo2){
    
        case 'P':
        case 'p':
            
            printf("Você escolheu o atributo POPULAÇÂO.\n");
            printf("Digite a população da 1º Carta:\n");
            scanf("%d", &populacao1);
            printf("Digite a população da 2º Carta:\n");
            scanf("%d", &populacao2);
            
            resultado2 = populacao1 > populacao2 ? printf("Carta %s VENCEU!!\n", cidade1) : printf("Carta %s VENCEU!!\n", cidade2);
    
            break;
    
        case 'A':
        case 'a':
                
            printf("Você escolheu o atributo Área.\n");
            printf("Digite a área da 1º Carta:\n");
            scanf("%d", &area1);
            printf("Digite a área da 2º Carta:\n");
            scanf("%d", &area2);
    
            resultado2 = area1 > area2 ? printf("Carta %s VENCEU!!\n", cidade1) : printf("Carta %s VENCEU!!\n", cidade2);
    
            break;
    
        case 'B':
        case 'b':
            
            printf("Você escolheu o atributo PIB.\n");
            printf("Digite a PIB da 1º Carta:\n");
            scanf("%d", &PIB1);
            printf("Digite a população da 2º Carta:\n");
            scanf("%d", &PIB2);
    
            resultado2 = PIB1 > PIB2 ? printf("Carta %s VENCEU!!\n", cidade1) : printf("Carta %s VENCEU!!\n", cidade2);
    
            break;
    
        case 'T':
        case 't':
            
            printf("Você escolheu o atributo PONTOS TURÍSTICOS.\n");
            printf("Digite o número de pontos turístico da 1º carta: \n");
            scanf("%d", &pontotur1);
            printf("Digite o número de pontos turístico da 2º carta: \n");
            scanf("%d", &pontotur2);
    
            resultado2 = pontotur1 > pontotur2 ? printf("Carta %s VENCEU!!\n", cidade1) : printf("Carta %s VENCEU!!\n", cidade2);
    
            break;
    
        case 'D':
        case 'd':
            
            printf("Você escolheu o atributo DENSIDADE HABITACIONAL.\n");
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
    
            resultado2 = den1 > den2 ? printf("Carta %s VENCEU!!\n", cidade1) : printf("Carta %s VENCEU!!\n", cidade2);
    
            break;
    
        case 'C':
        case 'c':
        
            printf("Você escolheu o atributo PIB PER CAPITA.\n");
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
    
            resultado2 = PIBper1 > PIBper2 ? printf("Carta %s VENCEU!!\n", cidade1) : printf("Carta %s VENCEU!!\n", cidade2);
    
            break;
        
        default:
            printf("Opção inválida!!!\n");
            break;
            }   
        }   
        
    if(resultado1 == resultado2){
        printf("---------------PARABÉNS, você VENCEU o jogo!!!---------------\n");
    }else if(resultado1 != resultado2){
        printf("############### O Jogo EMPATOU!!! ###############\n");
    }else{
        printf("*************** INFELIZMENTE, você PERDEU o jogo ***************\n");
    }        



    return 0;
}
