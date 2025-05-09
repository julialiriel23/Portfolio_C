
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int ano_nascimento, idade_atual, ano;

    printf("Digite o ano do seu nascimento:");
    scanf("%d",&ano_nascimento);

    idade_atual= 2025-ano_nascimento;
    ano=ano_nascimento+50;


    if(ano==2025){
        printf("Você fez 50 anos esse ano(2025)\n");
    }else{
         printf("Você terá 50 anos no ano: %d\n",ano);
    }

    printf("Sua idade atual é: %d\n", idade_atual);


    return 0;
}
