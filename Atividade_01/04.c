#include <stdio.h>
//digitar 4 numero e mostra na tela a soma 

int soma(int x,int y,int z,int w)
{
	int s;
	s= (x+y+z+w);//s recebe a soma dos 4 valores
	return s;
}

int main() 
{
	int a,b,c,d,result;
	printf("Digite quatro numeros: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);	
	result= soma(a,b,c,d);//chama a função e result recebe o valor de retorno da função
	printf("A soma dos quatro numeros eh: %d ",result);
	return 0;
}
