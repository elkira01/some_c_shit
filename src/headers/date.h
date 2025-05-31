//
// Created by elkira01 on 5/31/25.
//

#ifndef DATE_H
#define DATE_H

typedef struct Date Date;

struct Date {
    int day;
    int month;
    int year;
};

char *parse_date(const Date *);

#endif //DATE_H
