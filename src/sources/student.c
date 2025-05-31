//
// Created by elkira01 on 5/30/25.
//
#include "../headers/student.h"

#include <stdio.h>
#include <stdlib.h>

void print_student(const Student student) {
    printf("\n*\n[Nom]: %s\n[Prenom]: %s\n[Matricule]: %s\n[Date naissance]: %s\n[Notes]: [%f,%f,%f,%f,%f]",
           student.first_name,
           student.last_name,
           student.matricule, parse_date(student.birth_date),
           student.notes[0],
           student.notes[1],
           student.notes[2],
           student.notes[3],
           student.notes[4]
    );
}

Student create_student() {
    Student new_student;

    char *first_name = malloc(sizeof(*first_name));
    char *last_name = malloc(sizeof(*last_name));
    char *matricule = malloc(sizeof(*matricule));
    float *notes = malloc(5 * sizeof(float *));

    Date *date = malloc(sizeof(*date));
    date->day = malloc(sizeof(char *));
    date->month = malloc(sizeof(char *));
    date->year = malloc(sizeof(char *));

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
    scanf("%s%s%s", date->day, date->month, date->year);
    new_student.birth_date = date;

    printf("Notes\n");

    scanf("%f%f%f%f%f", &notes[0], &notes[1], &notes[2], &notes[3], &notes[4]);
    new_student.notes = notes;

    return new_student;
}
