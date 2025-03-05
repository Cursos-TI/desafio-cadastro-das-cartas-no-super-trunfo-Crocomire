#include <stdio.h>

int main() {
     // Identificadores das cartas (ex: A01, B02)
     char codigo01[4], codigo02[4];

    // Tamanho da população
    int populacao01, populacao02;

    // Tamanho da cidade em km²
    float area01, area02;

    // Produto Interno Bruto
    float pib01, pib02;

    // Quantidade de Pontos Turisticos
    int pturistico01, pturistico02;

    //Cadastro da primeira carta
    printf("Cadastro da Carta 1 (Utilize apenas números inteiros)\n");

    printf("Digite o código da cidade (ex: A01, B02): ");
    scanf("%3s", codigo01);

    printf("Qual o tamanho da população da cidade informada? \n");
    scanf("%d", &populacao01);

    printf("Quantos km² possui esta cidade? \n");
    scanf("%f", &area01);

    printf("Informe o PIB: \n");
    scanf("%f", &pib01);

    printf("Qual o número de pontos turísticos? \n");
    scanf("%d", &pturistico01);

    //Exibe os dados cadastrados da primeira carta
    printf("\n=========== Primeira Carta ===========\n");
    printf("Carta 1 - Código: %s\n", codigo01);
    printf("População: %d habitantes\n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("Pontos Turísticos: %d\n\n", pturistico01);

    //Cadastro da segunda carta
    printf("Cadastro da Carta 2 (Utilize apenas números inteiros)\n");

    printf("Digite o código da cidade (ex: A01, B02): ");
    scanf("%3s", codigo02);

    printf("Qual o tamanho da população da cidade informada? \n");
    scanf("%d", &populacao02);

    printf("Quantos km² possui esta cidade? \n");
    scanf("%f", &area02);

    printf("Informe o PIB: \n");
    scanf("%f", &pib02);

    printf("Qual o número de pontos turísticos? \n");
    scanf("%d", &pturistico02);

     //Exibe os dados cadastrados da Segunda carta
     printf("\n=========== Segunda Carta ===========\n");
     printf("Carta 1 - Código: %s\n", codigo02);
     printf("População: %d habitantes\n", populacao02);
     printf("Área: %.2f km²\n", area02);
     printf("PIB: %.2f\n", pib02);
     printf("Pontos Turísticos: %d\n\n", pturistico02);

    return 0;
}