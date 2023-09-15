#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int  n, i, result ;
    int rest[10];
    int = 0;
    printf("saisir le nombre en decimal : ");
    scanf ("%d",&n);
    while(n != 0 ){
        reste[i] = n % 16;
        n = n / 16;
        i++;
    }
    for(i = 0; i < 10; i++){
        printf("%d | ",rest[i]);
    }
    return 0;
}
