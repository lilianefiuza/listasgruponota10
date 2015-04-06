/* recebe salario base,calcular e mostrar o salarioa  receber,
sabendo­-se que o funcionário tem gratificação de 50 reais 
sobre o salário base e paga imposto de 10% sobre salario base. */

/*10% do valor do salario*/

#include <stdio.h>

float valor_a_receber( float salario)
{
	float x,salario_grat,recebe,a,imposto;
	x=(salario+50);
	a= (salario*10);/*porcentagem em cima do salario */
	imposto= (a/100);
	recebe= (x-imposto);/*valor a ser recebido (salario + gratificação = valor do salario*/
	return recebe;
}


int main() 
{
	float result, salario_base;
	printf("Digite seu salario base: ");
	scanf("%f",&salario_base);
	result = valor_a_receber(salario_base);//chama a função e result recebe o valor de retorno da função
	printf(" O salario a receber eh: %f",result);
	return 0;
}
