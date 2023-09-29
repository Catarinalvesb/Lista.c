#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    if(x == y){
        printf("Os valores lidos são iguais.\n");
    } else {
        int maior = (x > y) ? x : y;
        int menor = (x < y) ? x : y;

        printf("%d é maior que %d. ", maior, menor);

        if(maior % menor == 0){
            printf("%d é múltiplo de %d.\n", maior, menor);
        } else {
            printf("%d não é múltiplo de %d.\n", maior, menor);
        }
    }

    return 0;
}
