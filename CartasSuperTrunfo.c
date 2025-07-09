#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char estado1;
    char codigo1[03];
    char cidade1[20];
    int populaçao1;
    float area1;
    float PIB1;
    int pontos1;

    char estado2;
    char codigo2[03];
    char cidade2[20];
    int populaçao2;
    float area2;
    float PIB2;
    int pontos2;

    printf("Carta 1:\n");
    printf("Digite o estado: ");
    scanf("%c", &estado1);
    printf("Digite o códgio da carta: ");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);
    printf("Digite a população: ");
    scanf("%d", &populaçao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("Carta 2:\n");
    scanf("%c", &estado2);
    printf("Carta 2:\n");
    printf("Digite o estado: ");
    scanf("%c", &estado2);
    printf("Digite o códgio da carta: ");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);
    printf("Digite a população: ");
    scanf("%d", &populaçao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    return 0;
}
