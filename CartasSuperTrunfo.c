#include <stdio.h>

int main(){
	
	// Declaração das variáveis da carta 01
	
	char estado;
	char carta[4];
	char cidade[50];
	int populacao;
	float area;
	float pib;
	int turistico;
	
	// Declaração das variáveis da carta 02
	
	char estado1;
	char carta1[4];
	char cidade1[50];
	int populacao1;
	float area1;
	float pib1;
	int turistico1;
	
	// Entrada de dados da carta 01
	
	printf("Carta 01 \n");
	
	printf("Digite o seu estado: Exemplo: ('A' até 'H')\n");
	scanf(" %c", &estado);
	
	printf("Digite o código da sua carta: Exemplo: ('01', '02', '03'..)\n");
	scanf("%s", &carta);
	
	printf("Digite o nome da cidade: \n");
	scanf("%s", &cidade);
	
	printf("Digite o número de habitantes: \n");
	scanf("%d", &populacao);
	
	printf("Digite a àrea da cidade em km²: \n");
	scanf("%f", &area);
	
	printf("Digite o PIB da cidade: \n");
	scanf("%f", &pib);
	
	printf("Digite o número de pontos turísticos: \n");
	scanf("%d", &turistico);
	
	// Entrada dos dados da carta 02
	
	printf("Carta 02 \n");	
	
	printf("Digite o seu estado: Exemplo: ('A' até 'H')\n");
	scanf(" %c", &estado1);
	
	printf("Digite o código da sua carta: Exemplo: ('01', '02', '03'..)\n");
	scanf("%s", &carta1);
	
	printf("Digite o nome da cidade: \n");
	scanf("%s", &cidade1);
	
	printf("Digite o número de habitantes: \n");
	scanf("%d", &populacao1);
	
	printf("Digite a àrea da cidade em km²: \n");
	scanf("%f", &area1);
	
	printf("Digite o PIB da cidade: \n");
	scanf("%f", &pib1);
	
	printf("Digite o número de pontos turísticos: \n");
	scanf("%d", &turistico1);
	
	// Exibição dos dados das cartas
	
	printf("=====OPÇÕES DA CARTA 1=====:\n");
	printf("Estado: %c \n", estado);
	printf("Código da carta: %s \n", carta);
	printf("Nome da Cidade: %s \n", cidade);
	printf("População: %d \n", populacao);
	printf("Àrea em km²: %f \n", area);
	printf("PIB: %f \n", pib);
	printf("Número de Pontos Turísticos: %d \n", turistico);
	printf("==========================\n");
	
	printf("=====OPÇÕES DA CARTA 2=====:\n");
	printf("Estado: %c \n", estado1);
	printf("Código da carta: %s \n", carta1);
	printf("Nome da Cidade: %s \n", cidade1);
	printf("População: %d \n", populacao1);
	printf("Àrea em km²: %f \n", area1);
	printf("PIB: %f \n", pib1);
	printf("Número de Pontos Turísticos: %d \n", turistico1);
	printf("==========================\n");
	
	return 0;
}
	