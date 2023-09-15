#include <stdio.h>

int main() {
    float moyenne, n1, n2, n3;
    printf("Saisir la note 1, 2 et 3 : ");
    scanf("%f %f %f", &n1, &n2, &n3);
    moyenne = (n1 + n2 + n3) / 3;
    if (moyenne < 10) {
        printf("Relace!");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("Passable!");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("Assez bien!");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("Bien!");
    } else if (moyenne >= 16) {
        printf("Très bien!");
    }
    return 0;
}
