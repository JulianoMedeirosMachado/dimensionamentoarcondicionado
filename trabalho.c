#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pessoas,equipamentos,posicao, entreandares, sobtelhado,posicaojanela;
    int solmanhacc, soltardecc, solmanhasc, soltardesc,vidrossombra, kcalportas, kcalpessoas, kcalequipamentos;
    float formulalocal, kcal, formulajanela, formulaequipamentos, formulabtu;
    kcal = 0; // inicializando a variável
    int dimensaosala[3],janelas[2],portas[2];
    
    // Dados de entrada

    printf("Dimensionamento de Ar Condicionado\n");
    printf("\nInsira os dados que serao pedidos a seguir\n");
    printf("\nQual o comprimento da sala ou escritorio? ");
    scanf("%d", &dimensaosala[0]);
    printf("\nQual a largura? ");
    scanf("%d", &dimensaosala[1]);
    printf("\nQual a distancia entre o chao e o teto? ");
    scanf("%d", &dimensaosala[2]);

    dimensaosala[3]= dimensaosala[0] * dimensaosala[1] * dimensaosala[2];  // Calculo do volume

    posicao = 0;

    while (posicao>2 || posicao<=0 ){ // escolha da posição para o usuário
    printf("\nQual a posicao do recinto?");
    printf("\n1 - Entre andares\n");
    printf("2 - Sob telhado\n");
    printf("\nDigite uma das opcoes acima: ");
    scanf("%d", &posicao);
    }

    switch(posicao){ // implementando função da kcal no código
        case 1:
            formulalocal = 16 * dimensaosala[3];
            break;
        case 2:
            formulalocal = 22.3 * dimensaosala[3];
            break;
    }

    printf("\nO gasto em kcal dessa posicao e: %.2f\n", formulalocal);

    printf("\nQuantas janelas se encontram no recinto? ");
    scanf("%d", &janelas[0]);
    printf("\nQual a area ocupada por cada janela? ");
    scanf("%d", &janelas[1]);

    posicaojanela = 0; // inicializando a variável

    janelas[2] = janelas[0] * janelas[1]; // metros quadrados totais para saber o valor da tabela

    while (posicaojanela>5 || posicaojanela <= 0){ // escolha da posição para o usuário
    printf("\nQual e a exposicao ao sol das janelas?\n");
    printf("\n 1- sol pela manha com cortina");
    printf("\n 2- sol a tarde com cortina");
    printf("\n 3- sol pela manha sem cortina");
    printf("\n 4- sol a tarde sem cortina");
    printf("\n 5- vidros na sombra\n");
    printf("\nDigite uma opcao acima: ");
    scanf("%d", &posicaojanela);
    }

    switch(posicaojanela){ // implementando a formula no código
        case 1:
            formulajanela = 160 * janelas[2];
            break;
        case 2:
            formulajanela = 212 * janelas[2];
            break;
        case 3:
            formulajanela = 222 * janelas[2];
            break;
        case 4:
            formulajanela = 410 * janelas[2];
            break;
        case 5:
            formulajanela = 37 * janelas[2];
            break;
    }

    kcal += formulajanela;

    printf("\nO gasto calorico ocasionado pelas janela e: %.2f\n", formulajanela);

    printf("\nQuantas portas existem no recinto? ");
    scanf("%d", &portas[0]);
    printf("\nQual a area das portas? ");
    scanf("%d", &portas[1]);

    portas[2] = portas[0] * portas[1];

    kcalportas = 125 * portas[2];

    printf("\no gasto calorico ocasionado pela(s) porta(s) e %d\n", kcalportas);
    kcal += kcalportas;

    printf("\nQual o numero de pessoas que fica no recinto? ");
    scanf("%d", &pessoas);

    kcalpessoas = 125 * pessoas;

    printf("\nO gasto calorico ocasionado por esse numero de pessoas e: %d\n", kcalpessoas);

    kcal += kcalpessoas;

    printf("\nQuantos Watts todos os eletronicos do recinto consomem? ");
    scanf(" %d", &equipamentos);

    formulaequipamentos = 0.9 * equipamentos;

    kcal += formulaequipamentos;

    printf("\no gasto calorico ocasionado pelos eletronicos e %.2f\n", formulaequipamentos);
    printf("\no numero de kcal totais ao final foi: %.2f\n", kcal);

    //convertendo para BTUs

    formulabtu = 3.92 * kcal;

    printf("\nO resultado em BTUs foi: %.0f\n", formulabtu);

    //implementando a sugestão para ar condicionados no código

    if (formulabtu <= 7500){
        printf("\nO ar condicionado ideal para voce seria o Janela Consul 7500 BTUs Frio CCB07EB por R$ 985,50");
    } else if (formulabtu <= 9000 && formulabtu > 7500) {
        printf("\nO ar condicionado ideal para voce seria o Split LG 9000 BTUs Quente/Frio S4-W09WA51A por R$ 1.775,55");
    } else if (formulabtu <= 10000 && formulabtu > 9000) {
        printf("\nO ar condicionado ideal para voce seria o Janela Mecanico Consul 10000 BTUs Quente Frio CCS10EB por R$ 1.281,55");
    } else if (formulabtu <= 12000 && formulabtu > 10000) {
        printf("\nO ar condicionado ideal para voce seria o Split HW Elgin Eco Plus II 12.000 BTUs So Frio 220V R$ 1.349,10");
    } else if (formulabtu <= 18000 && formulabtu > 12000) {
        printf("\nO ar condicionado ideal para voce seria o Split LG Dual Inverter Voice 18.000 BTU/h Quente e Frio Monofasico S4NW18KL31B.EB2GAMZ por R$ 2.787,15");
    } else if (formulabtu <= 24000 && formulabtu > 18000) {
        printf("\nO ar condicionado ideal para voce seria o Split Inverter 24000 BTU Samsung Inverter Quente e Frio por R$ 3.739,15");
    } else if (formulabtu <= 27000 && formulabtu > 24000) {
        printf("\nO ar condicionado ideal para voce seria o Split HW Inverter Fujitsu 27.000 BTUs So Frio por R$ 3.969,10");
    } else if (formulabtu <= 30000 && formulabtu > 27000) {
        printf("\nO ar condicionado ideal para voce seria o Split HW Gree Eco Garden 30.000 BTUs Frio por R$ 4.179,00");
    } else if (formulabtu <= 36000 && formulabtu > 30000) {
        printf("\nO ar condicionado ideal para voce seria o Split Inverter High Wall Springer Midea Quente e Frio 36000 BTUs 42MBQA33M5 por R$ 6.669,00");
    } else if (formulabtu <= 48000 && formulabtu > 36000) {
        printf("\nO ar condicionado ideal para voce seria o Split Cassete Philco 48000 BTUs Frio por R$ 7.776,67");
    } else if (formulabtu <= 60000 && formulabtu > 48000) {
        printf("\nO ar condicionado ideal para voce seria o Split Piso Teto Inverter Elgin 60.000 BTUs so Frio por R$ 11.599,00");
    }
}