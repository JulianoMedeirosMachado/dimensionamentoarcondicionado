#include <stdio.h>

int main()
{
    float volume,comprimentosala,largurasala,pedireitosala,posicao,janelas,areajanelas,portas,areaportas,pessoas,equipamentos;
    
    // Dados de entrada

    printf("Dimensionamento de Ar Condicionado\n");
    printf("\nInsira os dados que serao pedidos a seguir\n");
    printf("\nQual o comprimento da sala ou escritório?\n");
    scanf("%f", &comprimentosala);
    printf("\nQual a largura?\n");
    scanf("%f", &largurasala);
    printf("\nQual a distancia entre o chao e o teto?");
    scanf("%f", &pedireitosala);

    volume= comprimentosala * largurasala * pedireitosala;  // Calculo do volume

    printf("\nQual a posição do recinto?");
    printf("1 - ")

}