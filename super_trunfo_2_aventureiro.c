#include <stdio.h>
#include <string.h>
#include <locale.h>

    struct CartaSuperTrunfo {
        char pais[30];
        int populacao;
        int turismo;
        float pib;
        float area;
        float densidade;
        float pibpercapita;
        float superpoder;
    };
    
       
        void lerCarta(struct CartaSuperTrunfo *carta) {
        printf("Digite o nome do País: ");
        scanf("%s", carta->pais);
        printf("Digite a População: ");
        scanf("%d", &carta->populacao);
        printf("Digite a Área em Km²: ");
        scanf("%f", &carta->area);
        printf("Digite o PIB em Bilhões de Reais: ");
        scanf("%f", &carta->pib);
        printf("Digite o Número de Pontos Turísticos: ");
        scanf("%d", &carta->turismo);
        carta->densidade = carta->populacao / carta->area;
        carta->pibpercapita = carta->pib * 1000000000 / carta->populacao;
        carta->superpoder = carta->populacao + carta->area + carta->pib + carta->turismo + 1 / carta->densidade + carta->pibpercapita;

        }

int main(){
    
    struct CartaSuperTrunfo carta1, carta2;
    int atributo;

    printf("Insira os Dados da Primeira Carta:\n");
    lerCarta(&carta1);

    printf("Insira os Dados da Segunda Carta:\n");
    lerCarta(&carta2);

    printf("\n\nDados da Primeira Carta:\n");
    printf("País: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f Bilhões de Reais\nNúmero de Pontos Turísticos: %d\nDensidade Demográfica: %.2f hab/km²\nPIB per Capita: %.2f reais\n", carta1.pais, carta1.populacao, carta1.area, carta1.pib, carta1.turismo, carta1.densidade, carta1.pibpercapita);

    printf("\nDados da Segunda Carta:\n");
    printf("País: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f Bilhões de Reais\nNúmero de Pontos Turísticos: %d\nDensidade Demográfica: %.2f hab/km²\nPIB per Capita: %2.f reais\n", carta2.pais, carta2.populacao, carta2.area, carta2.pib, carta2.turismo, carta2.densidade, carta2.pibpercapita);

    printf("Comparação de Atributos!\n");
    printf("1 para População\n2 para Área\n3 para PIB\n4 para Número de Pontos Turísticos\n5 para Densidade Demográfica\n");
    printf("Insira um número de 1 a 5 equivalento a um dos 5 atributos listados acima: ");
    scanf("%d", &atributo);

    switch (atributo)
    {
    case 1:

        if (carta1.populacao > carta2.populacao)
        {printf("Atributo Selecionado: População\n");
        printf("A população da carta %s é de %d habitantes, que é maior que a população da carta %s, que é de %d habitantes, logo a carta %s vence!\n", carta1.pais, carta1.populacao, carta2.pais, carta2.populacao, carta1.pais);  
        }else if (carta2.populacao > carta1.populacao)
        {printf("Atributo Selecionado: População\n");
        printf("A população da carta %s é de %d habitantes, que é maior que a população da carta %s, que é de %d habitantes, logo a carta %s vence!\n", carta2.pais, carta2.populacao, carta1.pais, carta1.populacao, carta2.pais);     
        }else
        {printf("Atributo Selecionado: População\n");
        printf("A população da carta %s é de %d habitantes, que é igual à população da carta %s, que também é de %d habitantes, logo houve um empate!\n", carta1.pais, carta1.populacao, carta2.pais, carta2.populacao);
        }
        
        break;
    
    case 2:

        if (carta1.area > carta2.area)
        {printf("Atributo Selecionado: Área\n");
        printf("A área da carta %s é de %.2f km², que é maior que a área da carta %s, que é de %.2f km², logo a carta %s vence!\n", carta1.pais, carta1.area, carta2.pais, carta2.area, carta1.pais);  
        }else if (carta2.area > carta1.area)
        {printf("Atributo Selecionado: Área\n");
        printf("A área da carta %s é de %.2f km², que é maior que a área da carta %s, que é de %.2f km², logo a carta %s vence!\n", carta2.pais, carta2.area, carta1.pais, carta1.area, carta2.pais);     
        }else
        {printf("Atributo Selecionado: Área\n");
        printf("A área da carta %s é de %.2f km², que é igual à área da carta %s, que também é de %.2f km², logo houve um empate!\n", carta1.pais, carta1.area, carta2.pais, carta2.area);
        }

        break;

    case 3:

        if (carta1.pib > carta2.pib)
        {printf("Atributo Selecionado: PIB\n");
        printf("O PIB da carta %s é de %.2f bilhões de reais, que é maior que o PIB da carta %s, que é de %.2f bilhões de reais, logo a carta %s vence!\n", carta1.pais, carta1.pib, carta2.pais, carta2.pib, carta1.pais);  
        }else if (carta2.pib > carta1.pib)
        {printf("Atributo Selecionado: PIB\n");
        printf("O PIB da carta %s é de %.2f bilhões de reais, que é maior que o PIB da carta %s, que é de %.2f bilhões de reais, logo a carta %s vence!\n", carta2.pais, carta2.pib, carta1.pais, carta1.pib, carta2.pais);     
        }else
        {printf("Atributo Selecionado: PIB\n");
        printf("O PIB da carta %s é de %.2f bilhões de reais, que é igual ao PIB da carta %s, que também é de %.2f bilhões de reais, logo houve um empate!\n", carta1.pais, carta1.pib, carta2.pais, carta2.pib);
        }

        break;

    case 4:

        if (carta1.turismo > carta2.turismo)
        {printf("Atributo Selecionado: Número de Pontos Turísticos\n");
        printf("O número de pontos turísticos da carta %s é de %d, que é maior que o número de pontos turísticos da carta %s, que é de %d, logo a carta %s vence!\n", carta1.pais, carta1.turismo, carta2.pais, carta2.turismo, carta1.pais);  
        }else if (carta2.turismo > carta1.turismo)
        {printf("Atributo Selecionado: Número de Pontos Turísticos\n");
        printf("O número de pontos turísticos da carta %s é de %d, que é maior que o número de pontos turísticos da carta %s, que é de %d, logo a carta %s vence!\n", carta2.pais, carta2.turismo, carta1.pais, carta1.turismo, carta2.pais);     
        }else
        {printf("Atributo Selecionado: Número de Pontos Turísticos\n");
        printf("O número de pontos turísticos da carta %s é de %d, que é igual ao número de pontos turísticos da carta %s, que também é de %d, logo houve um empate\n", carta1.pais, carta1.turismo, carta2.pais, carta2.turismo);
        }
        break;

    case 5:

        if (carta1.densidade < carta2.densidade)
        {printf("Atributo Selecionado: Densidade Demográfica\n");
        printf("A densidade demográfica da carta %s é de %.2f habitantes por km², que é menor que a densidade demográfica da carta %s, que é de %.2f habitantes por km², logo a carta %s vence!\n", carta1.pais, carta1.densidade, carta2.pais, carta2.densidade, carta1.pais);  
        }else if (carta2.densidade < carta1.densidade)
        {printf("Atributo Selecionado: Densidade Demográfica\n");
        printf("A densidade demográfica da carta %s é de %.2f habitantes por km², que é menor que a densidade demográfica da carta %s, que é de %.2f habitantes por km², logo a carta %s vence!\n", carta2.pais, carta2.densidade, carta1.pais, carta1.densidade, carta2.pais);     
        }else
        {printf("Atributo Selecionado: Densidade Demográfica\n");
        printf("A densidade demográfica da carta %s é de %.2f habitantes por km², que é igual à densidade demográfica da carta %s, que é também de %.2f habitantes por km², logo houve um empate!\n", carta1.pais, carta1.densidade, carta2.pais, carta2.densidade);
        }

        break;
    
    default:

    printf("Valor Inválido. Tente inserir um valor de 1 a 5 correspondente a um atributo.");
    }

    

    
    return 0;

  }
