#include <stdio.h>

#include "headers/student.h"
#include "headers/student_list.h"


int main(void) {
    StudentList *list = NULL;
    char *search_str = malloc(sizeof(*search_str));
    StudentNode *student_node = NULL;

    const int total = 3;
    int count = 0;


    do {
        const Student student_instance = create_student();

        if (count == 0) {
            list = init_list(student_instance);
        } else {
            insert_node_in_list(list, student_instance);
        }

        print_list(list);

        count = count + 1;
    } while (count < total);

    printf("\nFind a student by matricule\n");
    scanf("%s", search_str);
    student_node = find_node_in_list(list, search_str);

    if (student_node != NULL) {
        print_student(student_node->student);
    } else {
        printf("\n!!! Student not found in the list\n");
    }


    printf("\nRemove a student by matricule\n");
    scanf("%s", search_str);
    const int removed = remove_node_from_list(list, search_str);

    if (removed) {
        printf("\n--- Updated list ---\n");
        print_list(list);
    } else {
        printf("\n!!! Student not found in the list\n");
    }


    return 0;
}
