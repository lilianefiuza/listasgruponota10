/*salário de um funcionário e o percentual de aumento, calcule e mostre o valor
do aumento e o novo salário.*/

#include <stdio.h>

float novo_salario(float s,float y)
{
	float aumento,valor_aumento,x;
	x=(s*y);//x recebe valor da multiplicacao do salario pelo percentual
	valor_aumento = (x/100);//valor_aumento recebe a divisao de x por 100, terminando assim o calculo da porcentagem 
	printf("valor do aumento: %f\n", x);// mostra na tela valor do aumento
	aumento = (valor_aumento+s);//aumento recebe o novo salario que eh a soma do valor da porcentagem de aumento pelo salario
	return aumento;
}


int main() 
{
	float salario,result;
	int aumento;
	printf("Digite seu salario: ");
	scanf("%f",&salario);
	printf("Digite o percentual de aumento: ");
	scanf("%d",&aumento);
	result = novo_salario(salario,aumento);//chama a função e result recebe o valor de retorno da função
	printf ("O novo salario eh: %f ", result);
	return 0;
}
