#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int escolhaJogador;
    int atributoEscolhido;
    char pais[30] ="Brasil", pais2[30] ="Costa Rica";
    int populacao = 11895578, populacao2 = 6320446;
    float areaKm = 248219481, areaKm2 = 4375042; 
    float pib = 78000000,pib2 = 94930000;
    int pontosTuristicos = 300,pontosTuristicos2 = 302;
    float densidade = 752826,densidade2 = 366970;
    float pibPerCapita =2662 ,pibPerCapita2 = 2490;

    printf("**** Jogo Super Trunfo ****\n");
    printf("Escolha uma das Opções:\n");
    printf("1 Para iniciar a partida. \n");
    printf("2 Para ver a regras do Jogos. \n");
    printf("3 Para encerra o Jogo. \n");
    printf("Escolha:");
    scanf("%d", &escolhaJogador);

    switch(escolhaJogador)
    {
       case 1:
    
        printf("Escolha um dos Atributos de Sua Carta:\n");
        printf("1 Para População\n");
        printf("2 Para tamanho da area da País\n");
        printf("3 Para PIB\n");
        printf("4 Para quantidade de pontos turisticos\n");
        printf("5 Para Densidade Demográfica\n");
        printf("6 Para PIB per Capita\n");
        printf("Escolha:");
        scanf("%d",&atributoEscolhido);

       
        
            if(atributoEscolhido == 1){
                if(populacao == populacao2){
                    printf("Carta %s X  Carta %s \n",pais,pais2);
                    printf("Atributo escolhido : População\n"),
                    printf("%s População: %d  X  %s População: %d\n",pais,populacao,pais2,populacao2);
                    printf("Empate!\n");
                    }
                    else if(populacao > populacao2){
                          printf("Carta %s X  Carta %s \n",pais,pais2);
                          printf("Atributo escolhido : População\n"),
                          printf("%s - População: %d  X  %s - População: %d\n ",pais,populacao,pais2,populacao2);
                          printf("Carta %s Venceu!\n",pais);
                    }else printf("Carta %s X  Carta %s \n",pais,pais2);
                          printf("Atributo escolhido : População\n"),
                          printf("%s - População: %d  X  %s - População: %d\n ",pais,populacao,pais2,populacao2);
                          printf("Carta %s Venceu!\n",pais2);
            }   
            if(atributoEscolhido == 2){
                if(areaKm == areaKm2){
                    printf("Carta %s X  Carta %s \n",pais,pais2);
                    printf("Atributo escolhido : Area Km²\n"),
                    printf("%s - Area Km²: %0.2f  X  %s - Area Km²: %0.2f\n",pais,areaKm,pais2,areaKm2);
                    printf("Empate!\n");
                    }
                    else if(areaKm > areaKm2){
                        printf("Carta %s X  Carta %s \n",pais,pais2);
                        printf("Atributo escolhido : Area Km²\n"),
                        printf("%s - Area Km²: %0.2f  X  %s - Area Km²: %0.2f\n",pais,areaKm,pais2,areaKm2);
                        printf("Carta %s Venceu!\n",pais);
                  }else printf("Carta %s X  Carta %s \n",pais,pais2);
                        printf("Atributo escolhido : Area Km²\n"),
                        printf("%s - Are Km²: %0.2f  X  %s Area Km²: %d\n",pais,areaKm,pais2,areaKm2);
                        printf("Carta %s Venceu!\n",pais2);
            }
            if(atributoEscolhido == 3){
                if(pib == pib2){
                    printf("Carta %s X  Carta %s \n",pais,pais2);
                    printf("Atributo escolhido : PIB\n"),
                    printf("%s - PIB: %0.2f  X  %s - PIB: %0.2f\n",pais,pib,pais2,pib2);
                    printf("Empate!\n");
                    }
                    else if(pib > pib2){
                        printf("Carta %s X  Carta %s \n",pais,pais2);
                        printf("Atributo escolhido : PIB\n"),
                        printf("%s - PIB: %0.2f  X  %s - PIB: %0.2f",pais,pib,pais2,pib2);
                        printf("Carta %s Venceu!\n",pais);
                  }else printf("Carta %s X  Carta %s \n",pais,pais2);
                        printf("Atributo escolhido : PIB\n"),
                        printf("%s - PIB: %0.2f  X  %s - PIB: %0.2f\n",pais,pib,pais2,pib2);
                        printf("Carta %s Venceu!\n",pais2);   
            }
            if(atributoEscolhido == 4){
                if(pontosTuristicos == pontosTuristicos2){
                        printf("Carta %s X  Carta %s \n",pais,pais2);
                        printf("Atributo escolhido : Quantidade de pontos Turisticos\n"),
                        printf("%s - Pontos Turisticos: %d  X  %s Pontos Turisticos: %d\n",pais,pontosTuristicos,pais2,pontosTuristicos2);
                        printf("Empate!\n");
                        }
                        else if(pontosTuristicos > pontosTuristicos2){
                        printf("Carta %s X  Carta %s \n",pais,pais2);
                        printf("Atributo escolhido : Pontos Turisticos\n"),
                        printf("%s - Pontos Turisticos: %d  X  %s - Pontos Turisticos: %d\n",pais,pontosTuristicos,pais2,pontosTuristicos2);
                        printf("Carta %s Venceu!\n",pais);
                  }else printf("Carta %s X  Carta %s \n",pais,pais2);
                        printf("Atributo escolhido : Pontos Turisticos\n"),
                        printf("%s - Pontos Turisticos: %d  X  %s - Pontos Turisticos: %d\n",pais,pontosTuristicos,pais2,pontosTuristicos2);
                        printf("Carta %s Venceu!\n",pais2);   
               }   
               if(atributoEscolhido == 5){
                if(densidade == densidade2){
                        printf("Carta %s X  Carta %s \n",pais,pais2);
                        printf("Atributo escolhido : Quantidade de pontos Turisticos\n"),
                        printf("%s - Pontos Turisticos: %d  X  %s Pontos Turisticos: %d\n",pais,densidade,pais2,densidade2);
                        printf("Empate!\n");
                        }
                        else if(densidade > densidade2){
                        printf("Carta %s X  Carta %s \n",pais,pais2);
                        printf("Atributo escolhido : Pontos Turisticos\n"),
                        printf("%s - Pontos Turisticos: %d  X  %s - Pontos Turisticos: %d\n",pais,densidade,pais2,densidade2);
                        printf("Carta %s Venceu!\n",pais);
                  }else printf("Carta %s X  Carta %s \n",pais,pais2);
                        printf("Atributo escolhido : Pontos Turisticos\n"),
                        printf("%s - Pontos Turisticos: %d  X  %s -Densidade Demográfica: %d\n",pais,densidade,pais2,densidade2);
                        printf("Carta %s Venceu!\n",pais2);   
               }   
               if(atributoEscolhido == 6){
                if(pibPerCapita == pibPerCapita2){
                        printf("Carta %s X  Carta %s \n",pais,pais2);
                        printf("Atributo escolhido : PIB per Capita\n"),
                        printf("%s - PIB per Capita: %0.2f  X  %s PIB per Capita: %0.2f\n",pais,pibPerCapita,pais2,pibPerCapita2);
                        printf("Empate!\n");
                        }
                        else if(pibPerCapita < pibPerCapita2){
                        printf("Carta %s X  Carta %s \n",pais,pais2);
                        printf("Atributo escolhido : PIB per Capita\n"),
                        printf("%s - PIB per Capita: %0.2f  X  %s - PIB per Capita: %0.2f\n",pais,pibPerCapita,pais2,pibPerCapita2);
                        printf("Carta %s Venceu!\n",pais);
                  }else printf("Carta %s X  Carta %s \n",pais,pais2);
                        printf("Atributo escolhido : PIB per Capita\n"),
                        printf("%s - PIB per Capita: %0.2f  X  %s -PIB per Capita: %0.2f\n",pais,pibPerCapita,pais2,pibPerCapita2);
                        printf("Carta %s Venceu!\n",pais2);   
               }        
       break;
       case 2:
        
        printf("    ############      Regras do jogo     ###############\n");
        printf("Voce deve escolher entre uma das 2 cartas e um de seu atributos,\n");
        printf("se o atributo da carta escolhida for maior que o mesmo atributo \n");
        printf("da carta que não foi escolhida voce  vence o jogo, somente no caso\n");
        printf("da escolha ser o atributo 'Densidade Demografica' ganha a  carta\n");
        printf("que tiver o menor valor. \n");
        
        break;

        case 3:printf("Fim de Jogo! \n");
        
    default:printf("Opção inválida. Jogo sera encerrado.\n");