
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int m, n;
    int a, b;
    int mmc = 1, mdc = 1;
    int divisor;

    printf("Digite dois números inteiros positivos: ");
    scanf("%d %d", &m, &n);

    a = m;
    b = n;

    printf("\n MMC/MDC:\n");

    for ( divisor = 2; a > 1 || b > 1; ) {
        if (a % divisor == 0 || b % divisor == 0) {
            printf("%2d %2d | %d\n", a, b, divisor);

            if (a % divisor == 0 && b % divisor == 0) {
                mdc *= divisor;
            }

            if (a % divisor == 0){
                 a /= divisor;
            }
            if (b % divisor == 0){
                b /= divisor;
            }

            mmc *= divisor;

        } else {
            divisor++; // Só incrementa se não dividiu nenhum dos dois
        }
    }

    printf("%2d %2d\n", a, b);
    printf("MDC de %d e %d é: %d\n", m, n, mdc);
    printf("MMC de %d e %d é: %d\n", m, n, mmc);

    return 0;
}
