//
// Created by elkira01 on 5/30/25.
//
#include "../headers/student.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void display_student(const Student student) {
    printf("\nFirst name: %s\nLast name: %s\nMatricule: %s\n\n", student.first_name, student.last_name,
           student.matricule);
}

Student create_student() {
    Student new_student;

    char *first_name = malloc(sizeof(*first_name));
    char *last_name = malloc(sizeof(*last_name));
    char *matricule = malloc(sizeof(*matricule));

    printf("Enter the first name:\n");
    scanf("%s", first_name);
    new_student.first_name = first_name;

    printf("Enter the last name:\n");
    scanf("%s", last_name);
    new_student.last_name = last_name;

    printf("Enter the matricule:\n");
    scanf("%s", matricule);
    new_student.matricule = matricule;

    return new_student;
}
