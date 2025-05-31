//
// Created by elkira01 on 5/30/25.
//

#ifndef STUDENT_H
#define STUDENT_H

#include "date.h"

typedef struct Student Student;

struct Student {
    char *first_name;
    char *last_name;
    char *matricule;
    float *notes;
    Date *birth_date;
};

void print_student(Student student);

Student create_student();
#endif //STUDENT_H
