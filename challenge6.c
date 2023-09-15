#include <stdio.h>

int main() {
    int a;
    printf("Saisissez a : ");
    scanf("%d", &a);
    if(a < 0){
        printf("nombre est negative");
    }else if(a == 0){
        printf("nombre est null ");

    }else{
        printf("nombre est positive ");

    }


    return 0;
}
