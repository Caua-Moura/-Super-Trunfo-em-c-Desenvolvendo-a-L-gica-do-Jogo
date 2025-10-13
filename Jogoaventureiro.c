#include <stdio.h>
#include <string.h>

int main () {

    char estado[40], cidade[40], codigocarta[40];
    char estado2[40], cidade2[40], codigocarta2[40];
    int populacao, pontosTuristicos;
    int populacao2, pontosTuristicos2;
    float aKm2, pib;
    float aKm2_2, pib_2;
    float dp, dp2;
    float pibc, pibc2;

    printf("Informação da carta 1\n");

     printf("Digite o nome do seu estado: ");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = '\0'; 

    printf("Digite o código da carta: ");
    fgets(codigocarta, sizeof(codigocarta), stdin);
    codigocarta[strcspn(codigocarta, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    getchar(); 

    printf("Digite a área em Km²: ");
    scanf("%f", &aKm2);
    getchar();

    printf("Digite o PIB: ");
    scanf("%f", &pib);
    getchar();

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);
    getchar();

    printf("Informação da carta 2\n");

    printf("Digite o nome do seu estado: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Digite o código da carta: ");
    fgets(codigocarta2, sizeof(codigocarta2), stdin);
    codigocarta2[strcspn(codigocarta2, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    getchar();

    printf("Digite a área em Km²: ");
    scanf("%f", &aKm2_2);
    getchar();

    printf("Digite o PIB: ");
    scanf("%f", &pib_2);
    getchar();

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    getchar();

    dp = populacao / aKm2;
    dp2 = populacao2 / aKm2_2;
    pibc = pib / populacao;
    pibc2 = pib_2 / populacao2;

    printf("Carta 1 \n");
    
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigocarta);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área em Km²: %.2f \n", aKm2);
    printf("PIB: %.2f \n", pib);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos);
    printf("Densidade populacional: %.2f \n", dp);
    printf("PIB per capita: %.2f \n", pibc);

    printf("Carta 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigocarta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área em Km²: %.2f \n", aKm2_2);
    printf("PIB: %.2f \n", pib_2);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos2);
    printf("Densidade populacional: %.2f \n", dp2);
    printf("PIB per capita: %.2f \n", pibc2);

    printf("Escolha os atributos que deseja comparar:\n");
    printf("(1) Cidade\n");
    printf("(2) população\n");
    printf("(3) área\n");
    printf("(4) PIB\n");
    printf("(5) pontos turísticos\n");
    printf("(6) Densidade demografica\n");
    int escolha;
    scanf("%d", &escolha);

    switch (escolha){
        case 1:
            printf("%s -- %s\n", cidade, cidade2);
        break;
        case 2:
            if(populacao > populacao2){
                printf("A população de %s é maior que a população de %s\n", cidade, cidade2);
            } else {
                printf("A população de %s é maior que a população de %s\n", cidade2, cidade);
            }
        break;
        case 3:
            if(aKm² > aKm2_2){
                printf("A área de %s é maior que a área de %s\n", cidade, cidade2);
            } else {
                printf("A área de %s é maior que a área de %s\n", cidade2, cidade);
            }
        break;
        case 4:
            if(pib > pib_2){
                printf("O PIB de %s é maior que o PIB de %s\n", cidade, cidade2);
            } else {
                printf("O PIB de %s é maior que o PIB de %s\n", cidade2, cidade);
            }
        break;
        case 5:
            if(pontosTuristicos > pontosTuristicos2){
                printf("O número de pontos turísticos de %s é maior que o número de pontos turísticos de %s\n", cidade, cidade2);
            } else {
                printf("O número de pontos turísticos de %s é maior que o número de pontos turísticos de %s\n", cidade2, cidade);
            }
        break;
        case 6:
            if (dp < dp2){
                printf("A densidade populacional de %s é menor que a densidade populacional de %s\n", cidade, cidade2);
            } else if(dp2 < dp){
                printf("A densidade populacional de %s é menor que a densidade populacional de %s\n", cidade2, cidade);
            }
        break;
        default:
            printf("Opção inválida\n");
        break;
    }

    return 0;
}


