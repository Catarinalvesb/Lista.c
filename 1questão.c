#include <stdio.h>

int main(){
    char numero[10];
    int caractere;
    int soma = 0;
    
    for(int i = 0; i < 10; i++){
        caractere = getchar();
        if(caractere == '\n' ){
            break;
        }
        numero[i] = caractere;
        soma += (caractere - '0'); 
    }

    int numero2 = atoi(numero);

    if(numero2 % 2 == 0){
        printf("%d eh par\n", numero2);
        printf("A soma dos algarismos de %d eh %d", numero2, soma);
    } else{
        printf("%d eh  ímpar\n", numero2);
        printf("A soma dos algarismos de %d eh %d", numero2, soma);
    }

    return 0;
}
