#include <stdio.h>

/* Recebe 4 notas e calcula a media */

float somar(float a,float b, float c, float d)
{
	float soma,media;
	soma=(a+b+c+d);//soma recebe a soma dos 4 valores digitados
	media= (soma/4);//media recebe a divisao de soma por 4, calculando assima  media
	return media;//retorna media
}

int main() 
{
	float nota1,nota2,nota3,nota4,X;
	printf("Digite quatro notas: ");
	scanf("%f",&nota1);
	scanf("%f",&nota2);
	scanf("%f",&nota3);
	scanf("%f",&nota4);
	X= somar(nota1,nota2,nota3,nota4);//chama a função e result recebe o valor de retorno da função
	printf("a soma das quatro notas eh: %f",X);
	return 0;
}
