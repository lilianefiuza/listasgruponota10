/*recebe 3 notas e calcula a media ponderada*/

#include <stdio.h>

float media_ponderada(float x,float y,float z,int a, int b, int c)
{
	float soma,nota;
	nota = ((a*x)+(b*y)+(c*z));//nota recebe a soma da multiplicacao de cada nota por seu peso
	soma = (nota/(a+b+c));// soma recebe a divisao do valor de nota pela soma dos pesos
	return soma;//retorna valor de soma
}


int main() 
{
	float nota1,nota2,nota3,result;
	int peso1,peso2,peso3;
	printf("Digite 3 notas: ");
	scanf("%f",&nota1);
	scanf("%f",&nota2);
	scanf("%f",&nota3);
	printf("Digite seus pesos: ");
	scanf("%d",&peso1);
	scanf("%d",&peso2);
	scanf("%d",&peso3);
	result = media_ponderada(nota1,nota2,nota3,peso1,peso2,peso3);//chama a função e result recebe o valor de retorno da função
	printf ("A media ponderada eh: %f ", result);
	return 0;
}
