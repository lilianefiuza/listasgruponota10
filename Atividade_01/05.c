#include <stdio.h>

/* Soma de dois numeros */

int soma (int x,int y)
{	
	int s;
	s= (x+y);//s recebe a soma de 2 numeros
	return s;//retorna valor de s calculado
}

int main() 
{
	int a,b,result;
	printf("Digite dois numeros: ");
	scanf("%d",&a);
	scanf("%d",&b);
	result = soma(a,b);//chama a função e result recebe o valor de retorno da função
	printf("A soma dos dois numeros eh: %d",result);
	return 0;
}
