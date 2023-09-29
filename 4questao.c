#include <stdio.h>

int main(){
    char t;
    int s;
    int s2;
    
    scanf("%c", &t);
    scanf("%d", &s);

    if(t == 'a'){
        s2 = s * 1.05;
        printf("R$ %d", s2);
    } else if(t == 'b'){
        s2 = s * 1.07;
        printf("R$ %d", s2);
    } else if(t == 'c'){
        s2 = s * 1.08;
        printf("R$ %d", s2);
    }

    return 0;
}
