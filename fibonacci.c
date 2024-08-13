#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1 = 0, n2 = 1;
    int proxn, tam;

    do{
    printf("Informe o tamanho requerente ao tanto de algarismos deve ter na sua sequencia Fibonacci: ");
    scanf("%d", &tam);

    if(tam <= 1){
        printf("Informe um tamanho maior que 1 algarismo\n\n");
    }
    }while(tam < 1);

    for(int i = 1; i < tam; i++){
        if(i > 2){
            proxn = n1 + n2;
            n1 = n2;
            n2 = proxn;
            printf("%d ", proxn);
        }
        if(i == 1){
            printf("%d ", n1);
        }
        if(i == 2){
            printf("%d ", n2);
        }
    }

    return 0;
}