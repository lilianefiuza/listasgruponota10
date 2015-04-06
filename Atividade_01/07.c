#include <stdio.h>
//  converter metros em centimetros


float centimetros(float x)
{
	float cent;
	cent= (x*100);// cent recebe a multiplicacao do valor digitado em metros por 100 calculando assim o valor dos centimetros
	return cent;//retorna cent
}

int main() 
{
	float metros,result;
	printf("Digite um numero em metros para ser convertido em centimetros: ");
	scanf("%f",&metros);
	result= centimetros(metros);//chama a função e result recebe o valor de retorno da função
	printf("O valor em centimetro eh: %f",result);
	return 0;
}
