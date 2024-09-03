#include <stdio.h>
#include <string.h>

int main()
{

int idade = 0;

double salario = 0;

double altura = 0;

char genero;

char nome[50];

printf("Digite sua idade: " );
scanf("%d", &idade);

printf("Digite seu salario: ");
scanf("%lf", &salario);

printf("Digite sua altura: ");
scanf("%lf", &altura);

 getchar();

printf("Digite seu genero:  ");
 scanf("%c", &genero);



printf("Digite seu nome: ");
scanf("%s", &nome);



printf("\nDados inseridos:\n");
    printf("Idade: %d\n", idade);
    printf("Salario: %.2lf\n", salario);
    printf("Altura: %.2lf\n", altura);
    printf("Genero: %c\n", genero);
    printf("Nome: %s\n", nome);







return 0;



}
