#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "student.h"
#include "tools.h"

// Запись одного элемента из текстового файла в бинарный
void write_student(FILE *fileToRead, FILE *fileToWrite) {
    Student student;

    while (fscanf(
            fileToRead, "%s %s %c %d %c %s %s %s", student.last_name, student.initials,
            &student.gender, &student.class_number, &student.class_letter, student.university,
            student.work_place, student.regiment) == 8 )
        fwrite(&student, sizeof student, 1, fileToWrite);

    fclose(fileToRead);
    fclose(fileToWrite);
}

void write_random_student(FILE *fileToWrite, int count) {
    // Обновление базы генератора случ. чисел
    srand(time(NULL));

    // Наборы случайных значений полей
    char *last_names[] = {"        Ivanov", "        Petrov", "      Vasiliev", "   Demidovich",
                          "       Zaitsev", "    Grigoriev", "       Bitukov", "    Alexandrov"};
    char *initials[] = {"AB", "AC", "BG", "DF", "PU", "GD", "AA", "MU", "NK"};
    char genders[] = "MF";
    char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *universities[] = {"  MAI", "  MSU", "BMSTU", " MADI", "MISiS", "    -"};
    char *work_places[] = {"         Gazprom", "           Sber", "Moscow Transport",
                           "      Alpha Bank", "          Yandex", "           Google",
                           "                -"};
    char *regiments[] = {"   Aviation", "       Navy", "   Infantry", "Air defense", " Borderline",
                         "         -"};

    // Запись в бинарный файл нескольких случайных элементов
    for (int i = 0; i < count; i++) {
        Student student;

        // Постепенное заполнение полей очередного студента случ. значениями
        int temp = rand() % 8;
        for (int j = 0; j < 14; j++) {
            student.last_name[j] = last_names[temp][j];
        }

        temp = rand() % 9;
        for (int j = 0; j < 5; j++)
            student.initials[j] = initials[temp][j];

        student.gender = genders[rand() % 2];

        // 15 возможных номеров класса
        student.class_number = rand() % 15 + 1;

        // 26 вариантов буквы
        student.class_letter = letters[rand() % 26];

        // Запись университета или прочерка (условие для увеличения вероятности установки прочерка)
        temp = rand() % 3 ? rand() % 5 : 5;
        for (int j = 0; j < 5; j++)
            student.university[j] = universities[temp][j];

        temp = rand() % 6;
        for (int j = 0; j < 16; j++)
            student.work_place[j] = work_places[temp][j];

        temp = rand() % 3 ? rand() % 5 : 5;
        for (int j = 0; j < 11; j++)
            student.regiment[j] = regiments[temp][j];

        // Запись в файл
        fwrite(&student, sizeof student, 1, fileToWrite);
    }
}

// Печать одной строки таблицы с форматированием длины ячейки
void printPerson(Student *p) {
    printf("= %16s = %8s = %6c = %12d = %12c = %17s = %18s = %16s =\n",
           p->last_name, p->initials, p->gender, p->class_number, p->class_letter, p->university, p->work_place,
           p->regiment);
}

// Проверка на наличие в строке прочерка
int defined(const char element[100]) {
    for (int i = 0; i < 100; i++)
        if (element[i] == '-')
            return 0;
    return 1;
}

// Вывод документации
void usage(void) {
    printf("Usage: [keys]\nKeys:\n");
    printf("\t-g - generate default database\n");
    printf("\t-f - print all entries in database\n");
    printf("\t-p - show classes in which students are in universities or in the army\n");
    printf("\t-d - clear database\n");
}

// Печать таблицы
void printFile(FILE *file, char divider[230]) {
    printf("%s\n", divider);
    printf("%s\n", HEADER);
    printf("%s\n", divider);
    Student student;
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        printPerson(&student);
        printf("%s\n", divider);
    }
    fclose(file);
}

// Проверка условия
void check_definitions(FILE *file) {
    Student student;

    // Таблица i-j-ых классов
    int classes[15][26];

    // Инициализация нулями
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 26; j++)
            classes[i][j] = 0;
    }
    char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // Проверка всех студентов из бд
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        // Получение номера буквы класса в латинском алфавите
        int num = 0;
        for (int i = 0; i < 26; i++) {
            if (letters[i] == student.class_letter) {
                num = i;
                break;
            }
        }
        // Проверка: если студент в вузе или в армии, а в его классе ранее не было неподходящих студентов, уст. соотв. ячейку таблицы в 1
        if ((defined(student.university) || defined(student.regiment)) && classes[student.class_number][num] != -1)
            classes[student.class_number][num] = 1;
        // Если студент не подходит, устанавливаем ячейку его класса в -1 (т. о. блокируем её)
        else
            classes[student.class_number][num] = -1;
    }
    // Ищем ячейки подходящих классов и печатаем соответствующие номера и буквы
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 26; j++)
            if (classes[i][j] == 1)
                printf("%d-%c\n", i, letters[j]);
    }
    fclose(file);
}