#include <stdio.h>

int main(){
    char estado;
    char codigo[50];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int turisticos;

    printf("--- Cadastro da Carta 01 ---\n");
    
    printf("Digite a letra para o estado: ");
    scanf(" %c", &estado); // O espaço antes do %c evita que ele pule a leitura
    
    printf("Codigo: "); 
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);
 
    printf("Pontos turisticos: ");
    scanf("%d", &turisticos);

    // --- Parte de Impressão Corrigida ---
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %c\n", estado);          // %c para um caractere
    printf("Codigo: %s\n", codigo);          // %s para texto
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n", populacao);    // %d para inteiro
    printf("Área: %.2f km²\n", area);        // %.2f para 2 casas decimais
    printf("PIB: %.2f\n", pib);              // %.2f para ficar organizado
    printf("Pontos turisticos: %d\n", turisticos);

    return 0;
}