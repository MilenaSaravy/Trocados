#include <stdio.h>

void trocarValores(int *x1, int *x2) {
    int aux = *x1;
    *x1 = *x2;
    *x2 = aux;
}

int main() {
    int x1, x2;
    
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &x1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &x2);
    
    printf("Valores originais: x1 = %d x2 = %d\n", x1, x2);
    trocarValores(&x1,&x2);
    printf("Valores trocados: x1 = %d x2 = %d\n", x1, x2);
    
    return 0;
}
