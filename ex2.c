#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
     int num;
     int positivos=0;
      int negativos=0;
     do{
        printf("Digite um inteiro (zero para parar): ");
        scanf("%d", &num);
        if(num > 0) {
            positivos++;
        } else if (num < 0) {
            negativos++;
        }

    } while(num != 0);

    if (positivos > negativos) {
        printf("Foram digitados mais números positivos.\n");
    } else if (negativos > positivos) {
        printf("Foram digitados mais números negativos.\n");
    } else {
        printf("Foi digitada a mesma quantidade de números positivos e negativos.\n");
    }

    printf("Quantidade de números positivos: %d\n", positivos);
    printf("Quantidade de números negativos: %d\n",negativos);
    printf("Programa encerrado.\n");
    return 0;
}

