#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct CartaSuperTrunfo {
    char pais[50];
    int populacao;
    int turismo;
    float pib;
    float area;
    float densidade;
    float pibpercapita;
    float soma;
};

void lerCarta(struct CartaSuperTrunfo *carta) {
    printf("Digite o nome do País: ");
    scanf(" %49s", carta->pais);
    printf("Digite a População: ");
    scanf("%d", &carta->populacao);
    printf("Digite a Área em Km²: ");
    scanf("%f", &carta->area);
    printf("Digite o PIB em Bilhões de Reais: ");
    scanf("%f", &carta->pib);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &carta->turismo);
    carta->densidade = (float)carta->populacao / carta->area;
    carta->pibpercapita = carta->pib * 1000000000 / (float)carta->populacao;
    carta->soma = (float)carta->populacao + carta->area + carta->pib + (float)carta->turismo + carta->pibpercapita + 1 / carta->densidade;
}

void compararAtributo(struct CartaSuperTrunfo c1, struct CartaSuperTrunfo c2, int atributo) {
    switch (atributo) {
        case 1:
            printf("\nAtributo Selecionado: População\n");
            if (c1.populacao > c2.populacao)
                printf("\nA população da carta %s é de %d habitantes, que é maior que a população da carta %s, que é de %d habitantes, logo a carta %s vence!\n", c1.pais, c1.populacao, c2.pais, c2.populacao, c1.pais);
            else if (c2.populacao > c1.populacao)
                printf("\nA população da carta %s é de %d habitantes, que é maior que a população da carta %s, que é de %d habitantes, logo a carta %s vence!\n", c2.pais, c2.populacao, c1.pais, c1.populacao, c2.pais);
            else
                printf("\nA população da carta %s é de %d habitantes, que é igual à população da carta %s, que também é de %d habitantes, logo houve um empate!\n", c1.pais, c1.populacao, c2.pais, c2.populacao);
            break;
        case 2:
            printf("\nAtributo Selecionado: Área\n");
            if (c1.area > c2.area)
                printf("\nA área da carta %s é de %.2f km², que é maior que a área da carta %s, que é de %.2f km², logo a carta %s vence!\n", c1.pais, c1.area, c2.pais, c2.area, c1.pais);
            else if (c2.area > c1.area)
                printf("\nA área da carta %s é de %.2f km², que é maior que a área da carta %s, que é de %.2f km², logo a carta %s vence!\n", c2.pais, c2.area, c1.pais, c1.area, c2.pais);
            else
                printf("\nA área da carta %s é de %.2f km², que é igual à área da carta %s, que também é de %.2f km², logo houve um empate!\n", c1.pais, c1.area, c2.pais, c2.area);
            break;
        case 3:
            printf("\nAtributo Selecionado: PIB\n");
            if (c1.pib > c2.pib)
                printf("\nO PIB da carta %s é de %.2f bilhões de reais, que é maior que o PIB da carta %s, que é de %.2f bilhões de reais, logo a carta %s vence!\n", c1.pais, c1.pib, c2.pais, c2.pib, c1.pais);
            else if (c2.pib > c1.pib)
                printf("\nO PIB da carta %s é de %.2f bilhões de reais, que é maior que o PIB da carta %s, que é de %.2f bilhões de reais, logo a carta %s vence!\n", c2.pais, c2.pib, c1.pais, c1.pib, c2.pais);
            else
                printf("\nO PIB da carta %s é de %.2f bilhões de reais, que é igual ao PIB da carta %s, que também é de %.2f bilhões de reais, logo houve um empate!\n", c1.pais, c1.pib, c2.pais, c2.pib);
            break;
        case 4:
            printf("\nAtributo Selecionado: Pontos Turísticos\n");
            if (c1.turismo > c2.turismo)
                printf("\nA carta %s tem %d pontos turísticos, que são mais do que a carta %s, que tem %d pontos turísticos, logo a carta %s vence!\n", c1.pais, c1.turismo, c2.pais, c2.turismo, c1.pais);
            else if (c2.turismo > c1.turismo)
                printf("\nA carta %s tem %d pontos turísticos, que são mais do que a carta %s, que tem %d pontos turísticos, logo a carta %s vence!\n", c2.pais, c2.turismo, c1.pais, c1.turismo, c2.pais);
            else
                printf("\nA carta %s tem %d pontos turísticos, que é a mesma quantidade que a carta %s, que também tem %d pontos turísticos, logo houve um empate!\n", c1.pais, c1.turismo, c2.pais, c2.turismo);
            break;
        case 5:
            printf("\nAtributo Selecionado: Densidade Demográfica\n");
            if (c1.densidade < c2.densidade)
                printf("\nA densidade da carta %s é de %.2f habitantes por km², que é menor que a densidade da carta %s, que é de %.2f habitantes por km², logo a carta %s vence!\n", c1.pais, c1.densidade, c2.pais, c2.densidade, c1.pais);
            else if (c2.densidade < c1.densidade)
                printf("\nA densidade da carta %s é de %.2f habitantes por km², que é menor que a densidade da carta %s, que é de %.2f habitantes por km², logo a carta %s vence!\n", c2.pais, c2.densidade, c1.pais, c1.densidade, c2.pais);
            else
                printf("\nA densidade da carta %s é de %.2f habitantes por km², que é igual à densidade da carta %s, que também é de %.2f habitantes por km², logo houve um empate!\n", c1.pais, c1.densidade, c2.pais, c2.densidade);
            break;
        case 6:
            printf("\nAtributo Selecionado: PIB per Capita\n");
            if (c1.pibpercapita > c2.pibpercapita)
                printf("\nO PIB per Capita da carta %s é de %.2f reais por cabeça, que é maior que o PIB per Capita da carta %s, que é de %.2f reais por cabeça, logo a carta %s vence!\n", c1.pais, c1.pibpercapita, c2.pais, c2.pibpercapita, c1.pais);
            else if (c2.pibpercapita > c1.pibpercapita)
                printf("\nO PIB per Capita da carta %s é de %.2f reais por cabeça, que é maior que o PIB per Capita da carta %s, que é de %.2f reais por cabeça, logo a carta %s vence!\n", c2.pais, c2.pibpercapita, c1.pais, c1.pibpercapita, c2.pais);
            else
                printf("\nO PIB per Capita da carta %s é de %.2f reais por cabeça, que é igual ao PIB per Capita da carta %s, que também é de %.2f reais por cabeça, logo houve um empate!\n", c1.pais, c1.pibpercapita, c2.pais, c2.pibpercapita);
            break;
        default:
            printf("\nValor Inválido. Tente inserir um valor de 1 a 6 correspondente a um atributo.\n");
            break;
    }
}

int main() {
    printf("Bem vindo ao Super Trunfo de Países!\n");
    printf("Vamos começar cadastrando os atributos de 2 cartas!\n\n"); // mensagem do menu
    struct CartaSuperTrunfo carta1, carta2;
    int atributo1, atributo2;

    printf("Insira os Dados da Primeira Carta:\n");
    lerCarta(&carta1); // cadastro da primeira carta

    printf("Insira os Dados da Segunda Carta:\n");
    lerCarta(&carta2); // cadastro da segunda carta

    printf("\nComparação de Atributos!\n\n"); // menu de comparação
    printf("1 para População\n2 para Área\n3 para PIB\n4 para Número de Pontos Turísticos\n5 para Densidade Demográfica\n6 para PIB per Capita\n\n");
    printf("Insira um número de 1 a 6 equivalente a um dos 6 atributos listados acima para a comparação: ");
    scanf("%d", &atributo1);
    printf("\nInsira novamente um número de 1 a 6 equivalente a um dos 6 atributos listados acima para a comparação sem repetir o mesmo atributo selecionado anteriormente: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2)
    { printf("ERRO! Atributos iguais selecionados! Fechando programa..."); // lógica caso escolha atributos iguais
        return 0;
    }

    else
    
    compararAtributo(carta1, carta2, atributo1); // comparar atributos
    compararAtributo(carta1, carta2, atributo2);

    printf("\nComparação da Soma dos Atributos das duas Cartas!\n");
    if (carta1.soma > carta2.soma)
    {printf("\na soma dos atributos da carta %s é de %.2f, que é maior que a soma dos atributos da carta %s, que é de %.2f, logo a carta %s vence a rodada!\n", carta1.pais, carta1.soma, carta2.pais, carta2.soma, carta1.pais);
    } else if (carta2.soma > carta1.soma)
    {printf("\na soma dos atributos da carta %s é de %.2f, que é maior que a soma dos atributos da carta %s, que é de %.2f, logo a carta %s vence a rodada!\n", carta2.pais, carta2.soma, carta1.pais, carta1.soma, carta2.pais);
    } else
    printf("\na soma dos atributos da carta %s é de %.2f, que é igual à soma dos atributos da carta %s, que também é de %.2f, logo houve um empate nessa rodade!\n", carta2.pais, carta2.soma, carta1.pais, carta1.soma);
    
    

    return 0;
}
