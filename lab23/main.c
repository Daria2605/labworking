#include "tree.h"
#include <stdio.h>
#include <string.h>

void add_menu(tree* t) {
    printf("\nEnter number: ");
    float s;
    scanf("%f", &s);
    if (!add(t, s)) {
        printf("This number was already added\n");
    }
}

void delete_menu(tree* t) {
    printf("\nEnter color: ");
    float s;
    scanf("%f", &s);
    if (!delete(t, s)) {
        printf("There is no such number\n");
    }
}

void menu(tree* t) {
    int c;
    do {
        printf("Options: \n");
        printf("1. Add node\n");
        printf("2. Delete node\n");
        printf("3. Checking elements\n");
        printf("4. Print tree\n");
        printf("5. Exit\n");
        printf("\nChoose option: ");
        c = getchar();
        if (c == '1') {
            printf("\n");
            add_menu(t);
        } else if (c == '2') {
            delete_menu(t);
        } else if (c == '3') {
            int start, end;
            printf("Enter range: ");
            scanf("%d %d", &start, &end);
            printf("Result: %d\n", checking_elements(*t, start, end));
        } else if (c == '4') {
            print_tree(*t);
        }  else if (c == '5' || c == EOF) {
            printf("Goodbye!\n");
            destroy_root(*t);
            break;
        } else {
            printf("Wrong option!\n");
        }
        while (c != '\n') {
            c = getchar();
        }
    } while (c != '5');
}

int main() {
    tree t = empty_tree();
    menu(&t);

    return 0;
}
