#include <stdio.h>
#include <stdlib.h>

#include "headers/student.h"
#include "headers/student_list.h"


int main(void) {
    const int MAX_STUDENTS = 1500;
    const int exit = -1;

    StudentList *list = NULL;
    StudentNode *student_node = NULL;
    char *search_str = malloc(sizeof(*search_str));

    int chosen_action = 0;
    int counter = 0;


    do {
        printf("\n====== Chosir une action ======\n");
        printf(
            "\n1- Ajouter un eleve\n2- Trouver un eleve\n3- Supprimer un eleve\n4- Modifier un eleve\n5- Afficher tous les eleves\n6- Classer les eleves par age\n7- Quitter\n");
        scanf("%d", &chosen_action);

        switch (chosen_action) {
            case 1: {
                const Student student_instance = create_student();

                if (counter == 0) {
                    list = init_list(student_instance);
                } else {
                    insert_node_in_list(list, student_instance);
                }
                printf("\n---- Liste a jour des etudiants ----\n");

                print_list(list);

                counter = counter + 1;
            }
            break;
            case 2: {
                printf("\nInserez le matricule de l'etudiant\n");
                scanf("%s", search_str);
                student_node = find_node_in_list(list, search_str);

                if (student_node != NULL) {
                    print_student(student_node->student);
                } else {
                    printf("\nMatricule abscent de la liste\n");
                }
            }
            break;
            case 3: {
                printf("\nInserez le matricule de l'etudiant\n");
                scanf("%s", search_str);

                if (remove_node_from_list(list, search_str)) {
                    printf("\n---- Liste a jour des etudiants ----\n");
                    print_list(list);
                } else {
                    printf("\nMatricule abscent de la liste\n");
                }
            }
            break;
            case 4: {
            }
            break;
            case 5: {
                printf("\n---- Liste des etudiants ----\n");
                print_list(list);
            }
            break;
            default: {
                printf("\nAction non disponible, arret du programme ...\n");
                chosen_action = exit;
            }
            break;
        }
    } while (chosen_action != exit && counter < MAX_STUDENTS);

    return 0;
}
