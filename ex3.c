#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float C, F, temp;
    char unidade;

    printf("Digite uma temperatura: ");
    scanf("%f", &temp);

    printf("Informe se a temperatura esté em Celsius ou Fahrenheit (Digite C ou F): ");
    scanf(" %c", &unidade);

    if (unidade == 'C' || unidade == 'c') {
        F = ((9 * temp) / 5) + 32;
        printf("A temperatura %f C em Fahrenheit é: %f F\n", temp, F);
    } else if (unidade == 'F' || unidade == 'f') {
        C = (5 * (temp - 32)) / 9;
        printf("A temperatura %f F em Celsius é: %f C\n", temp, C);
    } else {
        printf("Unidade inv�lida. Use 'C' para Celsius ou 'F' para Fahrenheit.\n");
    }

    return 0;
}
