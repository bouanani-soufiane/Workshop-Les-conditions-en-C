#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    char daysOfWeek[][15] = {
        "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"
    };

    int randomDay = rand() % 7;

    printf("Le jour aléatoire de la semaine est : %s\n", daysOfWeek[randomDay]);

    return 0;
}
