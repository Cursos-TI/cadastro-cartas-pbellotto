#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void imprimir_comparacao_valores_cartas(char atributo[], bool inverso, float valor1, float valor2)
{
    switch (inverso ? (valor1 < valor2) : (valor1 > valor2))
    {
    case true:
        printf("%s: Carta 1 venceu (%d)\n", atributo, 1);
        break;

    default:
        if (valor1 == valor2)
        {
            printf("%s: Empate\n", atributo);
            break;
        }

        printf("%s: Carta 2 venceu (%d)\n", atributo, 0);
        break;
    }
}

int main()
{
    char carta1Estado;
    char carta1Codigo[4], carta1NomeCidade[36];
    int carta1Populacao, carta1PontosTuristicos;
    float carta1Area, carta1Pib, carta1DensidadePopulacional, carta1PibPerCapita, carta1SuperPoder;

    char carta2Estado;
    char carta2Codigo[4], carta2NomeCidade[36];
    int carta2Populacao, carta2PontosTuristicos;
    float carta2Area, carta2Pib, carta2DensidadePopulacional, carta2PibPerCapita, carta2SuperPoder;

    printf("--------------------------------------------------\n");
    printf("------------------ SUPER TRUNFO ------------------\n");
    printf("--------------------------------------------------\n");
    printf("Exemplos:\n");
    printf("Estado A (Bahia):\n");
    printf("  Cidade 01 - Salvador\n");
    printf("  Cidade 02 - Barreiras\n");
    printf("  Cidade 03 - Juazeiro\n");
    printf("  Cidade 04 - Ilhéus\n\n");

    printf("Estado B (São Paulo):\n");
    printf("  Cidade 01 - São Paulo\n");
    printf("  Cidade 02 - Campinas\n");
    printf("  Cidade 03 - Santos\n");
    printf("  Cidade 04 - Adamantina\n\n");

    printf("Estado C (Minas Gerais):\n");
    printf("  Cidade 01 - Contagem\n");
    printf("  Cidade 02 - Uberlândia\n");
    printf("  Cidade 03 - Congonhas\n");
    printf("  Cidade 04 - Divinópolis\n\n");

    printf("Estado D (Amazonas):\n");
    printf("  Cidade 01 - Manaus\n");
    printf("  Cidade 02 - Parintins\n");
    printf("  Cidade 03 - Itacoatiara\n");
    printf("  Cidade 04 - Manacapuru\n\n");

    printf("Estado E (Paraná):\n");
    printf("  Cidade 01 - Curitiba\n");
    printf("  Cidade 02 - Londrina\n");
    printf("  Cidade 03 - Maringá\n");
    printf("  Cidade 04 - Araucária\n\n");

    printf("Estado F (Rio de Janeiro):\n");
    printf("  Cidade 01 - Saquarema\n");
    printf("  Cidade 02 - Niterói\n");
    printf("  Cidade 03 - Petrópolis\n");
    printf("  Cidade 04 - Macaé\n\n");

    printf("Estado G (Ceará):\n");
    printf("  Cidade 01 - Fortaleza\n");
    printf("  Cidade 02 - Sobral\n");
    printf("  Cidade 03 - Acaraú\n");
    printf("  Cidade 04 - Crato\n\n");

    printf("Estado H (Santa Catarina):\n");
    printf("  Cidade 01 - Florianópolis\n");
    printf("  Cidade 02 - Joinville\n");
    printf("  Cidade 03 - Blumenau\n");
    printf("  Cidade 04 - Chapecó\n");

    printf("--------------------------------------------------\n");

    printf("Insira os dados da carta 1:\n");
    printf("Estado: ");
    scanf("%c", &carta1Estado);
    printf("Código: ");
    scanf("%s", carta1Codigo);
    printf("Nome: ");
    scanf("%s", carta1NomeCidade);
    printf("População: ");
    scanf("%d", &carta1Populacao);
    printf("Área (em km2): ");
    scanf("%f", &carta1Area);
    printf("PIB: ");
    scanf("%f", &carta1Pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1PontosTuristicos);
    carta1DensidadePopulacional = carta1Populacao / carta1Area;
    carta1PibPerCapita = carta1Pib / carta1Populacao;
    carta1SuperPoder = carta1Populacao + carta1Area + carta1Pib + carta1PontosTuristicos + (1.00 / carta1DensidadePopulacional) + carta1PibPerCapita;

    printf("--------------------------------------------------\n");

    printf("Insira os dados da carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &carta2Estado);
    printf("Código: ");
    scanf("%s", carta2Codigo);
    printf("Nome: ");
    scanf("%s", carta2NomeCidade);
    printf("População: ");
    scanf("%d", &carta2Populacao);
    printf("Área (em km2): ");
    scanf("%f", &carta2Area);
    printf("PIB: ");
    scanf("%f", &carta2Pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2PontosTuristicos);
    carta2DensidadePopulacional = carta2Populacao / carta2Area;
    carta2PibPerCapita = carta2Pib / carta2Populacao;
    carta2SuperPoder = carta2Populacao + carta2Area + carta2Pib + carta2PontosTuristicos + (1.00 / carta2DensidadePopulacional) + carta2PibPerCapita;

    printf("\n--------------------------------------------------\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1Estado);
    printf("Código: %s\n", carta1Codigo);
    printf("Nome: %s\n", carta1NomeCidade);
    printf("População: %d\n", carta1Populacao);
    printf("Área: %.2f km²\n", carta1Area);
    printf("PIB: %.2f bilhões de reais\n", carta1Pib);
    printf("Número de Pontos Turísticos: %d\n", carta1PontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1DensidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta1PibPerCapita);

    printf("--------------------------------------------------\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2Estado);
    printf("Código: %s\n", carta2Codigo);
    printf("Nome: %s\n", carta2NomeCidade);
    printf("População: %d\n", carta2Populacao);
    printf("Área: %.2f km²\n", carta2Area);
    printf("PIB: %.2f bilhões de reais\n", carta2Pib);
    printf("Número de Pontos Turísticos: %d\n", carta2PontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2DensidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta2PibPerCapita);

    printf("\n--------------------------------------------------\n\n");

    imprimir_comparacao_valores_cartas("População", false, carta1Populacao, carta2Populacao);
    imprimir_comparacao_valores_cartas("Área", false, carta1Area, carta2Area);
    imprimir_comparacao_valores_cartas("PIB", false, carta1Pib, carta2Pib);
    imprimir_comparacao_valores_cartas("Número de Pontos Turísticos", false, carta1PontosTuristicos, carta2PontosTuristicos);
    imprimir_comparacao_valores_cartas("Densidade Populacional", false, carta1DensidadePopulacional, carta2DensidadePopulacional);
    imprimir_comparacao_valores_cartas("PIB per Capita", false, carta1PibPerCapita, carta2PibPerCapita);
    imprimir_comparacao_valores_cartas("Super Poder", true, carta1SuperPoder, carta2SuperPoder);
    system("pause");
    return 0;
}