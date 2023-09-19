#include <stdio.h>

int main(){
    struct personne
    {
        char nom[30];
        int age;
    };
    struct personne p;
    
    printf("entrez votre nom \n");
    scanf("%s",&p.nom);
    printf("entrez votre age \n");
    scanf("%d",&p.age);

    
    printf("votre nom est : %s \n",p.nom);
    printf("votre age est : %d \n",p.age);
}