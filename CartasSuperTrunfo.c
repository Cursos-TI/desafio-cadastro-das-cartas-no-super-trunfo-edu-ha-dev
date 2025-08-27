#include <stdio.h>

int main() {
    char Estado, Codigo_Carta[4], Nome_Cidade[20],Estado2, Codigo_Carta2[4], Nome_Cidade2[20];
    int Populacao, Numero_Pontos_Turisticos,Populacao2, Numero_Pontos_Turisticos2;
    float Area, PIB, Area2, PIB2;

    //Instruções básicas do jogo
    printf("Bem vindo(a) ao jogo Super Trunfo!\nO Super Trunfo é um jogo de países: um sistema para cadastrar as cartas com informações sobre as cidades.\nVocê pode cadastrar 2 cartas no baralho, e quando terminar de preencher, o resultado será mostrado, siga as instruções e se divirta.\n\n");

    //Cadastro Carta1
    printf("01/07 - Para começar, digite uma letra de 'A' a 'H', que representa um dos oito estados: ");
    scanf(" %c", &Estado);

    printf("02/07 - Agora, digite o código do estado '%c' de 01 a 04: ", Estado);
    scanf("%s", Codigo_Carta);

    printf("03/07 - Ótimo! Qual é o nome da cidade: ");
    scanf("%s", Nome_Cidade);

    printf("04/07 - Qual é a população da cidade %s: ", Nome_Cidade);
    scanf("%i", &Populacao);

    printf("05/07 - Qual é a Área(em km²) da cidade %s: ", Nome_Cidade);
    scanf("%f", &Area);

    printf("06/07 - Qual é o PIB da cidade %s: ", Nome_Cidade);
    scanf("%f", &PIB);

    printf("07/07 - Qual é o numero de pontos turisticos da cidade %s: ", Nome_Cidade);
    scanf("%i", &Numero_Pontos_Turisticos);

    //Cadastro Carta2
    printf("\n\nÓtimo! Você terminou o cadastro da Carta 1 - %s\nAgora vamos começar o cadastro da Carta 2\n\n", Nome_Cidade);
    printf("01/07 - Para começar, digite uma letra de 'A' a 'H', que representa um dos oito estados: ");
    scanf(" %c", &Estado2);

    printf("02/07 - Agora, digite o código do estado '%c' de 01 a 04: ", Estado2);
    scanf("%s", Codigo_Carta2);

    printf("03/07 - Ótimo! Qual é o nome da cidade: ");
    scanf("%s", Nome_Cidade2);

    printf("04/07 - Qual é a população da cidade %s: ", Nome_Cidade2);
    scanf("%i", &Populacao2);

    printf("05/07 - Qual é a Área(em km²) da cidade %s: ", Nome_Cidade2);
    scanf("%f", &Area2);

    printf("06/07 - Qual é o PIB da cidade %s: ", Nome_Cidade2);
    scanf("%f", &PIB2);

    printf("07/07 - Qual é o numero de pontos turisticos da cidade %s: ", Nome_Cidade2);
    scanf("%i", &Numero_Pontos_Turisticos2);

    //Informações cadastradas
    printf("\n\nCarta1:\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %c%s\n", Estado, Codigo_Carta);
    printf("Nome da Cidade: %s\n", Nome_Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %i\n\n", Numero_Pontos_Turisticos);

    printf("Carta2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %c%s\n", Estado2, Codigo_Carta2);
    printf("Nome da Cidade: %s\n", Nome_Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %i\n\n", Numero_Pontos_Turisticos2);

    return 0;
}
