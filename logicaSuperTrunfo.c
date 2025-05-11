#include <stdio.h> 
#include <string.h> 

int main() {
   
    int escolhaJogador; // Armazena a escolha inicial do jogador no menu
    int atributoEscolhido, atributoEscolhido2; // Armazena os atributos escolhidos pelo jogador
    char tipoAtributo[50], tipoAtributo2[50]; // Armazena os nomes dos atributos escolhidos
    float somaAtributos, somaAtributos2; // Soma dos valores dos atributos escolhidos para cada país
    float valorCarta1Atributo1, valorCarta1Atributo2; // Valores dos atributos do país 1
    float valorCarta2Atributo1, valorCarta2Atributo2; // Valores dos atributos do país 2

    // Informações dos países
    char pais[30] = "Brasil", pais2[30] = "Costa Rica"; 
    unsigned int populacao = 11895578, populacao2 = 6320446; 
    float areaKm = 648.2194, areaKm2 = 437.5042; 
    float pib = 780.0000, pib2 = 949.30000; 
    int pontosTuristicos = 300, pontosTuristicos2 = 302; 
    float densidade = 75.2820, densidade2 = 36.6970; 
    float pibPerCapita = 2662, pibPerCapita2 = 2490; 

    // Exibição do menu inicial
    printf("**** Jogo Super Trunfo ****\n");
    printf("Escolha uma das Opções:\n");
    printf("1 Para iniciar a partida. \n");
    printf("2 Para ver as regras do jogo. \n");
    printf("3 Para encerrar o jogo. \n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);
    printf("\n");

    // Exibi menu de seleção de atributos caso opção no menu inicial selecionada for numero 1
    switch (escolhaJogador) {
        case 1:
            // Escolha dos atributos
            printf("Escolha o Primeiro Atributo de Sua Carta:\n");
            printf("1 Para População\n");
            printf("2 Para tamanho da área do País\n");
            printf("3 Para PIB\n");
            printf("4 Para quantidade de pontos turísticos\n");
            printf("5 Para Densidade Demográfica\n");
            printf("6 Para PIB per Capita\n");
            printf("Escolha: ");
            scanf("%d", &atributoEscolhido);
            printf("\n");
          
            //Verifica se o Segundo atributo escolhido é diferente do primeiro
            printf("Escolha o Segundo Atributo de Sua Carta (não pode ser o mesmo que o primeiro):\n");
            if (atributoEscolhido != 1) printf("1 Para População\n");
            if (atributoEscolhido != 2) printf("2 Para tamanho da área do País\n");
            if (atributoEscolhido != 3) printf("3 Para PIB\n");
            if (atributoEscolhido != 4) printf("4 Para quantidade de pontos turísticos\n");
            if (atributoEscolhido != 5) printf("5 Para Densidade Demográfica\n");
            if (atributoEscolhido != 6) printf("6 Para PIB per Capita\n");
            printf("Escolha: ");
            scanf("%d", &atributoEscolhido2);
            printf("\n");

            //Armazena nas variaveis os tipos de atributos e valor de atributo escolhido
            switch (atributoEscolhido) {
                case 1: 
                strcpy(tipoAtributo, "População"); valorCarta1Atributo1 = populacao; valorCarta2Atributo1 = populacao2; 
                break;
                case 2:
                strcpy(tipoAtributo, "Área (km²)"); valorCarta1Atributo1 = areaKm; valorCarta2Atributo1 = areaKm2; 
                break;
                case 3: 
                strcpy(tipoAtributo, "PIB"); valorCarta1Atributo1 = pib; valorCarta2Atributo1 = pib2; 
                break;
                case 4: 
                strcpy(tipoAtributo, "Pontos Turísticos"); valorCarta1Atributo1 = pontosTuristicos; valorCarta2Atributo1 = pontosTuristicos2; 
                break;
                case 5: 
                strcpy(tipoAtributo, "Densidade Demográfica"); valorCarta1Atributo1 = densidade; valorCarta2Atributo1 = densidade2; 
                break;
                case 6: 
                strcpy(tipoAtributo, "PIB per Capita"); valorCarta1Atributo1 = pibPerCapita; valorCarta2Atributo1 = pibPerCapita2; 
                break;
            }

            switch (atributoEscolhido2) {
                case 1: 
                strcpy(tipoAtributo2, "População"); valorCarta1Atributo2 = populacao; valorCarta2Atributo2 = populacao2; 
                break;
                case 2: 
                strcpy(tipoAtributo2, "Área (km²)"); valorCarta1Atributo2 = areaKm; valorCarta2Atributo2 = areaKm2; 
                break;
                case 3: 
                strcpy(tipoAtributo2, "PIB"); valorCarta1Atributo2 = pib; valorCarta2Atributo2 = pib2; 
                break;
                case 4: 
                strcpy(tipoAtributo2, "Pontos Turísticos"); valorCarta1Atributo2 = pontosTuristicos; valorCarta2Atributo2 = pontosTuristicos2; 
                break;
                case 5: 
                strcpy(tipoAtributo2, "Densidade Demográfica"); valorCarta1Atributo2 = densidade; valorCarta2Atributo2 = densidade2; 
                break;
                case 6: 
                strcpy(tipoAtributo2, "PIB per Capita"); valorCarta1Atributo2 = pibPerCapita; valorCarta2Atributo2 = pibPerCapita2; 
                break;
            }

            //Armazena a Soma dos atributos ecolhidos de cada País
            somaAtributos = valorCarta1Atributo1 + valorCarta1Atributo2;
            somaAtributos2 = valorCarta2Atributo1 + valorCarta2Atributo2;

            //Exibição dos resultados
            printf("\nResultados da Comparação:\n");
            printf("%s VS %s\n", pais, pais2);
            printf("Atributos Escolhidos: %s -  %s\n", tipoAtributo, tipoAtributo2);
            printf("Atributo %s - %s: %.2f, %s: %.2f\n", tipoAtributo, pais, valorCarta1Atributo1, pais2, valorCarta2Atributo1);
            printf("Atributo %s - %s: %.2f, %s: %.2f\n", tipoAtributo2, pais, valorCarta1Atributo2, pais2, valorCarta2Atributo2);
            printf("Soma dos atributos - %s: %.2f\n", pais, somaAtributos);
            printf("Soma dos atributos - %s: %.2f\n", pais2, somaAtributos2);

            //Determina vencedor para cada atributo escolhido utilizando operador Ternário
            if (atributoEscolhido == 5) { 
                valorCarta1Atributo1 < valorCarta2Atributo1
                    ? printf("Vencedor no atributo %s: %s\n", tipoAtributo, pais)
                    : printf("Vencedor no atributo %s: %s\n", tipoAtributo, pais2);
            } else {
                valorCarta1Atributo1 > valorCarta2Atributo1
                    ? printf("Vencedor no atributo %s: %s\n", tipoAtributo, pais)
                    : printf("Vencedor no atributo %s: %s\n", tipoAtributo, pais2);
            }

            if (atributoEscolhido2 == 5) { 
                valorCarta1Atributo2 < valorCarta2Atributo2
                    ? printf("Vencedor no atributo %s: %s\n", tipoAtributo2, pais)
                    : printf("Vencedor no atributo %s: %s\n", tipoAtributo2, pais2);
            } else {
                valorCarta1Atributo2 > valorCarta2Atributo2
                    ? printf("Vencedor no atributo %s: %s\n", tipoAtributo2, pais)
                    : printf("Vencedor no atributo %s: %s\n", tipoAtributo2, pais2);
            } 

            // Determina o vencedor geral entre os dois Paise Somando os Atributos Escolhidos
            if (somaAtributos > somaAtributos2) {
                printf("Vencedor geral: %s\n", pais); 
            } else if (somaAtributos < somaAtributos2) {
                printf("Vencedor geral: %s\n", pais2); 
            } else {
                printf("Vencedor geral: Empate\n"); 
            }
        break;
        case 2:
            // Exibe as Regras do Jogo Caso opção no menu inicial selecionada for numero 2
            printf("###################### - Regras do jogo - ##########################\n");
            printf("Voce deve escolher dois Atributos dos Paises que serão comparados,\n");
            printf("vence o atributo que tem maior valor entre os paise, exeto caso o atributo\n");
            printf("ecolhido for o Atributo Densidade, neste caso ira vencer o menor valor.\n");
            printf("Ao ao final o País que tiver o valor maior somando os atributos Vencera\n");
           
        
        break;
         //Encerra o Jogo caso opção no menu inicial selecionada for numero 3
        case 3:
            printf("Fim de Jogo! \n");
        
        //
       default:
           printf("Opção inválida. Jogo sera encerrado.\n");
    }

    return 0;  
}