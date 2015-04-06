/* Temperatura em graus celsius */


#include <stdio.h>

float grau(float x)
{
	float c;
	c = (5 * ((x-32) / 9));// realiza calculo para transformar graus Farenheit em Celsius
	return c;//retorna c
}


int main() 
{
	float f,result;
	printf("Digite a temperatura em graus Farenheit: ");
	scanf("%f",&f);
	result = grau(f);//chama a função e result recebe o valor de retorno da função
	printf ("a temperatura em graus Celsius eh, %f", result);
	return 0;
}
