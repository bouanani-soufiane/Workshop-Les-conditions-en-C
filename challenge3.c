#include <stdio.h>

int main() {
    int a,b,somme, tripple;
    printf("saisir le premier nombre : ");
    scanf("%d",&a);
    printf("saisir le 2eme nombre : ");
    scanf("%d",&b);
    somme = a + b ;
    if(a == b){
        tripple = somme * 3;
        printf("les 2 nombre sont identiques \n");
        printf("leur somme est : %d\n", somme);
        printf("leur tripple est : %d", tripple);
    }else{
        printf("les 2 nombre ne sont pas identiques \n");
        printf("leur somme est : %d", somme);
    }


    return 0;
}
