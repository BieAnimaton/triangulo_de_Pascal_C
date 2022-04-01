#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    long int n, linhas, count;

    printf("Digite o valor de 'n': ");
    scanf("%d%*c", &n);

    unsigned long fatorial(unsigned long f)
        {
            if ( f == 0 ) {
                return 1;
            }

            return(f * fatorial(f - 1));
        }

    printf("n \t| \t     Coeficientes de (a+b)^n \t\t| \tnº de subconjuntos\n");

    while (linhas <= n) {
        //power = pow(2, linhas);
        printf("%d \t|   ", linhas);
        for (int i = 0; i <= linhas; i++) {
            printf("%d", ( fatorial(linhas)/(fatorial(linhas-i)*fatorial(i) )));
            if (i <= linhas-1) {
                printf(", ");
            }
        }
        printf("  ->  %.2lf  = ", pow(2, linhas));
        printf(" 2^%d\n", linhas);
        linhas++;
    }

    return 0;
}
