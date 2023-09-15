#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, delta;
    float x1, x2, x;
    printf("Saisissez a, b et c : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0 || b == 0 || c == 0) {
        printf("Veuillez saisir des nombre non nuls pour a, b et c.\n");
    } else {
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Pas de solution réelle dans R.\n");
        } else if (delta == 0) {
            x = -b / (2 * a);
            printf("La solution unique est : x = %.2f\n", x);
        } else {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            printf("Les solutions sont : x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
    }

    return 0;
}
