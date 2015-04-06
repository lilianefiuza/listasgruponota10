#include <stdio.h>

int calc_area(int lado)
{
	int area,areatotal;
	area = (lado*lado);// area recebe multiplicacao do valor dos lados
	areatotal = (2*area);//areatotal receba a multiplicacao do valor de area por 2
	return areatotal;//retorna areatotal
} 	


int main()
{
	int l,result;
	printf("digite o valor de um lado do quadrado");
	scanf("%d", &l);
	result= calc_area(l);//chama a função e result recebe o valor de retorno da função
	printf("a area total eh %d", result);
	return 0;
}
