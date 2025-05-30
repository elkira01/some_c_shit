#include <stdio.h>

#include "headers/student.h"
#include "headers/student_list.h"


int main(void) {
    StudentList *list = NULL;

    const int total = 100;
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

    return 0;
}
