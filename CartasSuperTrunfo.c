#include <stdio.h>

int main(){
    
    //carta 01
    char estado1; 
    char codigo1 [50];
    char nome_cidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;

    //carta 02
    char estado2; 
    char codigo2 [50];
    char nome_cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;

    //coleta de dados 01

    printf("\n--Carta 01--\n");
    
    printf("Digite a letra para o estado: "); //uma letra para a carta
    scanf( " %c", &estado1 );
    
    printf("Codigo: "); // letra mais nomero da carta 
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1 );

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);
  
    printf("Pontos turisticos: ");
    scanf("%d", &turisticos1);

    //coleta de dados 02

    printf("\n--Carta 02--\n");
    
    printf("Digite a letra para o estado: "); //uma letra para a carta
    scanf( " %c", &estado2 );
    
    printf("Codigo: "); // letra mais nomero da carta 
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2 );

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);
 
    printf("Pontos turisticos: ");
    scanf("%d", &turisticos2);

    //imprimir carta 01
    printf("\n--Dados da Carta 01--\n");
    printf("Estadooo: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da ciade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos turisticos: %d\n", turisticos1);

    //imprimir carta 02

    printf("\n--Dados da Carta02 --\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da ciade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turisticos: %d\n", turisticos2);


return 0;
}