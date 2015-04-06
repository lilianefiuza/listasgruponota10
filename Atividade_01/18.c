/*area de um triangulo*/

#include <stdio.h>

float valor_area(float b,float a)
{
	float area,cont;
	cont = (b*a);//cont recebe o vaor da multiplicacao da base x altura
	area = (cont/2);// area recebe o valor de cont e divide por 2
	return area; // retorna valor de area
}


int main() 
{
	float base,result,altura;
	printf("Digite o valor da base: ");
	scanf("%f",&base);
	printf("Digite a altura: ");
	scanf("%f",&altura);
	result = valor_area(base,altura);//chama a função e result recebe o valor de retorno da função
	printf ("O valor da area eh: %f ", result);
	return 0;
}
