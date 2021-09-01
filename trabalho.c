#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pessoas,equipamentos,posicao, entreandares, sobtelhado,posicaojanela;
    int solmanhacc, soltardecc, solmanhasc, soltardesc,vidrossombra, kcalportas, kcalpessoas, kcalequipamentos;
    float formulalocal, kcal, formulajanela, formulaequipamentos, formulabtu;
    kcal = 0; // inicializando a variável
    int dimensaosala[4],janelas[3],portas[3];
    
    // Dados de entrada

    printf("Dimensionamento de Ar Condicionado\n");
    printf("\nInsira os dados que serao pedidos a seguir\n");
    printf("\nQual o comprimento da sala ou escritorio? ");
    scanf("%d", &dimensaosala[1]);
    printf("\nQual a largura? ");
    scanf("%d", &dimensaosala[2]);
    printf("\nQual a distancia entre o chao e o teto? ");
    scanf("%d", &dimensaosala[3]);

    dimensaosala[4]= dimensaosala[1] * dimensaosala[2] * dimensaosala[3];  // Calculo do volume

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
            formulalocal = 16 * dimensaosala[4];
            break;
        case 2:
            formulalocal = 22.3 * dimensaosala[4];
            break;
    }

    printf("\nO gasto em kcal dessa posicao e: %.2f\n", formulalocal);

    printf("\nQuantas janelas se encontram no recinto? ");
    scanf("%d", &janelas[1]);
    printf("\nQual a area ocupada por cada janela? ");
    scanf("%d", &janelas[2]);

    posicaojanela = 0; // inicializando a variável

    janelas[3] = janelas[1] * janelas[2]; // metros quadrados totais para saber o valor da tabela

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
            formulajanela = 160 * janelas[3];
            break;
        case 2:
            formulajanela = 212 * janelas[3];
            break;
        case 3:
            formulajanela = 222 * janelas[3];
            break;
        case 4:
            formulajanela = 410 * janelas[3];
            break;
        case 5:
            formulajanela = 37 * janelas[3];
            break;
    }

    kcal += formulajanela;

    printf("\nO gasto calorico ocasionado pelas janela e: %.2f\n", formulajanela);

    printf("\nQuantas portas existem no recinto? ");
    scanf("%d", &portas[1]);
    printf("\nQual a area das portas? ");
    scanf("%d", &portas[2]);

    portas[3] = portas[1] * portas[2];

    kcalportas = 125 * portas[3];

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

}