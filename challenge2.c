#include <stdio.h>

int main() {
    char a;
    printf("Saisir la lettre : ");
    scanf(" %c", &a);
    switch (a) {
        case 'a':
        case 'e':
        case 'u':
        case 'i':
        case 'y':
        case 'o':
            printf("%c est une voyelle.\n", a);
            break;
        default:
            printf("%c n'est pas une voyelle.\n", a);
            break;
    }
    return 0;
}
