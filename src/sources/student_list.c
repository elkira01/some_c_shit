//
// Created by elkira01 on 5/30/25.
//
#include "../headers/student_list.h"

#include <stdio.h>
#include <stdlib.h>


StudentList *init_list(const Student student) {
    StudentList *list = malloc(sizeof(*list));
    StudentNode *node = malloc(sizeof(*node));

    if (list == NULL || node == NULL) {
        exit(EXIT_FAILURE);
    }

    node->student = student;
    node->next = NULL;
    list->head = node;

    return list;
}

void insert_node_in_list(StudentList *list, const Student student) {
    StudentNode *node = malloc(sizeof(*node));

    if (list == NULL || node == NULL) {
        exit(EXIT_FAILURE);
    }

    node->student = student;
    node->next = list->head;
    list->head = node;
}

StudentNode *find_node_in_list(const StudentList *list, const char *matricule) {
    StudentNode *node = list->head;

    while (node != NULL && *(node->student.matricule) != *matricule) {
        node = node->next;
    }

    if (node != NULL) {
        return node;
    }

    return node;
}

int remove_node_from_list(StudentList *list, const char *matricule) {
    StudentNode *node = list->head;
    StudentNode *memo_prev = node;

    while (node != NULL && *(node->student.matricule) != *matricule) {
        print_student(node->student);
        memo_prev = node;
        node = node->next;
    }

    if (node != NULL) {
        if (node == list->head) {
            list->head = node->next;
        } else if (node->next == NULL) {
            memo_prev->next = NULL;
        } else {
            memo_prev->next = node->next;
        }

        return 1;
    }
    return 0;
}

void print_list(StudentList *list) {
    if (list != NULL) {
        const StudentNode *node = list->head;

        while (node != NULL) {
            print_student(node->student);
            node = node->next;
        }

        if (list->head == NULL) {
            printf("*\n*** Liste vide!\n");
        }
    } else printf("\n*** Liste vide\n");
}
