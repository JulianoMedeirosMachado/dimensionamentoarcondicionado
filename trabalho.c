#include <stdio.h>
#include <stdlib.h>

int main()
{
    int volume,comprimentosala,largurasala,pedireitosala,janelas,areajanelas,portas,areaportas,pessoas,equipamentos,posicao, kcal, entreandares, sobtelhado;

    kcal = 0; // inicializando a variável
    
    // Dados de entrada

    printf("Dimensionamento de Ar Condicionado\n");
    printf("\nInsira os dados que serao pedidos a seguir\n");
    printf("\nQual o comprimento da sala ou escritório?\n");
    scanf("%d", &comprimentosala);
    printf("\nQual a largura?\n");
    scanf("%d", &largurasala);
    printf("\nQual a distancia entre o chao e o teto?");
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

}