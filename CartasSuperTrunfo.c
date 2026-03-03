#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades


  // Dados da carta 01
  char estado01;
  char cod_carta01[30];
  char cidade01[30];
  int populacao01;
  float area_km2_01;
  float pib01;
  int pontos_turisticos01;

  //Dados da carta 02

  char estado02;
  char cod_carta02[30];
  char cidade02[30];
  int populacao02;
  float area_km2_02;
  float pib02;
  int pontos_turisticos02;

  // Área para entrada de dados

  //Dados para entrada da carta 01

printf("QUAL O LETRA INICIAL DO SEU ESTADO: ");
  scanf(" %c", &estado01);

printf("QUAL O COD DA SUA CARTA(INIAL DO SEU ESTADO + NUMERO 01 A 04): ");
scanf("%s", cod_carta01);

printf("ME DIGA O NOME DA SUA CIDADE SEM ESPAÇO: ");
scanf("%s", cidade01);

printf("QUANTOS HABITANTES TEM EM SUA CIDADE: ");
scanf("%d", &populacao01);

printf("QUAL O TAMANHO DA AREA EM km² DA SUA CIDADE: ");
scanf("%f", &area_km2_01);

printf("QUAL O PIB DA SUA CIDADE: ");
scanf("%f", &pib01);

printf("QUANTOS PONTOS TURISTICOS TEM EM SUA CIDADE: ");
scanf("%d", &pontos_turisticos01);

printf("--------------------------------------------------------\n");
//Dados para entrada da Carta 02

printf("QUAL O LETRA INICIAL DO SEU ESTADO: ");
  scanf(" %c", &estado02);

printf("QUAL O COD DA SUA CARTA(INIAL DO SEU ESTADO + NUMERO 01 A 04): ");
scanf("%s", cod_carta02);

printf("ME DIGA O NOME DA SUA CIDADE SEM ESPAÇO: ");
scanf("%s", cidade02);

printf("QUANTOS HABITANTES TEM EM SUA CIDADE: ");
scanf("%d", &populacao02);

printf("QUAL O TAMANHO DA AREA EM km² DA SUA CIDADE: ");
scanf("%f", &area_km2_02);

printf("QUAL O PIB DA SUA CIDADE: ");
scanf("%f", &pib02);

printf("QUANTOS PONTOS TURISTICOS TEM EM SUA CIDADE: ");
scanf("%d", &pontos_turisticos02);


  // Área para exibição dos dados da cidade
printf("\n=============CARTA 01===========================\n");

printf("INCIAL DO ESTADO ESCOLHIDO: %c\n", estado01);
printf("COD DA CARTA E: %s\n", cod_carta01);
printf("CIDADE SELECIONADA: %s\n", cidade01);
printf("QUANTIDADE DE HABITANTES: %d\n", populacao01);
printf("AREA EM km²: %.2f km²\n", area_km2_01);
printf("PIB: %.2f\n", pib01);
printf("N° PONTOS TURISTICOS: %d\n", pontos_turisticos01);

printf("\n================================================\n");

printf("\n=============CARTA 02===========================\n");

printf("INCIAL DO ESTADO ESCOLHIDO: %c\n", estado02);
printf("COD DA CARTA E: %s\n", cod_carta02);
printf("CIDADE SELECIONADA: %s\n", cidade02);
printf("QUANTIDADE DE HABITANTES: %d\n", populacao02);
printf("AREA EM km²: %.2f km²\n", area_km2_02);
printf("PIB: %.2f\n", pib02);
printf("N° PONTOS TURISTICOS: %d\n", pontos_turisticos02);

printf("\n================================================\n");


//Soma de todas as variáveis númericas para definição da carta vencedora.

float total_carta01 = (float) populacao01 + area_km2_01 + pib01 + (float) pontos_turisticos01;
float total_carta02 = (float) populacao02 + area_km2_02 + pib02 + (float) pontos_turisticos02;

printf("\n========= RESULTADO DO DUELO =========\n");
printf("Poder Total Carta 1: %.2f\n", total_carta01);
printf("Poder Total Carta 2: %.2f\n", total_carta02);
printf("--------------------------------------\n");

if (total_carta01>total_carta02){
printf("CARTA 01 VENCEU: %s\n", cidade01);
} else if (total_carta02>total_carta01){
printf("CARTA 02 VENCEU: %s\n", cidade02);
}else {
printf("EMPATE");}

return 0;
} 
