#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

   // return 0;
   


    char estado[3], estado2[3];
    char codigoCarta[3],codigoCarta2[3];
    char cidade[30],cidade2[30];
    int populacao,populacao2;
    float areaKm,areaKm2; 
    float pib,pib2;
    int pontosTuristicos,pontosTuristicos2;
    float densidade,densidade2;
    float pibPerCapita,pibPerCapita2;
    float superPoder, superPoder2;

    // Solicita ao usuário digitar dados para a primeira carta e armazena estes dados nas variáveis
    printf("Digite a Sigla do Estado:\n");
    scanf("%s", &estado); 

    printf("Digite um número de 01 até 04 para cadastrar o código da Carta:\n");
    scanf("%s", codigoCarta);
    getchar();

    printf("Digite o nome da Cidade:\n");
    fgets(cidade, 30, stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Digite a Area da Cidade em km²:\n");
    scanf("%f", &areaKm);

    printf("Digite o numero de Habitantes:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos);
   
    // Solicita ao usuário digitar dados para a Segunda carta e armazena estes dados nas variáveis
    printf("Digite a Sigla do Estado:\n");
    scanf("%s", &estado2); 
    
    printf("Digite um número de 01 até 04 para cadastrar o código da Carta:\n");
    scanf("%s", codigoCarta2);
    getchar(); 
    
    printf("Digite o nome da Cidade:\n");
    fgets(cidade2, 30, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    
    printf("Digite a Area da Cidade:\n");
    scanf("%f", &areaKm2);
    
    printf("Digite o numero de Habitantes:\n");
    scanf("%d", &populacao2);
    
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // CALCULA A DENSIDADE POPULACIONAL, PIBPERCAPITA 
    densidade = (float)populacao / areaKm; 
    densidade2 = (float)populacao2 / areaKm2;
    pibPerCapita = pib / (float)populacao; 
    pibPerCapita2 = pib2 / (float)populacao2;
     
    /* compara qual carta tem o atributo "população" maior, mostra na tela os atritubos cidade, estado 
    e população das 2 cartas, e qual carta venceu por ter atributo população maior */
    
    if(populacao > populacao2){
        printf("Comparação de Carta (Atributo População)");
        printf("Carta 1 - %s (%s): %d \n",cidade, estado, populacao);
        printf("Carta 2 - %s (%s): %d \n",cidade2, estado2, populacao2);
        printf("Carta 1 - (%s): Venceu!\n",cidade);
    }
    else{
        printf("Comparação de Carta (Atributo População\n");
        printf("Carta 1 - %s (%s): %d \n",cidade, estado, populacao);
        printf("Carta 2 - %s (%s): %d \n",cidade2, estado2, populacao2);
        printf("Carta 2 -(%s): Venceu! \n",cidade2);
    }
     
    return 0;

            
}
