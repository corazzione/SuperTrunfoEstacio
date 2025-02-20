// Created by corazzione on 20/02/2025.

#include <stdio.h>

int main() {

    //Aqui criamos algo que eu vi fuçando o Stack overflow, as estruturas

struct CartaSuperTrunfo {
  char estado;
  char codigo[4];
  char nomeCidade[30];
  int populacao;
  float area;
  float pib;
  int pontosTuristicos;
};

    //no trecho abaixo coletamos as informações das cartas para depois mostrar elas na tela

    struct CartaSuperTrunfo carta1, carta2;

    printf("Escolha uma letra entre 'A' e 'H' para representar um dos oito Estados:");
    scanf(" %c", &carta1.estado);

    printf("Escolha um número de 1 a 4 para o código da carta:");
    int numeroCodigo;
    scanf("%d", &numeroCodigo);
    sprintf(carta1.codigo, "%c%02d", carta1.estado, numeroCodigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("digite a População: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a área em (km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    //No trecho abaixo exibimos a primeira carta:

    printf("\nCarta 1:\n");
    printf("Estado: %c\n",carta1.estado);
    printf("Código: %s\n",carta1.codigo);
    printf("Cidade: %s\n]",carta1.nomeCidade);
    printf("População: %d\n",carta1.populacao);
    printf("Área: %.2f km²\n",carta1.area);
    printf("PIB: %.2f Bilhões de reais\n",carta1.pib);
    printf("Número de Pontos Turísticos: %d\n",carta1.pontosTuristicos);

    //Propriedades da carta 2 abaixo:

    printf("\n-----Carta 2:-----\n");

    printf("Escolha uma letra entre 'A' e 'H' para representar um dos oito Estados:");
    scanf(" %c", &carta2.estado);

    printf("Escolha um número de 1 a 4 para o código da carta:");
    int numeroCodigo2;
    scanf(" %d", &numeroCodigo2);
    sprintf(carta2.codigo, "%c%02d", carta2.estado, numeroCodigo2);

    printf( "Digite o nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Digite a População: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a área em (km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    //No trecho abaixo exibimos a Segunda carta:

    printf("\nCarta 2:\n");
    printf("Estado: %c\n",carta2.estado);
    printf("Código: %s\n",carta2.codigo);
    printf("Cidade: %s\n]",carta2.nomeCidade);
    printf("População: %d\n",carta2.populacao);
    printf("Área: %.2f km²\n",carta2.area);
    printf("PIB: %.2f Bilhões de reais\n",carta2.pib);
    printf("Número de Pontos Turísticos: %d\n",carta2.pontosTuristicos);


    return 0;
}

