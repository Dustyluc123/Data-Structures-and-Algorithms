#include<stdio.h>
int main(){

    int opcao, presenca;
   
    printf("1 - Calcular média\n");
    printf("2 - Verificar presença\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &opcao);

    float nota_1, nota_2, media;
  
    switch (opcao){

        case 1:
            printf("Calculo da média do aluno\n");

            printf("Digite a primeira nota: ");
            scanf("%f", &nota_1);
            // Se o usuário digitar 15, a condição abaixo é VERDADEIRA e o loop inicia
            while (nota_1 < 0 || nota_1 > 10) {
                printf("Nota invalida! Digite a nota 1 novamente (0-10): ");
                scanf("%f", &nota_1);
            }

            printf("Digite a segunda nota: ");
            scanf("%f", &nota_2);
            while (nota_2 < 0 || nota_2 > 10) {
                printf("Nota invalida! Digite a nota 2 novamente (0-10): ");
                scanf("%f", &nota_2);
            }

            media = (nota_1 + nota_2) / 2;
            printf("Media: %.2f\n", media);
            break;
        case 2:
            printf("Verificador de presença\n");
            printf("Digite o número de presenças do aluno: ");
            scanf("%d", &presenca);
            if (presenca >= 75 && presenca <= 100){
                printf("O aluno esta sem pendencia na prencencia, a frequência é de %d%%\n", presenca);
            } else if (presenca < 75 && presenca >= 0){
                printf("O aluno esta com pendencia na prencencia, a frequência é de %d%%\n", presenca);
            }else {
                printf("Valor de presença inválido\n");
            }

            break;
        default:
            printf("Opção inválida\n");
            break;

    }
return 0;
}