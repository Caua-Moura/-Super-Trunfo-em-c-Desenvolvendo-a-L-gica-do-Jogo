#include <stdio.h>

int main () {

    char nome[40], estado[40], cidade[40], codigocarta[40];
    char nome2[40], estado2[40], cidade2[40], codigocarta2[40];
    int populacao, pontosTuristicos;
    int populacao2, pontosTuristicos2;
    float aKm², pib;
    float aKm²_2, pib_2;
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
    scanf("%f", &aKm²);
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
    scanf("%f", &aKm²_2);
    getchar();

    printf("Digite o PIB: ");
    scanf("%f", &pib_2);
    getchar();

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    getchar();

    dp = populacao / aKm²;
    dp2 = populacao2 / aKm²_2;
    pibc = pib / populacao;
    pibc2 = pib_2 / populacao2;

    printf("Carta 1 \n");
    
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigocarta);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área em Km²: %.2f \n", aKm²);
    printf("PIB: %.2f \n", pib);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos);
    printf("Densidade populacional: %.2f \n", dp);
    printf("PIB per capita: %.2f \n", pibc);

    printf("Carta 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigocarta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área em Km²: %.2f \n", aKm²_2);
    printf("PIB: %.2f \n", pib_2);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos2);
    printf("Densidade populacional: %.2f \n", dp2);
    printf("PIB per capita: %.2f \n", pibc2);

    printf("Comparação entre as cartas (População)\n");

    printf("Carta1 - %s: %d \n", cidade, populacao);
    printf("Carta2 - %s: %d \n", cidade2, populacao2);

    if (populacao > populacao2){
        printf("A carta 1 (%s) venceu!", cidade);
    } else{
        printf("A carta 2 (%s) venceu!", cidade2);
    }
    return 0;
}
