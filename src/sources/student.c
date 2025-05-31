//
// Created by elkira01 on 5/30/25.
//
#include "../headers/student.h"

#include <stdio.h>
#include <stdlib.h>

void print_student(const Student student) {
    printf("\n*\n[Nom]: %s\n[Prenom]: %s\n[Matricule]: %s\n[Date naissance]: %s\n", student.first_name,
           student.last_name,
           student.matricule, parse_date(student.birth_date));
}

Student create_student() {
    Student new_student;

    char *first_name = malloc(sizeof(*first_name));
    char *last_name = malloc(sizeof(*last_name));
    char *matricule = malloc(sizeof(*matricule));
    Date *date = malloc(1000 * sizeof(*date));

    printf("Enter the first name:\n");
    scanf("%s", first_name);
    new_student.first_name = first_name;

    printf("Enter the last name:\n");
    scanf("%s", last_name);
    new_student.last_name = last_name;

    printf("Enter the matricule:\n");
    scanf("%s", matricule);
    new_student.matricule = matricule;

    printf("Date de naissance:\n");
    printf("Jour: ");
    scanf("%d", &date->day);
    printf("Mois: ");
    scanf("%d", &date->month);
    printf("Annee: ");
    scanf("%d", &date->year);

    new_student.birth_date = date;

    print_student(new_student);

    // printf("Notes\n");
    //
    // scanf("%lf", &new_student.notes[0]);
    // scanf("%lf", &new_student.notes[1]);
    // scanf("%lf", &new_student.notes[2]);
    // scanf("%lf", &new_student.notes[3]);
    // scanf("%lf", &new_student.notes[4]);

    return new_student;
}
