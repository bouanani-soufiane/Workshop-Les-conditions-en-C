#include <stdio.h>

int main() {
    char l;
    printf("saisir la lettre : ");
    scanf(" %c", &l);
    if(l >= 'A' && l <= 'Z' ||l >= 'a' && l <= 'z'){
        if(l >= 'A' && l <= 'Z'){
            printf("its an alphabet Upper Case");
        }else{
            printf("its an alphabet lower Case");
        }
    }else{
        printf("its not an alphabet");
    }
    return 0;
}
