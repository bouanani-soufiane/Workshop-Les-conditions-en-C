#include <stdio.h>

int main() {
    char x;

    printf("Entrez un caractère : ");
    scanf("%c", &x);

    if (x >= 'A' && x <= 'Z') {
        printf("Le caractère %c est une majuscule.\n", x);
    } else {
        printf("Le caractère %c n'est pas une majuscule.\n", x);
    }

    return 0;
}
