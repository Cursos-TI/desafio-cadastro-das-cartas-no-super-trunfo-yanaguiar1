#include <stdio.h>

int main(){
	
	// Declaração das variáveis da carta 01
	char estado;
	char carta[4];
	char cidade[50];
	float populacao;
	float area;
	float pib;
	int turistico;
	float densidade_populacional;
	float pib_capita;
	
	// Declaração das variáveis da carta 02
	char estado1;
	char carta1[4];
	char cidade1[50];
	float populacao1;
	float area1;
	float pib1;
	int turistico1;
	float densidade_populacional1;
	float pib_capita1;

	// Entrada de dados da carta 01
	printf("Carta 01 \n");
	
	printf("Digite o seu estado: Exemplo: ('A' até 'H')\n");
	scanf(" %c", &estado);
	
	printf("Digite o código da sua carta: Exemplo: ('01', '02', '03'..)\n");
	scanf("%s", carta);
	
	printf("Digite o nome da cidade (sem espaços): \n");
	scanf("%s", cidade);
	
	printf("Digite o número de habitantes: \n");
	scanf("%f", &populacao);
	
	printf("Digite a àrea da cidade em km²: \n");
	scanf("%f", &area);
	
	printf("Digite o PIB da cidade: \n");
	scanf("%f", &pib);
	
	printf("Digite o número de pontos turísticos: \n");
	scanf("%d", &turistico);
	
	densidade_populacional = populacao / area;
	pib_capita = pib / populacao;  
	
	// Entrada dos dados da carta 02
	printf("Carta 02 \n");	
	
	printf("Digite o seu estado: Exemplo: ('A' até 'H')\n");
	scanf(" %c", &estado1);
	
	printf("Digite o código da sua carta: Exemplo: ('01', '02', '03'..)\n");
	scanf("%s", carta1);
	
	printf("Digite o nome da cidade (sem espaços): \n");
	scanf("%s", cidade1);
	
	printf("Digite o número de habitantes: \n");
	scanf("%f", &populacao1);
	
	printf("Digite a àrea da cidade em km²: \n");
	scanf("%f", &area1);
	
	printf("Digite o PIB da cidade: \n");
	scanf("%f", &pib1);
	
	printf("Digite o número de pontos turísticos: \n");
	scanf("%d", &turistico1);
	
	densidade_populacional1 = populacao1 / area1;
	pib_capita1 = pib1 / populacao1;  
	
	// Exibição dos dados das cartas
	printf("===========OPÇÕES DA CARTA 1===========:\n");
	printf("Estado: %c \n", estado);
	printf("Código da carta: %s \n", carta);
	printf("Nome da Cidade: %s \n", cidade);
	printf("População: %f \n", populacao); 
	printf("Àrea em km²: %.2f \n", area);
	printf("PIB: %.2f \n", pib);
	printf("Número de Pontos Turísticos: %d \n", turistico);
	printf("Densidade populacional: %.2f hab/km² \n", densidade_populacional);
	printf("PIB per capita: %e \n", pib_capita);
	printf("=========================================\n");
	
	printf("===========OPÇÕES DA CARTA 2===========:\n");
	printf("Estado: %c \n", estado1);
	printf("Código da carta: %s \n", carta1);
	printf("Nome da Cidade: %s \n", cidade1);
	printf("População: %f \n", populacao1); 
	printf("Àrea em km²: %.2f \n", area1);
	printf("PIB: %.2f \n", pib1);
	printf("Número de Pontos Turísticos: %d \n", turistico1);
	printf("Densidade populacional: %.2f hab/km² \n", densidade_populacional1);
	printf("PIB per capita: %e \n", pib_capita1);
	printf("=========================================\n");
	
	return 0;
}
