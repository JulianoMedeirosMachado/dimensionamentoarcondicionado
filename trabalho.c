#include <stdio.h>
#include <stdlib.h>

int main()
{
    int volume,comprimentosala,largurasala,pedireitosala,janelas,areajanelas,portas,areaportas,pessoas,equipamentos,posicao, kcal, entreandares, sobtelhado, metragemjanela,posicaojanela;
    int solmanhacc, soltardecc, solmanhasc, soltardesc,vidrossombra;
    kcal = 0; // inicializando a variável
    
    // Dados de entrada

    printf("Dimensionamento de Ar Condicionado\n");
    printf("\nInsira os dados que serao pedidos a seguir\n");
    printf("\nQual o comprimento da sala ou escritorio?\n");
    scanf("%d", &comprimentosala);
    printf("\nQual a largura?\n");
    scanf("%d", &largurasala);
    printf("\nQual a distancia entre o chao e o teto?\n");
    scanf("%d", &pedireitosala);

    volume= comprimentosala * largurasala * pedireitosala;  // Calculo do volume


    while (posicao!=2){ // escolha da posição para o usuário
    printf("\nQual a posição do recinto?");
    printf("\n1 - Entre andares\n");
    printf("2 - Sob telhado\n");
    scanf("%d", &posicao);
    }


    switch(volume){ // implementando a tabela no código
        case 30 :
            entreandares = 480;
            sobtelhado = 670;
            break;
        case 33 :
            entreandares = 530;
            sobtelhado = 740;
            break;
        case 36 :
            entreandares = 580;
            sobtelhado = 800;
            break;
        case 39 :
            entreandares = 620;
            sobtelhado = 870;
            break;
        case 42 :
            entreandares = 670;
            sobtelhado = 940;
            break;
        case 45 : 
            entreandares = 720;
            sobtelhado = 1000;
            break;
        case 48 :
            entreandares = 770;
            sobtelhado = 1070;
            break;
        case 51 :
            entreandares = 816;
            sobtelhado = 1140;
            break;
        case 54 :
            entreandares = 864;
            sobtelhado = 1200;
            break;
        case 57 :
            entreandares = 910;
            sobtelhado = 1270;
            break;
        case 60 :
            entreandares = 960;
            sobtelhado = 1340;
            break;
        case 63 :
            entreandares = 1010;
            sobtelhado = 1410;
            break;
        case 66 :
            entreandares = 1060;
            sobtelhado = 1470;
            break;
        case 69 :
            entreandares = 1100;
            sobtelhado = 1540;
            break;
        case 72 :
            entreandares = 1150;
            sobtelhado = 1610;
            break;
        case 75 :
            entreandares = 1200;
            sobtelhado = 1680;
            break;
        case 78 :
            entreandares = 1250;
            sobtelhado = 1740;
            break;
        case 81 :
            entreandares = 1300;
            sobtelhado = 1810;
            break;
        case 84 :
            entreandares = 1340;
            sobtelhado = 1880;
            break;
        case 87 :
            entreandares = 1390;
            sobtelhado = 1940;
            break;
        case 90 :
            entreandares = 1440;
            sobtelhado = 2010;
            break;
        }


    if (posicao == 1){
        kcal += entreandares;
    } else {
        kcal += sobtelhado;
    }

    printf("\nQuantas janelas se encontram no recinto?\n");
    scanf("%d", &janelas);
    printf("\nQual a area ocupada por cada janela?\n");
    scanf("%d", &areajanelas);

    metragemjanela = janelas * areajanelas; // metros quadrados totais para saber o valor da tabela

    while (posicaojanela!=5){ // escolha da posição para o usuário
    printf("\nQual e a exposicao ao sol das janelas?\n");
    printf("\n 1- sol pela manha com cortina");
    printf("\n 2- sol a tarde com cortina");
    printf("\n 3- sol pela manha sem cortina");
    printf("\n 4- sol a tarde sem cortina");
    printf("\n 5- vidros na sombra\n");
    scanf("%d", &posicaojanela);
    }

    switch(metragemjanela){ // implementando a tabela no código
        case 1:
            solmanhacc = 160;
            soltardecc = 212;
            solmanhasc = 222;
            soltardesc = 410;
            vidrossombra = 37;
            break;
        case 2:
            solmanhacc = 320;
            soltardecc = 424;
            solmanhasc = 444;
            soltardesc = 820;
            vidrossombra = 74;
            break;
        case 3:
            solmanhacc = 480;
            soltardecc = 636;
            solmanhasc = 666;
            soltardesc = 1230;
            vidrossombra = 110;
            break;
        case 4:
            solmanhacc = 640;
            soltardecc = 848;
            solmanhasc = 888;
            soltardesc = 1640;
            vidrossombra = 148;
            break;
        case 5:
            solmanhacc = 800;
            soltardecc = 1060;
            solmanhasc = 1110;
            soltardesc = 2050;
            vidrossombra = 185;
            break;
        case 6:
            solmanhacc = 960;
            soltardecc = 1272;
            solmanhasc = 1332;
            soltardesc = 2460;
            vidrossombra = 222;
            break;
        case 7:
            solmanhacc = 1120;
            soltardecc = 1484;
            solmanhasc = 1554;
            soltardesc = 2870;
            vidrossombra = 260;
            break;
        case 8:
            solmanhacc = 1280;
            soltardecc = 1696;
            solmanhasc = 1777;
            soltardesc = 3280;
            vidrossombra = 295;
            break;
        case 9:
            solmanhacc = 1440;
            soltardecc = 1908;
            solmanhasc = 1998;
            soltardesc = 3960;
            vidrossombra = 330;
            break;
        case 10:
            solmanhacc = 1600;
            soltardecc = 2120;
            solmanhasc = 2220;
            soltardesc = 4100;
            vidrossombra = 370;
            break;
    }

    if (posicaojanela == 1){
        kcal += solmanhacc;
    } else if (posicaojanela == 2){
        kcal += soltardecc;
    } else if (posicaojanela == 3){
        kcal += solmanhasc;
    } else if (posicaojanela == 4){
        kcal += soltardesc;
    } else if (posicaojanela == 5){
        kcal += vidrossombra;
    }

}