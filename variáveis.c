#include <stdio.h>

int main(int argc, char const *argv[]){
    
    ///Declaração de variáveis:
    //Variavel tipo int(Inteiro)
    int a = 5, b = 10;

    //Variavel tipo ponto flutuante(Decimal)
    float c = 5.3;

    ///Constantes:
    a = b + 123;

    float x;
    x = 12.45f; //Uma constante do tipo float(precisa do f/F para ser float);

    ///Variáveis com valores indefinidos:
    int a, b, c;
    a=2;
    c = a + b; //variável é "lixo", pois o b não possui nem um espaço na memória;


    ///Operadores aritméticos:

    /*
        + = Adição
        - = Subtração
        * = Multiplicação
        / = Divisão
        % = Resto/Módulo
    */

    int a;
    double b, c;
    a = 3.5; //Converter para inteiro;
    b = a/2.0; //Converter para double pois tipo de maior expressividade;
    c = 1/3 + b; 

    ///Operadores de atribuição:

    /*
        += -- i=i+valor
        -= -- i=i-valor
        *= -- i=i*valor
        /= -- i=i/valor
        %= -- i=i%valor
    */

    ///Operadores de incremento e descremento:

    /*
        ++ = i=i+1
        -- = i=i-1
    */

    ///Operadores relacionais e lógicos:

    /*
        < -- menor que
        > -- maior que
        <= -- menor ou igual que
        >= -- maior ou igual que
        == -- igual a
        != -- diferente de

        && -- Operador binário E(AND)
        || -- Operador binário OU(OR)
        ! -- Operador unário de NEGAÇÃO(NOT)
    */

    ///Operador sizeof:

    int a = sizeof(float);

    ///Conversão de tipo:

    float a = 3;

    int a, b;
    a = (int) 3.5;
    b = (int) 3.5 % 2;

    return 0;
}
