#include <stdio.h>
float maior(float a, float b, float c){
      if(a > b && a > c){
           return a;
      }
      else if(b > a && b > c){
           return b;
      }
      else{
           return c;
      }
}
float meio(float a, float b, float c){
      if(a > b && a < c || a < b && a > c){
           return a;
      }
      else if(b > a && b < c || b < a && b > c){
           return b;
      }
      else{
           return c;
      }
}
float menor(float a, float b, float c){
      if(a < b && a < c){
           return a;
      }
      else if(b < a && b < c){
           return b;
      }
      else{
           return c;
      }
}
int main(){
    float a, b, c, m, n, p; int i;
    printf("Digite os números a serem ordenados: "); scanf("%f", a); scanf("%f", b); scanf("%f", c);
    printf("Digite o valor de I: "), scanf("%d", i);
    m = maior(a, b, c); n = meio(a, b, c); p = menor(a, b, c);
    if(i == 1){
         printf("%f%f%f\n", m, n, p);
    }
    else if(i == 2){
         printf("%f%f%f\n", p, n, m);
    }
    else{
         printf("%f%f%f\n", n, m, p);
    }
    return 0;
}
