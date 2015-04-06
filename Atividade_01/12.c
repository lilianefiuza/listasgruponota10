/*recebe 3 notas e calcula a media aritmetica*/

#include <stdio.h>

float media(float x,float y,float z)
{
	float soma,nota;
	nota= (x+y+z);//nota recebe soma das notas
	soma= (nota/3);//soma recebe a divisao do valor da soma das notas (nota) por 3
	return soma;//retorna soma
}


int main() 
{
	float nota1,nota2,nota3,result;
	printf("Digite 3 notas: ");
	scanf("%f",&nota1);
	scanf("%f",&nota2);
	scanf("%f",&nota3);
	result = media(nota1,nota2,nota3);//chama a função e result recebe o valor de retorno da função
	printf ("A media aritmetica eh: %f ", result);
	return 0;
}
