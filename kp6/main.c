#include <stdio.h>
#include <string.h>
#include "tools.h"


int main(int argc, char *argv[]){
    // Вывод документации, если не передано аргументов
    if (argc < 2) {
        usage();
        return 0;
    }

    // Считывание аргументов
    char args[6] = {0, 0, 0, 0, 0};
    for (int i = 0; i < argc; i++) {
        if (!strcmp(argv[i], "-g")) args[0] = 1;
        else if (!strcmp(argv[i], "-f")) args[1] = 1;
        else if (!strcmp(argv[i], "-p")) args[2] = 1;
        else if (!strcmp(argv[i], "-d")) args[3] = 1;
        else if (!strcmp(argv[i], "-r")) args[4] = 1;
    }

    // Запись в бд данных из текстового файла
    if (args[0]) {
        FILE* fileToRead = fopen("default.txt", "r");
        FILE* fileToWrite = fopen("database.dat", "a+");
        write_student(fileToRead, fileToWrite);
    }

    // Вывод таблицы
    if (args[1]) {
        char rowDivider[230];
        memset(rowDivider, '-', 130);
        FILE* file = fopen("database.dat", "r");
        if (!file)
            printf("Database is not exist\n");
        else
            printFile(file, rowDivider);
    }

    // Вывод классов со всеми удовл. условиям студентами
    if (args[2]) {
        FILE* f = fopen("database.dat", "r");
        if (!f)
            printf("Database is not exist\n");
        else
            check_definitions(f);
    }

    // Удаление (очистка) бд
    if (args[3])
        remove("database.dat");

    // Запись в бд случайного набора из 5 студентов
    if (args[4]) {
        FILE* fileToWrite = fopen("database.dat", "a+");
        write_random_student(fileToWrite, 5);
    }

    return 0;
}
