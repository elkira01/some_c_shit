//
// Created by elkira01 on 5/30/25.
//

#ifndef LIST_H
#define LIST_H

#include "student.h"

typedef struct Node StudentNode;

struct Node {
    Student student;
    StudentNode *next;
};

typedef struct List StudentList;

struct List {
    StudentNode *head;
};

StudentList *init_list(Student student);

void insert_node_in_list(StudentList *list, Student student);

StudentNode *find_node_in_list(const StudentList *list, const char *matricule);

int remove_node_from_list(StudentList *list, const char *matricule);

void print_list(StudentList *list);
#endif //LIST_H
