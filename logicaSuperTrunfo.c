#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main() {
	// Carta1
	char letra;
	char codigo[50];
	char cidade[20];
	int populacao;
	float areakm2;
	float pib;
	int numeroturistas;
	float densidadePopulacional;
    float pibpc;
    
    //Carta2
    char letra2;
	char codigo2[50];
	char cidade2[20];
	int populacao2;
	float areakm22;
	float pib2;
	int numeroturistas2;
    float densidadePopulacional2;
    float pibpc2;
    
    //escolhaJogador
    int escolhaJogador;
    
    printf("\n### Carta 1 ###\n");


	    printf("Qual é o Estado? \n");
         scanf(" %c", &letra);

        printf("Qual o codigo da carta? \n");
         scanf("%s", codigo);

        printf("Qual o nome da Cidade?\n");
         scanf("%s", cidade);

        printf("Qual o numero de Habitantes?\n");
         scanf("%d", &populacao); 

        printf("Qual a Area da cidade em kms²?\n");
         scanf("%f", &areakm2);

        printf("Qual o Produto interno bruto da cidade?\n");
         scanf("%f", &pib);

        printf("Qual a quantidade de pontos turisticos da cidade?\n");
         scanf("%d", &numeroturistas);
         
    
         
         
    printf("\n### Carta 2 ###\n");

	    printf("Qual é o Estado? \n");
         scanf(" %c", &letra2);

        printf("Qual o codigo da carta? \n");
         scanf("%s", codigo2);

        printf("Qual o nome da Cidade?\n");
         scanf("%s", cidade2);

        printf("Qual o numero de Habitantes?\n");
         scanf("%d", &populacao2); 

        printf("Qual a Area da cidade em kms²?\n");
         scanf("%f", &areakm22);

        printf("Qual o Produto interno bruto da cidade?\n");
         scanf("%f", &pib2);

        printf("Qual a quantidade de pontos turisticos da cidade?\n");
         scanf("%d", &numeroturistas2);
         
        
         
         //Carta1
         densidadePopulacional = (float)populacao / areakm2;

         pibpc = (pib * 1000000000) / populacao;
        
         float superpoder = (float)populacao + areakm2 + pib + (float)numeroturistas + pibpc + (1.0f / densidadePopulacional);
         
         //carta2
         densidadePopulacional2 = populacao2 / areakm22;

         pibpc2 = (pib2 * 1000000000) / populacao2;

         float superpoder2 = (float)populacao2 + areakm22 + pib2 + (float)numeroturistas2 + pibpc2 + (1.0f / densidadePopulacional2);
         
          //Atributos Carta1
        printf("### Carta 1 ###");
		printf("Estado:  %c\n", letra); 
        printf("Codigo: %s\n", codigo); 
        printf("Cidade: %s\n", cidade);
        printf("Populacao: %d\n", populacao); 
        printf("Area: %f", areakm2);printf(" KM2\n");
        printf("PIB: %f", pib);printf(" Bilioes de Reais\n");
        printf("Numero de Pontos Turisticos: %d\n", numeroturistas); 
        printf("A Densidade Populacional é: %.2f\n", densidadePopulacional);
        printf("O PIB per capita é: %.2f\n", pibpc);
        printf("O Super Poder de %s é de %.2f", cidade, (long long)superpoder);
        
          //Atributos Carta2
        printf("### Carta 2 ###");
		printf("Estado:  %c\n", letra2); 
        printf("Codigo: %s\n", codigo2); 
        printf("Cidade: %s\n", cidade2);
        printf("Populacao: %d\n", populacao2); 
        printf("Area: %f",areakm22);printf(" KM2\n");
        printf("PIB: %f", pib2);printf(" Bilioes de Reais\n");
        printf("Numero de Pontos Turisticos: %d\n", numeroturistas2); 
        printf("A Densidade Populacional é: %.25f\n", densidadePopulacional2);
        printf("O PIB per capita é: %.18f\n", pibpc2);
        printf("O Super Poder de %s é de %.2f", cidade2, (long long)superpoder2); 
        
        // Duelo entre as duas cartas e exibição de resultados.
        printf("\n### BATALHA ###\n");
        
        
		// Comparações (0 = false, 1 = true)
        int pop_win = populacao > populacao2;
        int area_win = areakm2 > areakm22;
        int pib_win = pib > pib2;
        int tur_win = numeroturistas > numeroturistas2;
        int dens_win = densidadePopulacional < densidadePopulacional2;  // Menor densidade vence
		int pibpc_win = pibpc > pibpc2;
        int superpoder_win = superpoder > superpoder2;
        
        // soma dos pontos
        int pontosCidade1 = pop_win + area_win + pib_win + tur_win + dens_win + pibpc_win + superpoder_win;
        int pontosCidade2 = 7 - pontosCidade1;
        
        printf("\n=== Comparações (1 = %s vence, 0 = %s vence) ===", cidade, cidade2);
        printf("\nPopulação: %d", pop_win);
        printf("\nÁrea: %d", area_win);
        printf("\nPIB: %d", pib_win);
        printf("\nTurismo: %d", tur_win);
        printf("\nDensidade: %d", dens_win);
        printf("\nPIB per capta: %d", pibpc_win);
        printf("\nSuper Poder: %d", superpoder_win);
        
        printf("\n\nPontuação Final: %s = %d | %s = %d", cidade, pontosCidade1, cidade2, pontosCidade2);
        printf("\nVencedor: %s\n", (pontosCidade1 > pontosCidade2) * (int)cidade[0] ? cidade : cidade2);
        
        // ... (todo o código anterior permanece igual, desde a declaração de variáveis até a exibição dos dados das cartas)

    // --- NOVO: Menu de escolha do jogador ---
    printf("\n### MENU DE COMPARAÇÃO ###\n");
    printf("Escolha como deseja comparar as cartas:\n");
    printf("1 - Comparar POPULACAO\n");
    printf("2 - Comparar AREA\n");
    printf("3 - Comparar PIB\n");
    printf("4 - Comparar PONTOS TURISTICOS\n");
    printf("5 - Comparar DENSIDADE DEMOGRAFICA\n");
    printf("6 - Comparar PIB PER CAPITA\n");
    printf("7 - Comparar SUPER PODER\n");
    printf("8 - COMPARAR TODOS (como antes)\n");
    printf("Digite sua escolha (1-8): ");
    scanf("%d", &escolhaJogador);

    // --- Switch para comparar apenas o atributo escolhido ---
    switch(escolhaJogador) {
        case 1: // População
            printf("\n=== POPULACAO ===\n");
            if (populacao > populacao2) {
                printf("%s tem MAIS habitantes (%d > %d)\n", cidade, populacao, populacao2);
            } else if (populacao2 > populacao) {
                printf("%s tem MAIS habitantes (%d > %d)\n", cidade2, populacao2, populacao);
            } else {
                printf("EMPATE! Ambas têm %d habitantes.\n", populacao);
            }
            break;

        case 2: // Área
            printf("\n=== AREA (km²) ===\n");
            if (areakm2 > areakm22) {
                printf("%s é MAIOR em área (%.2f km² > %.2f km²)\n", cidade, areakm2, areakm22);
            } else if (areakm22 > areakm2) {
                printf("%s é MAIOR em área (%.2f km² > %.2f km²)\n", cidade2, areakm22, areakm2);
            } else {
                printf("EMPATE! Ambas têm %.2f km².\n", areakm2);
            }
            break;

        case 3: // PIB
            printf("\n=== PIB (Bilhões) ===\n");
            if (pib > pib2) {
                printf("%s tem MAIOR PIB (%.2f > %.2f)\n", cidade, pib, pib2);
            } else if (pib2 > pib) {
                printf("%s tem MAIOR PIB (%.2f > %.2f)\n", cidade2, pib2, pib);
            } else {
                printf("EMPATE! Ambas têm PIB de %.2f bilhões.\n", pib);
            }
            break;

        case 4: // Pontos Turísticos
            printf("\n=== PONTOS TURISTICOS ===\n");
            if (numeroturistas > numeroturistas2) {
                printf("%s tem MAIS pontos turísticos (%d > %d)\n", cidade, numeroturistas, numeroturistas2);
            } else if (numeroturistas2 > numeroturistas) {
                printf("%s tem MAIS pontos turísticos (%d > %d)\n", cidade2, numeroturistas2, numeroturistas);
            } else {
                printf("EMPATE! Ambas têm %d pontos turísticos.\n", numeroturistas);
            }
            break;

        case 5: // Densidade Demográfica
            printf("\n=== DENSIDADE (hab/km²) ===\n");
            if (densidadePopulacional < densidadePopulacional2) { // Quanto menor, melhor
                printf("%s tem MENOR densidade (%.2f < %.2f)\n", cidade, densidadePopulacional, densidadePopulacional2);
            } else if (densidadePopulacional2 < densidadePopulacional) {
                printf("%s tem MENOR densidade (%.2f < %.2f)\n", cidade2, densidadePopulacional2, densidadePopulacional);
            } else {
                printf("EMPATE! Ambas têm densidade de %.2f hab/km².\n", densidadePopulacional);
            }
            break;

        case 6: // PIB per capita
            printf("\n=== PIB PER CAPITA ===\n");
            if (pibpc > pibpc2) {
                printf("%s tem MAIOR PIB per capita (%.2f > %.2f)\n", cidade, pibpc, pibpc2);
            } else if (pibpc2 > pibpc) {
                printf("%s tem MAIOR PIB per capita (%.2f > %.2f)\n", cidade2, pibpc2, pibpc);
            } else {
                printf("EMPATE! Ambas têm PIB per capita de %.2f.\n", pibpc);
            }
            break;

        case 7: // Super Poder
            printf("\n=== SUPER PODER ===\n");
            if (superpoder > superpoder2) {
                printf("%s tem MAIOR Super Poder (%.2f > %.2f)\n", cidade, superpoder, superpoder2);
            } else if (superpoder2 > superpoder) {
                printf("%s tem MAIOR Super Poder (%.2f > %.2f)\n", cidade2, superpoder2, superpoder);
            } else {
                printf("EMPATE! Ambas têm Super Poder de %.2f.\n", superpoder);
            }
            break;

        case 8: // Todos os atributos (como já estava no código)
            // --- Aqui continua o código original de comparação ---
            printf("\n### BATALHA (TODOS OS ATRIBUTOS) ###\n");
            int pop_win = populacao > populacao2;
            int area_win = areakm2 > areakm22;
            int pib_win = pib > pib2;
            int tur_win = numeroturistas > numeroturistas2;
            int dens_win = densidadePopulacional < densidadePopulacional2;
            int pibpc_win = pibpc > pibpc2;
            int superpoder_win = superpoder > superpoder2;

            int pontosCidade1 = pop_win + area_win + pib_win + tur_win + dens_win + pibpc_win + superpoder_win;
            int pontosCidade2 = 7 - pontosCidade1;

            printf("\n=== Comparações (1 = %s vence, 0 = %s vence) ===", cidade, cidade2);
            printf("\nPopulação: %d", pop_win);
            printf("\nÁrea: %d", area_win);
            printf("\nPIB: %d", pib_win);
            printf("\nTurismo: %d", tur_win);
            printf("\nDensidade: %d", dens_win);
            printf("\nPIB per capta: %d", pibpc_win);
            printf("\nSuper Poder: %d", superpoder_win);

            printf("\n\nPontuação Final: %s = %d | %s = %d", cidade, pontosCidade1, cidade2, pontosCidade2);
            printf("\nVencedor: %s\n", (pontosCidade1 > pontosCidade2) ? cidade : cidade2);
            break;

        default:
            printf("\nOpção inválida! Use um número de 1 a 8.\n");
            break;
    }

    return 0;
}