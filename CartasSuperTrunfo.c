#include <stdio.h>

// Desafio Super Trunfo 
// Tema 1 - Cadastro das cartas

int main() {

  //===== CARTA 1 =====
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;

  //===== CARTA 2 =====
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;

  //=== LEITURA DOS DADOS DA CARTA 1 ===
  printf("Cadastro da Carta 1:\n");

  printf("Digite a letra do estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Digite o código da carta (ex: A01): ");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: ");
  scanf(" %s", cidade1);

  printf("Digite a população: ");
  scanf("%d", &populacao1);
  
  printf("Digite a área (em km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosturisticos1);

  //=== LEITURA DOS DADOS DA CARTA 2 ===
  printf("\nCadastro da Carta 2:\n");

  printf("Digite a letra do estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta (ex: A01): ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf(" %s", cidade2);

  printf("Digite a população: ");
  scanf("%d", &populacao2);
  
  printf("Digite a área (em km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosturisticos2);
  
  //=== EXIBIÇÃO DOS DADOS ===
  printf("\n=== Carta 1 ===\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d habitantes\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

  printf("\n=== Carta 2 ===\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d habitantes\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);



  printf("\n============\nf");

  return 0;
}

