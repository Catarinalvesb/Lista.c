#include <stdio.h>

int main(){
    char input[10];
    int digit;
    int sum = 0;
    
    for(int i = 0; i < 10; i++){
        digit = getchar();
        if(digit == '\n' ){
            break;
        }
        input[i] = digit;
        sum += (digit - '0'); 
    }

    int number = atoi(input);

    if(number % 2 == 0){
        printf("%d é par\n", number);
    } else{
        printf("%d é ímpar\n", number);
    }

    printf("A soma dos algarismos de %d é %d", number, sum);

    return 0;
