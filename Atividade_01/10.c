#include <stdio.h>


float calc_trabalho(float ganho,float hora)
{
	float totalsalario;
	totalsalario= (ganho*hora);//multiplica valor de ganho por hora com numero de hora trabalhada
	return totalsalario;// retorna totalsalario 
}

int main() 
{
	float hora,d,result;
	printf("Digite quanto voce ganha por hora: ");
	scanf("%f",&d);
	printf("Digite numero de horas trabalhadas no mes: ");
	scanf("%f",&hora);	
	result= calc_trabalho(d,hora);//chama a função e result recebe o valor de retorno da função
	printf("Salario eh: %f", result);
	return 0;
}
