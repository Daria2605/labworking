#ifndef TOOLS_H
#define TOOLS_H

#include "student.h"

// Заголовок таблицы
#define HEADER "=        Last name = Initials = Gender = Class number = Class letter =        University =         Work place =         Regiment ="

void write_student(FILE *fileToRead, FILE *fileToWrite);

void printPerson(Student*);

void write_random_student(FILE *fileToWrite, int count);

void usage(void);

void check_definitions(FILE*);

void printFile(FILE*, char[130]);

#endif
