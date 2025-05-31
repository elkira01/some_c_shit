//
// Created by elkira01 on 5/31/25.
//
#include "../headers/date.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *parse_date(const Date *date) {
    char *date_str = malloc(4 * sizeof(*date_str));


    strcat(date_str, date->day);
    strcat(date_str, "/");
    strcat(date_str, date->month);
    strcat(date_str, "/");
    strcat(date_str, date->year);


    return date_str;
}
