//
// Created by elkira01 on 5/30/25.
//

#ifndef STUDENT_H
#define STUDENT_H

typedef struct Student Student;

struct Student {
    char *first_name;
    char *last_name;
    char *matricule;
};

void display_student(Student student);

Student create_student();
#endif //STUDENT_H
