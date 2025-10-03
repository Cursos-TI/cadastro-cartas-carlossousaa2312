#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //=====CARTA01=====
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;

  //=====CARTA2=====
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;

  // Área para entrada de dados

  //===LEITURA DOS DADOS DA CARTA 1===
  printf("Cadastro da Carta 1: \n");
  printf("Digite a letra do estado (A-H): ");
  scanf("%c", &estado1);

  printf("Digite o codigo da carta (ex: A01):")
  scanf("%s", &codigo1);

  printf("Digite o nome da cidade: ");
  scanf("%s", &cidade1);

  printf("Digite a população: \n");
  scanf("%d", &populacao1);
  
  printf("Digite a área (em km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turistícos: ");
  scanf("%d", &pontosturisticos1);
  


  // Área para exibição dos dados da cidade

  return 0;
} 
