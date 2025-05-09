#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");{
    int n, i, j;
    printf("Digite um valor maior que 5: ");
    scanf("%d", &n);

    if (n <= 5) {
        printf("O valor deve ser maior que 5.\n");
        printf("Digite um valor maior que 5: ");
        scanf("%d", &n);
    }

    //1 laço: linha inicial
    for (i = 0; i < n; i++) {
        printf("J");
    }
    printf("\n");

    // 2 laço: linhas do meio
    for ( i = 1; i < n - 2; i++) {
        for ( j = 0; j < n - 1; j++) {
            printf(" ");
        }
        printf("J\n");
    }

    // 3 laço: penúltima linha
    for ( i = 0; i < n; i++) {
        if (i == 0 || i == n - 2) {
            printf("J");
        } else {
            printf(" ");
        }
    }
    printf("\n");

    // 4 laço: última linha
    for ( i = 0; i < n; i++) {
        if (i == 0) {
            printf(" ");
        } else if (i < n - 1) {
            printf("J");
        }
    }
    printf("\n");

    return 0;
}
}
