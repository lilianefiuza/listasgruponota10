#include <stdio.h>
int main(){
    float a, b, c; int i;
    printf("Menu de opções:\n1.Somar dois números.\n2.Subtrair dois números\n3.Multiplicar dois números\n4.Dividir dois números\n5.Raiz quadrada de um número\nDigite a opção desejada."); scanf("%d", i);
    if(i == 1){
         printf("Digite os operandos: "); scanf("%f", a); scanf("%f", b);
         c = a + b;
         printf("%f", c);
    }
    else if(i == 2){
         printf("Digite os operandos: "); scanf("%f", a); scanf("%f", b);
         c = a - b;
         printf("%f", c);
    }
    else if(i == 3){
         printf("Digite os operandos: "); scanf("%f", a); scanf("%f", b);
         c = a*b;
         printf("%f", c);
    }
    else if(i == 4){
         printf("Digite os operandos: "); scanf("%f", a); scanf("%f", b);
         c = a/b;
         printf("%f", c);
    }
    else if(i == 5){
         printf("Digite o operando: "); scanf("%f", a);
         c = sqrt(a);
         printf("%f", c);
    }
    return 0;
}
