#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    char last_name[100];
    char initials[5];
    int class_number;
    char class_letter;
    char gender;
    char university[100];
    char work_place[100];
    char regiment[100];
} Student;

#endif