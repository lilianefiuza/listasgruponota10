/*aumento de salario em 25%*/

#include <stdio.h>

float novo_salario(float s)
{
	float aumento,cont,x;
	x=(s*25);//x recebe a multipicacao do salario por 25
	cont = (x/100);//cent recebe a divisao de x por 100
	aumento = (cont+s); //aumento recebe o resultado do aumento de salario de 25%
	return aumento;//retorna aumento
}


int main() 
{
	float salario,result;
	printf("Digite seu salario: ");
	scanf("%f",&salario);
	result = novo_salario(salario);//chama a função e result recebe o valor de retorno da função
	printf ("O novo salario eh: %f ", result);
	return 0;
}
