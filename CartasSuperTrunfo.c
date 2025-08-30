#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo!\n");
    printf("Novo Commit\n");
    
    
    char estado1;
    char codigo1[5];
    char nome1  [50];
    int populacao1;
    float area1;
    float PIB1;
    int pontos1;

    char estado2;
    char codigo2[5];
    char nome2  [50];
    int populacao2;
    float area2;
    float PIB2;
    int pontos2;

    printf("Digite seu estado :\n");
    scanf(" %c", &estado1);

    printf("Digite o codigo: \n");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: \n");
    scanf ("%s", nome1);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a area (em km²) \n ");
    scanf("%f",&area1); 

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos1);

    printf("Digite seu estado :\n");
    scanf(" %c", &estado2);

    printf("Digite o codigo: \n");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: \n");
    scanf ("%s", nome2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a area (em km²) \n ");
    scanf("%f",&area2); 

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos2);

printf("\n===== CARTA 1 =====\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nome1);
printf("População: %d habitantes\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", PIB1);
printf("Número de Pontos Turísticos: %d\n", pontos1);
printf("============================\n");

printf("\n===== CARTA 2 =====\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nome2);
printf("População: %d habitantes\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", PIB2);
printf("Número de Pontos Turísticos: %d\n", pontos2);
printf("============================\n");






    return 0;

}



   