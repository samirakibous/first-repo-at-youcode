#include<stdio.h>
#include<string.h>

int main()
{
    int choix,compteur=0,nb_etudiant=0,etudiant_moyenne=0,nb_sup;
    char nom[10], prenom[10];
    float note,sommeNotes=0, note_max=0,moyenne=0, note_min=100, notes[100];;
    char nom_max[10];
    char nom_min[10];

    do {
        printf("voici le menu principal:\n");

        printf("1. Cliquez pour ajouter un etudiant\n");
        printf("2. Cliquez pour afficher la moyenne\n");
        printf("3. Cliquez pour afficher les meilleures et moins bonnes notes avec les nom d'etudiants\n");
        printf("4. Nombre d'etudiants au-dessus de la moyenne\n");
        printf("5. Quitter\n");
        printf("Choisissez une option (1-5): ");
        scanf("%d", &choix);

        switch(choix) {
            case 1:
                printf("Veuillez saisir le prenom de l'etudiant \n");
                scanf("%s",prenom);
                printf("Veuillez saisir le nom de l'etudiant \n");
                scanf("%s",nom);
                printf("Veuillez saisir la note \n");
                scanf("%f",&note);
                compteur++;
                sommeNotes=sommeNotes+note;
                if (note < note_min) {
                    note_min=note;                                       
                    strcpy(nom_min, nom); 
                }
                if (note > note_max) {
                    note_max=note;
                    strcpy(nom_max, nom);
                }
                printf("\n l'etudiant a ete ajoute avec succes! \n");
                notes[compteur - 1] = note;
                break;
            case 2:
                if (compteur > 0) {
                    moyenne=sommeNotes/compteur;
                    printf("la moyenne est : %f \n",moyenne);
                } else {
                    printf("Aucun etudiant n'a ete ajoute.\n");
                }
                break;
            case 3:
                if (compteur > 0) {
                    printf("\n La pire note est %.2f \n", note_min);
                    printf("\n L'etudiant qui a la pire note est %s \n", nom_min);
                    printf("\n La meilleure note est %.2f \n", note_max);
                    printf("\n L'etudiant qui a la meilleure note est %s \n", nom_max);
                } else {
                    printf("Aucun etudiant n'a ete ajoute.\n");
                }
                break;
           case 4:
            if (compteur > 0) {
                    int nb_sup = 0;
                    for (int i = 0; i < compteur; i++) {
                        if (notes[i] > moyenne) {
                            nb_sup++;
                        }
                    }
                    printf("Nombre d'etudiants ayant une note supérieure à la moyenne: %d\n", nb_sup);
                } else {
                    printf("Aucun étudiant n'a été ajouté.\n");
                }
                break;


               
        }             
    } while (choix!=5);                                 
    return 0;
}