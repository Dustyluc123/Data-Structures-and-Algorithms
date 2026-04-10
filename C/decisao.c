#include<stdio.h>
int main(){

    float nota1, nota2;
    int presenca;

    printf("Calculo da média do aluno\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite o número de presenças do aluno: ");
    scanf("%d", &presenca);

    float media = (nota1 + nota2) / 2; 
    printf("A média do aluno é: %.2f\n", media);
    if(media >= 6 &&(presenca >= 75)){
        printf("Aprovado\n");

    } else if (media >= 4 && (presenca >= 75)){
        printf("Recuperação\n");
    }else if (media < 4 && (presenca >= 75)){
        printf("Reprovado por nota\n");
    } else if (media >= 6 && (presenca < 75)){
        printf("Reprovado por falta\n");
    } else {
        printf("Reprovado por nota e falta\n");
    }
    return 0;
}

