#include <stdio.h>

int main(){
    
    ///Função printf:

    //print(formato, lista de constantes/variáveis/expressões);

    /*
        %c - especifica um char
        %d ou %i - especifica um int
        %u - especifica um unsigned int
        %f - especifica um double (ou float)
        %e - especifica um double (ou float) no formato científico
        %g - especifica um double (ou float) no formato mais apropriado (%f ou %e)
        %s - especifica uma cadeira de caracteres
    */

    printf("Inteiro:%d, Real:%g\n", 33, 5.3);

    printf("Curso de Estruturas de Dados\n");

    /*
        \n - caractere de nova linha
        \t - caractere de tabulação
        \r - caractere de retrocesso
        \" - o caractere ""
        \\ - o caractere \
        %% ou \% - o caractere %
    */

    printf("%.1f \n", 2.123);

    ///Função scanf:

    //scanf(formato, lista de endereços das variáveis...);

    /*
        %c - especifica um char
        %d ou %i - especifica um int
        %u - especifica um unsigned int
        %f, %e, %g - especifica um float
        %lf, %le, %lg - especifica um double
        %s - especifica uma cadeira de caracteres(String)
    */

    int n;
    scanf("%d", &n);

    printf("valor de N:%d \n", n);


    //Atividade:

    int f;
    float p;
    float h;

    printf("Digite altura em metros:");
    scanf("%f", &h);

    h=100*h;
    f=(int) (h/30.48);
    p=(h-f*30.48)/2.54;

    printf("Altura: %dft %.lfpol\n", f,p);


    return 0;
}
