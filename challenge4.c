#include<stdio.h>
#include<string.h>


int main()
{
    struct etudiant{
        char name[50];
        int age;

    };
    int j;
    char c;
    int i = 0;
    struct etudiant et[5];
    printf("Bienvenue dans le gestionnaire d'etudiants!\n");
    while(i < 5)
    {
        printf("Entrer le nom d'etudiant: \n");
        scanf(" %s", &et[i].name);
        printf("Entrer l'age d'etudiant: \n");
        scanf("%d", &et[i].age);
        printf(" Etudiant ajoute avec succes!\n");
        printf(" Est que vous voulez ajouter un autre etudiant Y/N: ");
        scanf(" %c", &c);
        if (c == 'Y')
        {
            i++; 
        }
        else if (c == 'N')
        {
            j = 0;
            while (j <= i)
            {
                printf("%d. Nom: %s, Age: %d\n", j+1, et[j].name, et[j].age);
                j++;
            }

            break ;
        }
        
    }

}