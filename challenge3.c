#include <stdio.h>

struct Employe {
    char nom[50];
    float heuresTravaillees;
    float salaireHoraire;
};

int main() {
    struct Employe person; 
    printf("Entrer le nom de Lemploye : ");
    scanf("%s", person.nom);

    printf("Entrer le nombre d'heures travaillees : ");
    scanf("%f", &person.heuresTravaillees);

    printf("Entrer le salaire horaire : ");
    scanf("%f", &person.salaireHoraire);

    float salaireTotal = person.heuresTravaillees * person.salaireHoraire;

    printf("Nom de LemployE : %s\n", person.nom);
    printf("Salaire total : %.2f\n", salaireTotal);

    return 0;
}