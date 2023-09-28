#include <stdio.h>
#include <stdlib.h>
int maiorValor(int *x, int *y, int *z){
    if(*x > *y && *x > *z){
        return *x;
    }
    if(*y > *x && *y > *z){
        return *y;
    }    
    if(*z > *y && *z > *x){
        return *z;
    }
    return 0;
}
int menorValor(int *x, int *y, int *z){
    if(*x < *y && *x < *z){
        return *x;
    }
    if(*y < *x && *y < *z){
        return *y;
    }    
    if(*z < *y && *z < *x){
        return *z;
    }
    return 0;
}
int medioValor(int *x, int *y, int *z, int a, int b){
    if(*x != a && *x != b){
        return *x;
    } else if(*y != a && *y != b){
        return *y;
    } else {
        return *z;
    }
    return 0;
}
void troca(int *x, int *y, int *z){
    int maior = maiorValor(x, y, z);
    int menor = menorValor(x, y, z);
    int meio = medioValor(x, y, z,maior, menor);
    *x = maior;
    *y = meio;
    *z = menor;
}
void leitura(int *x, int *y, int *z){
    printf("Informe o valor: ");
    scanf("%d", x);
    printf("Informe o valor: ");
    scanf("%d", y);
    printf("Informe o valor: ");
    scanf("%d", z);
}
int main(){
    int a, b, c;
    leitura(&a, &b, &c);
    troca(&a, &b, &c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}
