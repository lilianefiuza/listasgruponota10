#include <stdio.h>
//calculo da area de um circulo

float calc_area(float r)
{
	float pi,area;
	pi= 3,141592;// valor de pi
	area = (pi * (r*r));// area faz o calculo de area atras do valor de pi e do raio digitado pelo usuario
	return area;//retorna area
}

int main()
{
	float raio, result;
	printf("Para saber a area do circulo informe o valor do raio: ");
	scanf("%f", &raio);
	result= calc_area(raio);//chama a função e result recebe o valor de retorno da função
	printf ("o valor da area eh: %f", result);
	return 0;
}
