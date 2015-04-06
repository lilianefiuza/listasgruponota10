#include <stdio.h>
int main(){
    int a; float b;
    scanf("%d", a);
    b = a%2;
    if(b == 0)
         printf("É par\n");
    else
         printf("É ímpar\n");
    return 0;
}
