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
        
        // ... (todo o código anterior permanece exatamente igual)

    // --- NOVO: Comparação Avançada com Dois Atributos ---
    printf("\n### MENU DE COMPARAÇÃO AVANÇADA ###\n");
    printf("Você irá escolher DOIS atributos para comparar as cartas.\n");
    
    int atributo1, atributo2;
    
    // Primeiro atributo
    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - POPULACAO\n");
    printf("2 - AREA\n");
    printf("3 - PIB\n");
    printf("4 - PONTOS TURISTICOS\n");
    printf("5 - DENSIDADE DEMOGRAFICA\n");
    printf("6 - PIB PER CAPITA\n");
    printf("7 - SUPER PODER\n");
    printf("Digite sua escolha (1-7): ");
    scanf("%d", &atributo1);
    
    // Validação do primeiro atributo com if-else
    if(atributo1 < 1 || atributo1 > 7) {
        printf("Opção inválida! Usando POPULACAO como padrão.\n");
        atributo1 = 1;  // Valor padrão
    }
    
    // Segundo atributo (menu dinâmico)
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    
    // Mostrar apenas opções disponíveis
    if(atributo1 != 1) printf("1 - POPULACAO\n");
    if(atributo1 != 2) printf("2 - AREA\n");
    if(atributo1 != 3) printf("3 - PIB\n");
    if(atributo1 != 4) printf("4 - PONTOS TURISTICOS\n");
    if(atributo1 != 5) printf("5 - DENSIDADE DEMOGRAFICA\n");
    if(atributo1 != 6) printf("6 - PIB PER CAPITA\n");
    if(atributo1 != 7) printf("7 - SUPER PODER\n");
    
    printf("Digite sua escolha (1-7, exceto %d): ", atributo1);
    scanf("%d", &atributo2);
    
    // Validação do segundo atributo com operador ternário
    atributo2 = (atributo2 < 1 || atributo2 > 7 || atributo2 == atributo1) ? 
               ((atributo1 == 1) ? 2 : 1) :  // Se inválido, escolhe um diferente
               atributo2;
    
    // Variáveis para armazenar os valores dos atributos selecionados
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    const char* nome_atributo1 = "";
    const char* nome_atributo2 = "";
    
    // Obter valores do primeiro atributo selecionado
    switch(atributo1) {
        case 1:
            valor1_carta1 = populacao;
            valor1_carta2 = populacao2;
            nome_atributo1 = "POPULACAO";
            break;
        case 2:
            valor1_carta1 = areakm2;
            valor1_carta2 = areakm22;
            nome_atributo1 = "AREA";
            break;
        case 3:
            valor1_carta1 = pib;
            valor1_carta2 = pib2;
            nome_atributo1 = "PIB";
            break;
        case 4:
            valor1_carta1 = numeroturistas;
            valor1_carta2 = numeroturistas2;
            nome_atributo1 = "PONTOS TURISTICOS";
            break;
        case 5:
            valor1_carta1 = densidadePopulacional;
            valor1_carta2 = densidadePopulacional2;
            nome_atributo1 = "DENSIDADE DEMOGRAFICA";
            break;
        case 6:
            valor1_carta1 = pibpc;
            valor1_carta2 = pibpc2;
            nome_atributo1 = "PIB PER CAPITA";
            break;
        case 7:
            valor1_carta1 = superpoder;
            valor1_carta2 = superpoder2;
            nome_atributo1 = "SUPER PODER";
            break;
    }
    
    // Obter valores do segundo atributo selecionado
    switch(atributo2) {
        case 1:
            valor2_carta1 = populacao;
            valor2_carta2 = populacao2;
            nome_atributo2 = "POPULACAO";
            break;
        case 2:
            valor2_carta1 = areakm2;
            valor2_carta2 = areakm22;
            nome_atributo2 = "AREA";
            break;
        case 3:
            valor2_carta1 = pib;
            valor2_carta2 = pib2;
            nome_atributo2 = "PIB";
            break;
        case 4:
            valor2_carta1 = numeroturistas;
            valor2_carta2 = numeroturistas2;
            nome_atributo2 = "PONTOS TURISTICOS";
            break;
        case 5:
            valor2_carta1 = densidadePopulacional;
            valor2_carta2 = densidadePopulacional2;
            nome_atributo2 = "DENSIDADE DEMOGRAFICA";
            break;
        case 6:
            valor2_carta1 = pibpc;
            valor2_carta2 = pibpc2;
            nome_atributo2 = "PIB PER CAPITA";
            break;
        case 7:
            valor2_carta1 = superpoder;
            valor2_carta2 = superpoder2;
            nome_atributo2 = "SUPER PODER";
            break;
    }
    
    // Comparação dos atributos
    int resultado_atributo1 = 0; // 0 = empate, 1 = carta1 vence, 2 = carta2 vence
    int resultado_atributo2 = 0;
    
    // Comparar primeiro atributo (tratamento especial para densidade)
    if(atributo1 == 5) { // Densidade (menor valor vence)
        if(valor1_carta1 < valor1_carta2) resultado_atributo1 = 1;
        else if(valor1_carta2 < valor1_carta1) resultado_atributo1 = 2;
    } else { // Demais atributos (maior valor vence)
        if(valor1_carta1 > valor1_carta2) resultado_atributo1 = 1;
        else if(valor1_carta2 > valor1_carta1) resultado_atributo1 = 2;
    }
    
    // Comparar segundo atributo (tratamento especial para densidade)
    if(atributo2 == 5) { // Densidade (menor valor vence)
        if(valor2_carta1 < valor2_carta2) resultado_atributo2 = 1;
        else if(valor2_carta2 < valor2_carta1) resultado_atributo2 = 2;
    } else { // Demais atributos (maior valor vence)
        if(valor2_carta1 > valor2_carta2) resultado_atributo2 = 1;
        else if(valor2_carta2 > valor2_carta1) resultado_atributo2 = 2;
    }
    
    // Soma dos valores para cada carta
    float soma_carta1 = valor1_carta1 + valor2_carta1;
    float soma_carta2 = valor1_carta2 + valor2_carta2;
    
    // Determinar o vencedor geral
    int vencedor = 0; // 0 = empate, 1 = carta1, 2 = carta2
    if(soma_carta1 > soma_carta2) vencedor = 1;
    else if(soma_carta2 > soma_carta1) vencedor = 2;
    
    // Exibir resultados
    printf("\n=== RESULTADOS DA COMPARACAO ===\n");
    printf("Atributos comparados: %s e %s\n", nome_atributo1, nome_atributo2);
    printf("\n--- %s ---\n", cidade);
    printf("%s: %.2f\n", nome_atributo1, valor1_carta1);
    printf("%s: %.2f\n", nome_atributo2, valor2_carta1);
    printf("SOMA: %.2f\n", soma_carta1);
    
    printf("\n--- %s ---\n", cidade2);
    printf("%s: %.2f\n", nome_atributo1, valor1_carta2);
    printf("%s: %.2f\n", nome_atributo2, valor2_carta2);
    printf("SOMA: %.2f\n", soma_carta2);
    
    printf("\n=== VENCEDOR ===\n");
    // Usando operador ternário para determinar o resultado
    printf(vencedor == 0 ? "EMPATE!\n" : 
           vencedor == 1 ? "Vencedor: %s\n" : "Vencedor: %s\n", 
           vencedor == 1 ? cidade : cidade2);
    
    return 0;
}
   
   
   