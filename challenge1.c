#include <stdio.h>


int main() {    
    int a;
    printf("saisir le nombre : ");
    scanf("%d",&a);
    if(a%2 == 0){
        printf("le nombre %d est pair");
    }else{
        printf("le nombre %d est impair");
    }
    return 0;
}
