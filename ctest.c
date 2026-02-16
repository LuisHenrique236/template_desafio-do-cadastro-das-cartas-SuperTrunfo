#include <stdio.h>

int main(){
    char estado;
    char codigo [50];
    char nome_cidade [50];
    int populacao;
    float area;
    float pib;
    int turisticos;

    printf("\n--Carta 01--\n");
    
    printf("Digite a letra para o estado:"); //uma letra para a carta
    scanf( "%c", &estado );
    
    printf("Codigo:"); // letra mais nomero da carta 
    scanf("%s", codigo);

    printf("Nome da cidade:");
    scanf("%s", nome_cidade );

    printf("População:");
    scanf("%d", &populacao);

    printf("Área:");
    scanf("%f", &area);

    printf("PIB:");
    scanf("%d", &pib);
 
    printf("Pontos turisticos:");
    scanf("%d", &turisticos);

    //imprimir 
    Printf("\n--Dados da Carta--\n");
    printf("Estadooo: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da ciade: %s\n", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turisticos: %d\n", turisticos);


return 0;
}