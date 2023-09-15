#include <stdio.h>

int main() {
    int mois, jours, heures, minutes, secondes,annee;
    
    printf("Entrez une annee : ");
    scanf("%d", &annee);
    annee = 2023 - annee;
    mois = annee * 12;
    jours = annee * 365;
    heures = jours * 24;
    minutes = heures * 60;
    secondes = minutes * 60;

    int choix;
    printf("Menu de conversion :\n");
    printf("1. Mois\n");
    printf("2. Jours\n");
    printf("3. Heures\n");
    printf("4. Minutes\n");
    printf("Choisissez une option : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            printf("%d annees equivalent a %d mois.\n", annee, mois);
            break;
        case 2:
            printf("%d annees equivalent a %d jours.\n", annee, jours);
            break;
        case 3:
            printf("%d annees equivalent a %d heures.\n", annee, heures);
            break;
        case 4:
            printf("%d annees equivalent a %d minutes.\n", annee, minutes);
            break;
        default:
            printf("Choix invalide.\n");
    }

    return 0;
}
