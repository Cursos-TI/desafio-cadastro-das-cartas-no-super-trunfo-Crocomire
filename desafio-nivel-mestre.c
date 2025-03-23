#include <stdio.h>

int main() {
    // Nome do estado
    char estado01, estado02;
    // Identificadores das cartas (ex: A01, B02) 
    char codigo01[4], codigo02[4];
    // Tamanho da população
    unsigned long int populacao01, populacao02;
    // Tamanho da cidade em km²
    float area01, area02;
    // Produto Interno Bruto
    float pib01, pib02;
    // Quantidade de Pontos Turísticos
    int pturistico01, pturistico02;
    // Densidade populacional (quanto maior, melhor)
    float densidade1, densidade2;
    // PIB per Capita
    float capita1, capita2;
    //Super poder, soma de todos os dados inseridos pelo usuário
    float superpoder1, superpoder2;


    // ==========Cadastro da primeira carta==========
    printf("==== Cadastro da Carta 1 ====\n");
    //Informar a letra inicial do estado
    printf("Digite a letra inicial do seu estado (ex: A, B, C...)\n");
    scanf(" %c", &estado01);
    //Informar o código da cidade
    printf("Digite o código da cidade (ex: A01, B02): ");
    scanf("%3s", codigo01);
    //Informar o tamanho da população da cidade
    printf("Qual o tamanho da população da cidade informada? \n");
    scanf("%lu", &populacao01);
    //Informar os km² da cidade
    printf("Quantos km² possui esta cidade? \n");
    scanf("%f", &area01);
    //PIB da cidade
    printf("Informe o PIB: \n");
    scanf("%f", &pib01);
    //Informar a quantidade de pontos turisticos
    printf("Qual o número de pontos turísticos? \n");
    scanf("%d", &pturistico01);

    //Cálculo da densidade populacional e PIB per capita
    densidade1 = populacao01 / area01;
    capita1 = pib01 / populacao01;

    //Cálculo do super poder da primeira carta
    superpoder1 = (float)populacao01 + area01 + pib01 + pturistico01 + densidade1 + capita1;

    // Exibe os dados cadastrados da primeira carta
    printf("\n=========== Primeira Carta ===========\n");
    printf("Letra inicial do seu estado: %c\n", estado01);
    printf("Carta 1 - Código: %s\n", codigo01);
    printf("População: %lu habitantes\n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("Pontos Turísticos: %d\n", pturistico01);
    printf("A Densidade Populacional é: %.1f\n", densidade1);
    printf("O PIB per Capita é: %.1f\n", capita1);


    //========================================Cadastro da segunda carta========================================
    printf("==== Cadastro da Carta 2 ====\n");

    printf("Digite a letra inicial do seu estado (ex: A, B, C...)\n");
    scanf(" %c", &estado02);

    printf("Digite o código da cidade (ex: A01, B02): ");
    scanf("%3s", codigo02);

    printf("Qual o tamanho da população da cidade informada? \n");
    scanf("%lu", &populacao02);

    printf("Quantos km² possui esta cidade? \n");
    scanf("%f", &area02);

    printf("Informe o PIB: \n");
    scanf("%f", &pib02);

    printf("Qual o número de pontos turísticos? \n");
    scanf("%d", &pturistico02);

    //Cálculo da densidade populacional e PIB per capita
    densidade2 = populacao02 / area02;
    capita2 = pib02 / populacao02;
    
    //Cálculo do super poder da segunda carta
    superpoder2 = (float)populacao02 + area02 + pib02 + pturistico02 + densidade2 + capita2;

    // Exibe os dados cadastrados da segunda carta
    printf("\n=========== Segunda Carta ===========\n");
    printf("Letra inicial do seu estado: %c\n", estado02);
    printf("Carta 2 - Código: %s\n", codigo02);
    printf("População: %lu habitantes\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("Pontos Turísticos: %d\n", pturistico02);
    printf("A Densidade Populacional é: %.1f\n", densidade2);
    printf("O PIB per Capita é: %.1f\n", capita2);


    //Comparando as cartas
    int populacao = (float) populacao01 > populacao02;
    int area = (float) area01 > area02;
    int pib = (float) pib01 > pib02;
    int pturisticos = (float) pturistico01 > pturistico02;
    int densidade = (float) densidade1 < densidade2;
    int capita = (float) capita1 > capita2;
    int superpoder = (float) superpoder1 > superpoder2;

    //Mostrando resultado para o Jogador
    printf("Se o resultado for 1, Carta 1 vence, Resultado 0, Carta 2 vence\n");
    printf("População: %d\n", populacao);
    printf("Area: %d\n", area);
    printf("Pontos Turisticos: %d\n", pturisticos);
    printf("Densidade: %d\n", densidade);
    printf("PIB per Capita: %d\n", capita);
    printf("Super Poder %d\n", superpoder);


    return 0;
}