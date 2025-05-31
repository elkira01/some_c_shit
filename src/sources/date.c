//
// Created by elkira01 on 5/31/25.
//
#include "../headers/date.h"

#include <stddef.h>
#include <stdio.h>
#include <string.h>

char *parse_date(const Date *date) {
    char *date_str = "";

    printf("Year");
    date_str = strcat("bonjour", "/");
    // date_str = strcat(date_str, (char *) date->month);
    // date_str = strcat(date_str, "/");
    // date_str = strcat(date_str, (char *) date->year);


    return date_str;
}
