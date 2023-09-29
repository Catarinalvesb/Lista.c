#include <stdio.h>
#include <string.h>

int main(){
    char senha[5];
    int senhaInt, tentativaInt;
    char tentativa[5];

    printf("Digite a senha (4 caracteres): ");
    scanf("%4s", senha);
    senha[4] = '\0';

    do {
        printf("Digite a tentativa (4 caracteres): ");
        scanf("%4s", tentativa);
        tentativa[4] = '\0';

        senhaInt = atoi(senha);
        tentativaInt = atoi(tentativa);

        if(senhaInt == tentativaInt) {
            printf("Senha válida!\n");
        } else {
            printf("Senha inválida!\n");
        }
    } while(senhaInt != tentativaInt);

    return 0;
}
