#include <stdio.h>
int main(){
    float a, b, c, d;
    printf("Digite três números em ordem crescente: "); scanf("%f", a); scanf("%f", b); scanf("%f", c);
    printf("Digite um número: ");  scanf("%f", d);
    if (d > a){
          printf("%f%f%f%f", d, a, b, c);
    }
    else if (d > b && d < a){
          printf("%f%f%f%f", a, d, b, c);
    }
    else if (d > c && d < b){
          printf("%f%f%f%f", a, b, d, c);
    }
    else{
          printf("%f%f%f%f", a, b, c, d);
    }
    return 0;
}
