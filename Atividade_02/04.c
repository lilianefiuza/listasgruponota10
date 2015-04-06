#include <stdio.h>
int main(){
    float a, b, c;
    printf("Digite um número: "); scanf("%f", a);
    printf("Digite um número: "); scanf("%f", b);
    printf("Digite um número: "); scanf("%f", c);
    if (a > b && a > c){
          if (b > c)
                printf("%f%f%f\n", a, b, c);
          else
                printf("%f%f%f\n", a, c, b);
    }
    else if (b > a && b > c){
          if (a > c)
                printf("%f%f%f\n", b, a, c);
          else
                printf("%f%f%f\n", b, c, a);
    }
    else{
          if (a > b)
                printf("%f%f%f\n", c, a, b);
          else
                printf("%f%f%f\n", c, b, a);
    }
    return 0;
}
